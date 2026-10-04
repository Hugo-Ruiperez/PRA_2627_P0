all: programa

RoboticArm.o: RoboticArm.cpp RoboticArm.h
	g++ -c RoboticArm.cpp

RoboticArmMain.o: RoboticArmMain.cpp RoboticArm.h
	g++ -c RoboticArmMain.cpp

programa: RoboticArmMain.o RoboticArm.o
	g++ -o programa RoboticArmMain.o RoboticArm.o

clean:
	rm -f *.o programa

test: all
	./programa
