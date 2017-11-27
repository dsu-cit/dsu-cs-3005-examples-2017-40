CXXFLAGS := -std=c++11 -Wall -Werror -g

all: main main2

main: main.cpp
	g++ $(CXXFLAGS) -o main main.cpp

main2: main2.cpp
	g++ $(CXXFLAGS) -o main2 main2.cpp

run: main
	./main

memtest: 
	g++ $(CXXFLAGS) -o memory_test -g main.cpp
	valgrind --leak-check=full ./memory_test

both: run memtest

clean:
	-rm -f *.o *~ main
