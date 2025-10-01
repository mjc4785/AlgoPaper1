#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

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
