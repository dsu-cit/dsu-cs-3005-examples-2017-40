all: main
	./main

memtest: main.cpp Robot.cpp Robot.h VacuumRobot.cpp VacuumRobot.h
	g++ -o memory_test -std=c++11 -Wall -Werror -g main.cpp Robot.cpp VacuumRobot.cpp
	valgrind --leak-check=full ./memory_test

main: main.cpp Robot.cpp Robot.h VacuumRobot.cpp VacuumRobot.h
	g++ -o main -std=c++11 -Wall -Werror main.cpp Robot.cpp VacuumRobot.cpp

clean:
	-rm -f *.o *~ main
