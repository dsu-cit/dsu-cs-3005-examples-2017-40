CXXFLAGS := -Wall -Werror -std=c++11

main: main.cpp object.h object.cpp gold.h gold.cpp pit.h pit.cpp
	g++ $(CXXFLAGS) -o main main.cpp object.cpp gold.cpp pit.cpp

run: main
	./main


