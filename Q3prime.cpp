#include<cstdio>
#include<iostream>
#include<cmath>
#include <chrono>  
#include<vector>
using namespace std;
using namespace std::chrono;

/*
 * im very proud of this function. It simply finds three different cases. and does so in sqrt(n) time.
 * first it divides the input number by two. if there is any remainder, it'll add one to the divisor. if there is no 
 * remainder, it'll recursively call this fucntion with the nunmber / the divisor. 
 * I think this algorithm is quite pretty and is much more compact than euclid's for example
 */
int primefact(long long num, long long div, vector<long long>& factors){
	int divisions = 0;
	while(num != div){	
		if(num % div == 0){
			factors.push_back(div);
			num = (num/div);
			divisions++;
			//primefact((num/div), div, factors);
		}
		else{
			div++;
			//primefact(num, (div+1), factors);
		}
	}
	factors.push_back(div);
	divisions++;
	return divisions;
} 	

void printvec(vector<long long> m){
	int len = m.size();
	for(int i = 0; i<len; i++){
		printf("%lld ", m[i]);
	}
	printf("\n");
}

int main(){
	long long num1;
	long long num2;
	vector<long long> factors1;
	vector<long long> factors2;

	printf("What's the first number you would like to know the prime factors of? = ");
	cin >> num1;	
	printf("What's the second number you would like to know the prime factors of? = ");
	cin >> num2;
	if(num1 < 2){
		printf("must be greater than 2\n"); 
		return 0;
	}
	if(num2 < 2){
		printf("must be greater than 2\n"); 
		return 0;
	}

	auto start = high_resolution_clock::now();
	
	//starting the factorization
	int div1 = primefact(num1, 2, factors1);
	int div2 = primefact(num2, 2, factors2);
 
	auto end = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(end - start);
	
	printf("Time taken: %ld ms\n", duration.count());
	
	printf("The first vector's prime factors are...");
	printvec(factors1);
	printf("It took %d divisions\n", div1);
	
	printf("The second vector's prime factors are...");
	printvec(factors2);
	printf("It took %d divisions\n", div2);
	
	return 0;
}
