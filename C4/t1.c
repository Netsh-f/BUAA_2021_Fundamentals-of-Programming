#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>=90&&n<=100)
		printf("A\n");
	else if(n>=80&&n<90)
		printf("B\n");
	else if(n>=70&&n<80)
		printf("C\n");
	else if(n>=60&&n<70)
		printf("D\n");
	else if(n>=0&&n<60)
		printf("F\n");
	return 0;
}
