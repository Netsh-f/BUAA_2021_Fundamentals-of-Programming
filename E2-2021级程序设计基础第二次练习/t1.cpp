#include<stdio.h>
int main(){
	double sum=0,k,i=1;
	scanf("%lf",&k);
	while(1){
		sum+=1/i;
		if(sum>k){
			break;
		}
		i++;
	}
	printf("%.0f\n",i);
	return 0;
}
