#include<stdio.h>
int n,l,r;
int rec(int floor,int x){
	int cnt=0;
	if(floor>n){
		return x%3==0;
	}else{
		for(int i=l;i<=r;i++){
			cnt+=rec(floor+1,x*10+i);
		}
	}
	return cnt;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		scanf("%d%d%d",&n,&l,&r);
		printf("%d\n",rec(1,0));
	}
	return 0;
}
