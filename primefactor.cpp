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
void primefact(long long num, long long div, vector<long long>& factors){
	while(num != div){	
		if(num % div == 0){
			factors.push_back(div);
			num = (num/div);
			//primefact((num/div), div, factors);
		}
		else{
			div++;
			//primefact(num, (div+1), factors);
		}
	}
	factors.push_back(div);
} 	

void printvec(vector<long long> m){
	int len = m.size();
	for(int i = 0; i<len; i++){
		printf("%lld ", m[i]);
	}
	printf("\n");
}

int main(){
	long long num;
	vector<long long> factors;
	printf("What number would you like to know the prime factors of? = ");
	cin >> num;	
	auto start = high_resolution_clock::now();
	primefact(num, 2, factors);
	auto end = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(end - start);
	printf("Time taken: %ld ms\n", duration.count());
	printvec(factors);
	return 0;
}
