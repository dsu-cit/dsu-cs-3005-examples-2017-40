all: main
	./main

memtest: main.cpp Todo.cpp Todo.h
	g++ -o memory_test -std=c++11 -Wall -Werror -g main.cpp Todo.cpp Todo.h
	valgrind --leak-check=full ./memory_test

main: main.cpp Todo.cpp Todo.h
	g++ -o main -std=c++11 -Wall -Werror main.cpp Todo.cpp
