CXXFLAGS := -std=c++11 -Wall -Werror

all: main

main: main.cpp
	g++ $(CXXFLAGS) -o main main.cpp

run: main
	./main

memtest: 
	g++ $(CXXFLAGS) -o memory_test -g main.cpp
	valgrind --leak-check=full ./memory_test

both: run memtest

clean:
	-rm -f *.o *~ main
