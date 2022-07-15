#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n>127){
			printf("N IS TOO BIG !\n");
		}else if(n>=33&&n<=126){
			printf("%c\n",n);
		}else{
			printf("INVISIBLE !\n");
		}
	}
	return 0;
}
