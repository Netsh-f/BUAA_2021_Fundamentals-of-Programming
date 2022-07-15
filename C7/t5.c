#include<stdio.h>
void gcd(int a,int b,int *d,int *x,int *y){
	int t;
	if(b==0){
		*d=a;
		*x=1;
		*y=0;
	}else{
		gcd(b,a%b,d,x,y);
		t=*x;
		*x=*y;
		*y=t-*y*(a/b);
	}
}
int main(){
	int a,b,d,x,y;
	scanf("%d%d",&a,&b);
	gcd(a,b,&d,&x,&y);
	printf("%d = %d*(%d) + %d*(%d)\n",d,a,x,b,y);
	return 0;
}
