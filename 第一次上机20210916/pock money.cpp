#include<stdio.h>
int main(){
	int k,day=0,sum=0;
	scanf("%d",&k);
	for(int i=1;day<k;i++){
		for(int j=1;j<=i;j++){
			if(i>=15){
				sum=sum+15;
				day++;
			}else{
				sum=sum+i;
				day++;
			}
			if(day==k){
				printf("%d\n",sum);
				return 0;
			}
		}
	}
	return 0;
}
