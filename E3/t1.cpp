#include<stdio.h>
int main(){
	int n,a[32];
	while(~scanf("%d",&n)){
		if(n>=0){
			for(int i=0;i<32;i++){
				a[i]=n&1;
				n=n>>1;
			}
		}else{
			n=(~(n-1))+(1<<31);
			for(int i=0;i<32;i++){
				a[i]=n&1;
				n=n>>1;
			}
		}
		for(int i=31;i>=0;i--){
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
