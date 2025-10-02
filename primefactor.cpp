#include<cstdio>
#include<iostream>
#include<cmath>
#include <chrono>  
using namespace std;
using namespace std::chrono;

/*
 * im very proud of this function. It simply finds three different cases. and does so in sqrt(n) time.
 * first it divides the input number by two. if there is any remainder, it'll add one to the divisor. if there is no 
 * remainder, it'll recursively call this fucntion with the nunmber / the divisor. 
 * I think this algorithm is quite pretty and is much more compact than euclid's for example
 */
void primefact(long long num, long long div){
	if (num == div){ 
		printf("%lld", div); 
		return;
	}

	if(num % div == 0){
		printf("%lld ", div);
		primefact((num/div), div);
		return;
	}
	else{
		primefact(num, (div+1));
		return;
	}
} 

int main(){
	long long num;
	printf("What number would you like to know the prime factors of? = ");
	cin >> num;	
	auto start = high_resolution_clock::now();
	primefact(num, 2);
	auto end = high_resolution_clock::now();
	printf("\n");	
	auto duration = duration_cast<milliseconds>(end - start);
	printf("\nTime taken: %ld ms\n", duration.count());
	return 0;
}
