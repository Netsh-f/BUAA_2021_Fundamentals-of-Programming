#include<stdio.h>
int t;
int gcd(int a,int b){
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main(){
	int n,a,b;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		scanf("%d%d",&a,&b);
		printf("%d\n",a*b/gcd(a,b));
	}
	return 0;
}
