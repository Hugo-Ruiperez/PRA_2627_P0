#ifndef RoboticArm_h
#define RoboticArm_h

class RoboticArm {
	private:
		double x,y,z;
		bool sujetando;
	public:
		//Constructor
		RoboticArm(double x, double y, double z, bool sujetando);

		//Consultores
		const double getX();
		const double getY();
		const double getZ();
		const bool getSujetando();

		//Acciones
		void grab();
		void release();
		void move(double newX, double newY, double newZ);
	};

#endif
