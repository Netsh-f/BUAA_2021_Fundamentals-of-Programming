#include<stdio.h>
int main(){
	int k;
	scanf("%d",&k);
	for(int i=1;i<=100;i++){
		printf("%d\n",k);
		if(k==1)
			break;
		if(k%2==0)
			k/=2;
		else
			k=3*k+1;
	}
	return 0;
}
