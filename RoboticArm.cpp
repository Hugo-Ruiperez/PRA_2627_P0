#include "RoboticArm.h"

//Constructor
RoboticArm::RoboticArm(double iniX, double iniY, double iniZ, bool sujetando){
	x = iniX;
	y = iniY;
	z = iniZ;
	sujetando = sujetando;
}

//Consultores

const double RoboticArm::getX(){
	return x;
}

const double RoboticArm::getY(){
        return y;
}

const double RoboticArm::getZ(){
        return z;
}

const bool RoboticArm::getSujetando(){
        return sujetando;
}

//Acciones
void RoboticArm::grab(){
	sujetando=true;
}

void RoboticArm::release(){
        sujetando=false;
}

void RoboticArm::move(double newX, double newY, double newZ){
	x = newX;
	y = newY;
	z = newZ;
}
