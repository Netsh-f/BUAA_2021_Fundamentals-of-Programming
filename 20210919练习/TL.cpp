#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=n;i<=9999;i++){
		int a,b;
		a=i%100;
		b=i/1000*10+i/100%10;
		if(a*a+b*b==i){
			printf("%d\n",i);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}
