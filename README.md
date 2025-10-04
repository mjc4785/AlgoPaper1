# ALGO ONE PAPER
this repository is simply to hold all of my code for easy transport between VM and Windows machine. 
## Contact
- Author: Maxwell Castle
- Personal Email: maxwell.j.castle@gmail.com
- School Email: maxwelc2@umbc.edu
### Content
- ***euclids.cpp:*** A simple greatest common denominator algorithm that runs recursively. 
- ***nminusone.cpp:*** Simply takes the smaller of two input integers and checks if it divides both numbers evenly. if not, decrement by one and check again until something divides both numbers.  
- ***primefactor.cpp:*** A code to find the prime factors of a number given to the code with a time efficiency of sqrt(n) time. 
- ***Q3prime.cpp*** A code that takes in two numbers to find the prime factors of and spits out their GCD.
- ***Makefile:*** A file to compile, run, and clean the code. 
    - *'make'* to compile the code.
    - *'make run-euc'* to run the compiled euclids code
    - *'make run-nmin'* to run the euclids code with the subtraction based on GCD number.
    - *'make run-pri'* to run the prime factorization algorithm!
    - *'make run-q'* runs the prime factor function for question three. 
    - *'make clean'* to get rid of executables. 
    - *'make val'* will run valgrind on the primefactor executable due to the inclusion of vectors. 