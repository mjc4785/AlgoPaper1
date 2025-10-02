#include<cstdio>
#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
// I will be using cstdio for the ability to use printf
// and iostream for the ability to take in numbers of any size. 

int gcd(int m, int n){
	if(n == 0){ // if m is the greatest common factor, so the mod of n % m is 0
		return m;
	}
	else{
		return gcd(n, m % n); // recursivly call this if you havent reached the GCD yet
	}
}

int main(){
	int first;	// first input for function
	int second;	// second input for function

	printf("Input the first of two positive integers = ");
	cin >> first;	
	printf("Input the second of two positive integers = ");
	cin >> second;
	auto start = high_resolution_clock::now();
	int n = gcd(first, second);		
	auto end = high_resolution_clock::now();
	// find the gcd by calling function	
	printf("GCD of %d and %d is -> %d\n",first, second, n); // prints the gcd of the inputs 
	auto duration = duration_cast<milliseconds>(end - start);
	printf("\nTime taken: %ld ms\n", duration.count());
	return 0;
}
