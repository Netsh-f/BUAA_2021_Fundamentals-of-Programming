#include<stdio.h>
int main(){
	long long n;
	int a[11]={0},sum=0,ave,f=0;
	scanf("%lld",&n);
	for(int i=1;i<=10;i++){
		a[i]=n%10;
		n/=10;
		sum+=a[i];
	}
	ave=sum/10;
	for(int i=10;i>=1;i--){
		if(a[i]>ave)
			a[i]=0;
		if(a[i]!=0)
			f=1;
		if(f)
			printf("%d",a[i]);
	}
	if(f==0)
		printf("0\n");
	return 0;
}
