/*
Author: Jorge Meza
Program CodeName: Stellar-Traveling-Estimation
					STE
Menu
-- Create Your Spacecraft Speeed Arrival Document

1. Earth-To-Mercury //Dist 48 million miles> 1.1 
2. Earth-To-Venus	//Dist	93 million miles
3. Earth-To-Mars	//Dist	33.9 Millio nmiles
4. Earth-To-Marsr	//Dist	365 million miles
5. Earth-To-Saturn	//Dist 746 million miles
6. Earth-To-Neptune	//Dist 2.7billion miles
7. Meteor_Churyumov //Dist 317 Million miles

*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
using namespace std;
string filename;
long const int E_Merc = 48000000;//Miles from Earth other planet
long const int E_Venus = 93000000;
long const int E_Mars = 33900000;
long const int E_Jupiter = 365000000;
long const int E_Saturn = 746000000;
long const int E_Neptune = 2700000000;
long const int Meteor_Churyumov = 317000000;//Meteor
//End global constant variables


void EarthToCalc(int&,int &,int,int&,int&);
void Menu();

int main() {
	//ofstream file;
	//file.open("");
	int choice;
	int speed;
	int choice2;
	int distance = 0;
	int hours;
	do {
		Menu();
		cin >> choice;
		switch (choice) {
		case 1:cout << "Mercury is " << E_Merc << " miles away from Earth.\n";
			EarthToCalc(distance,hours,E_Merc,speed,choice2);
			break;
		case 2:cout << "Venus is " << E_Venus <<  " miles away from Earth.\n";
			EarthToCalc(distance, hours, E_Venus,speed,choice2);
			break;
		case 3:cout << "Mars is " << E_Mars << " miles away from Earth.\n";
			EarthToCalc(distance, hours, E_Mars,speed,choice2);
			break;
		case 4:cout << "Jupiter is " << E_Jupiter << " miles away from Earth.\n";
			EarthToCalc(distance, hours, E_Jupiter,speed,choice2);
			break;
		case 5:cout << "Saturn is " << E_Saturn << " miles away from Earth.\n";
			EarthToCalc(distance, hours, E_Saturn,speed,choice2);
			break;
		case 6:cout << "Neptune is " << E_Neptune << " miles away from Earth.\n";
			EarthToCalc(distance, hours, E_Neptune,speed,choice2);
			break;
		case 7:cout << "Meteor Churyumov is " << Meteor_Churyumov << " miles away from Earth.\n";
			EarthToCalc(distance, hours, Meteor_Churyumov,speed,choice2);
			break;
		default:exit(1);
			break;

	}
	}while (choice!=8);
	system("cls");
	return main();
	system("pause");
	return 0;
}
void EarthToCalc(int& distance, int &hours, int destination, int &speed,int &choice2) {
	do {
		cout << "Spacecraft Speed[1600.90]: ";
		cin >> speed;
		//cout << setw(4)<<"Hours"<<setw(4)<<" Distance"<<endl;
		//cout << "---------------\n";
		for (int index = 0; index <= destination; index++) {
			distance = index*speed;
			//cout << index << setw(6) << " " << distance << endl;
			/*if (distance >= destination) {						
				cout << "At that speed it takes "<<index<<" hours to get there.";
			}*/			
				if (distance >= destination) {
					cout << "Destination Reached with Speed set " << speed << " miles/h\n";
					cout << "Hours to get there: " << index << endl;
					system("pause");
				}
		
		}
	}while(distance!=destination);
}
void Menu() {
	cout << "Spacecraft Arrival Calculator\n";
	cout << "________________________________\n";
	cout << "1> Earth-To-Mercury\n";
	cout << "2> Earth-To-Venus\n";
	cout << "3> Earth-To-Mars\n";
	cout << "4> Earth-To-Jupiter \n";
	cout << "5> Earth-To-Saturn\n";
	cout << "6> Earth-To-Neptune\n";
	cout << "7> Meteor_Churyumov\n";
	cout << "1-7: \n";


}