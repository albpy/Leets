#include<stdio.h>
int unsigned long long gcd(int unsigned long long x,int unsigned long long y){
	if(y==0) return x;
	return gcd(y,x%y);
}

int unsigned long long lcm(int unsigned long long x,int unsigned long long y){
	return (x*y/gcd(x,y));
}
int main(){
	int unsigned long long n = 3;//1000000000LU;
	int a = 2;
	int unsigned long long b = 3;//217983653LU;
	int unsigned long long c = 5;//336916467LU;
    int low=1;
    int unsigned long long high=2000000000;
    while(low<high){
        int unsigned long long mid=(low+(high-low)/2);
		long aUb=((mid/a)+(mid/b)+(mid/c)-(mid/lcm(a,b))-(mid/lcm(a,c))-(mid/lcm(b,c))+(mid/lcm(lcm(a,b),c)));
		if(aUb<n){
            low=mid+1;
		}
		else{
		    high=mid;
		}
		// printf("%llu\n", mid);
		// printf("%ld\n", aUb);
		// printf("%llu\n", low);
		// printf("%llu\n", high);


	}
    printf("%d\n", low);
    return 0;
}


//int unsigned long long a= 73442282232513951323LU;
	// printf("%llu\n" , a);
	// return 0;