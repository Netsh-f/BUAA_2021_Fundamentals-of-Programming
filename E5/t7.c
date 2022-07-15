#include<stdio.h>
int n,op[20],w[4];
long long f(int floor,int t){
	if(floor>=n){
		return w[t];
	}else{
		return ((((op[floor]>>2)&1)?f(floor+1,1):0)+(((op[floor]>>1)&1)?f(floor+1,2):0)+((op[floor]&1)?f(floor+1,3):0))%1000000007;
	}
}
int main(){
	scanf("%d",&n);
	scanf("%d%d%d",&w[1],&w[2],&w[3]);
	for(int i=0;i<n;i++){
		scanf("%d",&op[i]);
	}
	printf("%lld\n",f(0,0));
	return 0;
}
