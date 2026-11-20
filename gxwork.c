#include <stdio.h>

long long is_prime(long long num){
	long long isprime = 1;
	long long i;
	
	  if(num <= 1){
		isprime = 0;
	}

    
         for(i = 2;i < num;i++){
		       if(num % i == 0){
			      isprime = 0;
			         return isprime;
		}
	}
	if(isprime == 1){
		
		return isprime;
	}
	
	return 1;
}

long long factorial(int x){
	long long sum = 1;
	long long d;
	
	for(d = 1;d <= x;d++){
		sum = sum * d;
	}

	return sum;
}

long long sum_factors(int y){
	long long a = 1;
    long long j;

    for(j = 2;j < y;j++){
		if(y % j == 0){
			a = a + j;
		}
	}

	return a;
}

long long get_level_exp(int i){
    long long a;
    long long sum;

	a = is_prime(i);
	if(a == 1){
		sum = factorial(i);
		
		return sum;
	}
	else{
		sum = sum_factors(i);
		
		return sum;
	}
}

long long calc_total_exp(int n){
	long long a;
	long long i;
	long long sum = 0;

	if(n == 1){
		return n;
	}
	else{
	for(i = 2;i <= n;i++){
	sum = sum + get_level_exp(i);
	}
	sum = sum + 1;
	
	return sum;
}
}

int main(){
	long long n;
	long long sum;
	
	scanf("%lld",&n);
	sum = calc_total_exp(n);
	printf("%lld\n",sum);
	
	return 0;
}