#include<stdio.h>
#include<math.h>
int n,l,r;
int is(int x){
	while(x!=0){
		if(x%10>=l&&x%10<=r)
			x/=10;
		else
			return 0;
	}
	return 1;
}
int main(){
	int t,ans,tem;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		ans=0;
		scanf("%d%d%d",&n,&l,&r);
		tem=pow(10,n-1);
		for(int i=tem;i<tem*10;i++){
			if(is(i)&&i%3==0)
				ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
