#pragma once

class OBJECT_SPACE
{
	
private:
	int SOLAR_SYSTEM[15];
	long int SPACE_OBJECT;
	int DIAMETER;
	long int DISTANCE_FROM_SUN;
	long int TEMPERATURE_BY_KELVIN;
public:
	OBJECT_SPACE();
	void setSpace_OBJECT_DISTANCE_FROM_EARTH(long int S_O);
	void setSpace_OBJECT_DIAMETER_EQUATOR_OF_PLANET(int D);
	void setSpace_OBJECT_DISTANCE_FROM_SUN(int D_F_S);
	void setSpace_OBJECT_TEMPERATURE_BY_KELVIN(long int T_B_K);
	int getSpace_OBJECT_DISTANCE_FROM_EARTH(long int S_O);
	int getSpace_OBJECT_DIAMETER_OF_PLANET(int D);
	int getSpace_OBJECT_DISTANCE_FROM_SUN(int D_F_S);
	int getSpace_OBJECT_TEMPERATURE_BY_KELVIN(long int T_B_K);
	int setSpace_OBJECT_FROM_LIST_VALID_HABITABLE_PLANET_CHARACTERISTICS();//valid in executionCode	
};
OBJECT_SPACE::OBJECT_SPACE()
{
	SOLAR_SYSTEM[15] = SOLAR_SYSTEM[1];
	SPACE_OBJECT = 0;
	DIAMETER = 0;
	DISTANCE_FROM_SUN = 0;
	TEMPERATURE_BY_KELVIN = 0;
}
void OBJECT_SPACE::setSpace_OBJECT_DISTANCE_FROM_EARTH(long int S_O)
{
	SPACE_OBJECT = S_O;
}
void OBJECT_SPACE::setSpace_OBJECT_DIAMETER_EQUATOR_OF_PLANET(int D)
{
	DIAMETER = D;
}
void OBJECT_SPACE::setSpace_OBJECT_DISTANCE_FROM_SUN(int D_F_S)
{
	DISTANCE_FROM_SUN = D_F_S;
}
void OBJECT_SPACE::setSpace_OBJECT_TEMPERATURE_BY_KELVIN(long int T_B_K)
{
	TEMPERATURE_BY_KELVIN = T_B_K;
}
int OBJECT_SPACE::getSpace_OBJECT_DISTANCE_FROM_EARTH(long int S_O)
{
	return SPACE_OBJECT;
}
int OBJECT_SPACE::getSpace_OBJECT_DIAMETER_OF_PLANET(int D)
{

}
int OBJECT_SPACE::getSpace_OBJECT_DISTANCE_FROM_SUN(int D_F_S)
{

}
int OBJECT_SPACE::getSpace_OBJECT_TEMPERATURE_BY_KELVIN(long int T_B_K)
{

}
int OBJECT_SPACE::setSpace_OBJECT_FROM_LIST_VALID_HABITABLE_PLANET_CHARACTERISTICS()
{

}