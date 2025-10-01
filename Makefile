CXX = g++
CXXFLAGS = -Wall -O2

all: main

main: helloworld.cpp
	$(CXX) $(CXXFLAGS) helloworld.cpp -o main 

clean:
	rm -f main 

run:
	./main
