CXX = g++
CXXFLAGS = -Wall -O2

all: euclids nminusone primefactor

euclids: euclids.cpp
	$(CXX) $(CXXFLAGS) euclids.cpp -o euclids 

nminusone: nminusone.cpp
	$(CXX) $(CXXFLAGS) nminusone.cpp -o nminusone 

primefactor: primefactor.cpp
	$(CXX) $(CXXFLAGS) primefactor.cpp -o primefactor 

clean:
	rm -f euclids nminusone primefactor

run-euc:
	./euclids

run-nmin:
	./nminusone

run-pri:
	./primefactor
