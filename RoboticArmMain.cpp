#include <iostream>
#include "RoboticArm.h"

int main(){
	RoboticArm robot(1.0, 4.3, 6.0, false);

	std::cout<< "Posición inicial: ("<< robot.getX() << ", " << robot.getY() << ", "<< robot.getZ() <<")" << std::endl;
	std::cout << " ¿Esta sujetando un objeto? "<< std::endl << (robot.getSujetando() ? "Sí" : "No") << std::endl;

	robot.move(-1.4, 3.0, 7.2);
	robot.grab();
	
	std::cout<< "Instrucciones realizadas, situación actual:" << std::endl;
	std::cout<< "Posición: ("<< robot.getX() << ", " << robot.getY() << ", "<< robot.getZ() <<")" << std::endl;
        std::cout << " ¿Esta sujetando un objeto? "<< std::endl << (robot.getSujetando() ? "Sí" : "No") << std::endl;

	return 0;
}	


