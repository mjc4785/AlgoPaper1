CXX = g++
CXXFLAGS = -Wall -O2

all: euclids nminusone primefactor Q3prime

euclids: euclids.cpp
	$(CXX) $(CXXFLAGS) euclids.cpp -o euclids 

nminusone: nminusone.cpp
	$(CXX) $(CXXFLAGS) nminusone.cpp -o nminusone 

primefactor: primefactor.cpp
	$(CXX) $(CXXFLAGS) primefactor.cpp -o primefactor 

Q3prime: Q3prime.cpp
	$(CXX) $(CXXFLAGS) Q3prime.cpp -o Q3prime  

clean:
	rm -f euclids nminusone primefactor Q3prime

val:
	valgrind --leak-check=full ./primefactor

run-euc:
	./euclids

run-nmin:
	./nminusone

run-pri:
	./primefactor

run-q:
	./Q3prime
