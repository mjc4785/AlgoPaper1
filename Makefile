CXX = g++
CXXFLAGS = -Wall -O2

all: euclids nminusone

euclids: euclids.cpp
	$(CXX) $(CXXFLAGS) euclids.cpp -o euclids 

nminusone: nminusone.cpp
	$(CXX) $(CXXFLAGS) nminusone.cpp -o nminusone 

clean:
	rm -f euclids nminusone 

run-euc:
	./euclids

run-nmin:
	./nminusone
