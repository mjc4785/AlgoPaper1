#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

/*
 * im very proud of this function. It simply finds three different cases. and does so in sqrt(n) time.
 * first it divides the input number by two. if there is any remainder, it'll add one to the divisor. if there is no 
 * remainder, it'll recursively call this fucntion with the nunmber / the divisor. 
 * I think this algorithm is quite pretty and is much more compact than euclid's for example
 */
void primefact(int num, int div){
	if (num == div){ 
		printf("%d", div); 
		return;
	}

	if(num % div == 0){
		printf("%d ", div);
		primefact((num/div), div);
		return;
	}
	else{
		primefact(num, (div+1));
		return;
	}
} 

int main(){
	int num;
	printf("What number would you like to know the prime factors of? = ");
	cin >> num;	
	primefact(num, 2);
	printf("\n");	
	return 0;
}
