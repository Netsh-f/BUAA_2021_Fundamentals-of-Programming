#include<stdio.h>
int er[32]={0};
void f(int n){
	if(n==0){
		printf("0");
	}else{
		int k=0;
		for(int i=30;~i;i--){
			if(er[i]<=n){
				k=i;
				break;
			}
		}
		printf("2(");
		f(k);
		printf(")");
		if(n-er[k]>0){
			printf("+");
			f(n-er[k]);
		}
	}
}
int main(){
	er[0]=1;
	int n;
	for(int i=1;i<=30;i++){
		er[i]=er[i-1]*2;
	}
	scanf("%d",&n);
	f(n);
	return 0;
}
