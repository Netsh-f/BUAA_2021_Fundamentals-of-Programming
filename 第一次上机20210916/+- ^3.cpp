#include<stdio.h>
int main(){
	long long a,sum=0;
	while(scanf("%lld",&a)!=EOF){
		if(a%2==0)
			sum=sum+a*a*a;
		else
			sum=sum-a*a*a;
	}
	printf("%lld\n",sum);
	return 0;
} 
