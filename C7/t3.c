#include<stdio.h>
int main(){
	int n,sum=0,id,op;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&id,&op);
		if(op==0)
			sum+=(id%10);
		else if(op==2){
			sum-=2;
			if(sum<0)
				sum=0;
		}
	}
	if(sum>=37)
		printf("%d\n",sum);
	else
		printf("See you next year !\n");
	return 0;
}
