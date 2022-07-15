#include<stdio.h>
int is(int x,int k){
	while(x!=0){
		if(x%10==k){
			return 0;
		}
		x/=10;
	}
	return 1;
}
int main(){
	int k,f=0;
	scanf("%d",&k);
	for(int i=1;i<=99;i++){
		if(i%k!=0&&f==0&&is(i,k)){
			printf("%d",i);
			f=1;
		}else if(i%k!=0&&f==1&&is(i,k)){
			printf(" %d",i);
		}
	} 
	return 0;
}
