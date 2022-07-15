#include<stdio.h>
int main(){
	double x;
	int f=0;
	scanf("%lf",&x);
	int n=(int)x;
	x-=n;
	for(int i=31;i>=0;i--){
		if((n>>i)&1)
			f=1;
		if(f)
			printf("%d",(n>>i)&1);
	}
	if(f==0)
		printf("0");
	printf(".");
	for(int i=0;i<10;i++){
		if(x*2>=1){
			printf("1");
			x=x*2-1;
		}else{
			printf("0");
			x=x*2;
		}
	}
	return 0;
}
