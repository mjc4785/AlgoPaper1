#include<cstdio>
#include<iostream>
using namespace std;
// reasons for using these are for cin input and printf.

/*
This funtion is a classic euclid's algorithm. parts explained in the previous file.
this function is the same as the previous one. Only difference is in the main function. 
*/
int gcd(int m, int n){
	if(n == 0){
		return m;
	}
	else{
		return gcd(n, m % n);
	}
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
	for(int i = 0; i<initial; i++){
		loopy++;
		n = gcd(first, second);
		// printf("n after loop %d -> %d",loopy, n);
		if(n == 1){ //If there are no GCD other than one
			first-=1;
		}	
		else{
			break;
		}
	}
	
	printf("GCD of %d and %d is -> %d\n",first, second, n);
	printf("And it took %d loops! from %d to %d.\n", loopy, initial, first);
	return 0;
}
