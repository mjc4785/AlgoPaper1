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

	printf("Input the first of two positive integers = ");
	cin >> first;	
	printf("Input the second of two positive integers = ");
	cin >> second;

	n = gcd(first, second);	
	printf("GCD of %d and %d is -> %d\n",first, second, n);
	return 0;
}
