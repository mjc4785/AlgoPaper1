#include<cstdio>
#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
// I will be using cstdio for the ability to use printf
// and iostream for the ability to take in numbers of any size. 

int gcd(int m, int n, int& divs){
	if(n == 0){ // if m is the greatest common factor, so the mod of n % m is 0
		return m;
	}
	else{
		divs++;
		return gcd(n, m % n, divs); // recursivly call this if you havent reached the GCD yet
	}
}

int main(){
	int first;	// first input for function
	int second;	// second input for function
	int divs = 0;

	printf("Input the first of two positive integers = ");
	cin >> first;	
	printf("Input the second of two positive integers = ");
	cin >> second;

	auto start = high_resolution_clock::now();
	int n = gcd(first, second, divs);		
	auto end = high_resolution_clock::now();
	
	// find the gcd by calling function	
	printf("\nGCD of %d and %d is -> %d\n",first, second, n); // prints the gcd of the inputs 
	printf("number of division(s) -> %d", divs); // prints the gcd of the inputs 
	
	auto duration = duration_cast<milliseconds>(end - start);
	printf("\nTime taken: %ld ms\n", duration.count());
	return 0;
}
