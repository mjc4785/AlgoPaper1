#include<cstdio>
#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
// reasons for using these are for cin input and printf.

/*
This funtion is a classic euclid's algorithm. parts explained in the previous file.
this function is the same as the previous one. Only difference is in the main function. 
*/
int gcd(int m, int n, int& loops){
	int div;
	(m > n) ? (div = n) : (div = m);
	while(div > 0){
		loops++;
		if((m % div == 0) && (n % div == 0)){return div;}
		else{div--;}
	}
	return 1; // if no common denom is found, 1 is the only common divisor. 
}


/*
The only real difference between this function and the function in euclid's.cpp is that this one has a for loop that
while the gcd is 1, it re-calls the GCD fucntion with a decremented first value until a GCD greater than one is found.
*/
int main(){
	int first;
	int second;
	int n;
	int loopy = 0;

	printf("Input the first of two positive integers = ");
	cin >> first;	
	printf("Input the second of two positive integers = ");
	cin >> second;
	int initial = first;

	auto start = high_resolution_clock::now();
	n = gcd(first, second, loopy);
	auto end = high_resolution_clock::now();
	
	printf("\nGCD of %d and %d is -> %d\n",first, second, n);
	printf("And it took %d loops! from %d to %d.\n", loopy, initial, (first-loopy));
	
	auto duration = duration_cast<milliseconds>(end - start);
        
	printf("\nTime taken: %ld ms\n", duration.count());
	
	return 0;
}
