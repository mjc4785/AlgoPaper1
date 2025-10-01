#include<cstdio>
#include<iostream>
using namespace std;

int gcd(int m, int n){
	if(n == 0){
		return m;
	}
	else{
		return gcd(n, m % n);
	}
}

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
	for(int i = 0; i<first; i++){
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
