#ifndef RoboticArm_h
#define RoboticArm_h

class RoboticArm(){
	private:
		double x,y,z;
		bool sujetando;
	public:
		//Constructor
		RoboticArm(double x, double y, double z, bool sujetando);

		//Consultores
		const double getx();
		const double gety();
		const double getz();
		const bool getsujetando();

		//Acciones
		void grab();
		void release();
		void move(double newX, double newY, double newZ);
	};

#endif
