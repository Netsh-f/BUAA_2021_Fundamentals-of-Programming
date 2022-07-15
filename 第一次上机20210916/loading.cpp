#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<1||n>100){
		printf("Wake Up!\n");
		return 0;
	}
	printf("|");
	for(int i=0;i<n;i++)
		printf("#");
	for(int i=0;i<100-n;i++)
		printf("-");
	printf("|\n");
}
