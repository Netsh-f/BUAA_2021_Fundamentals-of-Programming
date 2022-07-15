#include<stdio.h>
int main(){
	int bit[32]={0};
	int a,cnt=0;
	scanf("%d",&a);
	while(a){
		if(a&1){
			bit[cnt]++;
		}
		a>>=1;
		cnt++;
	}
	for(int i=31;i>=0;i--){
		if(bit[i]){
			printf("%d+",1<<i);
		}
	}
	return 0;
}
