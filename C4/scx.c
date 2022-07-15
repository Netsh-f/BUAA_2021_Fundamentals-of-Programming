#include<stdio.h>
int main(){
	int n,t,sum=0;
	scanf("%d",&n);
	while(n){
		t=n%10;
		n/=10;
		if(t%2==0){
			sum+=t;
		}
	}
	printf("%d\n",sum);
	return 0;
}
