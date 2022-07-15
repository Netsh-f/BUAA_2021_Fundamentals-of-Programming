#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%d\n",a*b);
	if(b==0){
		printf("[Warning] division by zero [-Wdiv-by-zero]\n");
		return 0;
	}else{
		printf("%d\n",a/b);
		printf("%d\n",a%b);
	}
	return 0;
}
