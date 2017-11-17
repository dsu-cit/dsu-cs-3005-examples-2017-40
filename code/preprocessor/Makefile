#DEFS     := -DDEBUG=2
CXXFLAGS := -std=c++11 -Wall -Werror $(DEFS)

all: main

run: main
	./main

main.o: main.cpp funcs.h Makefile
	$(CXX) $(CXXFLAGS) -c $<

funcs.o: funcs.cpp funcs.h Makefile
	$(CXX) $(CXXFLAGS) -c $<

main: main.o funcs.o
	$(CXX) -o $@ $(CXXFLAGS) $^

clean:
	-rm *~ *.o
	-rm main


