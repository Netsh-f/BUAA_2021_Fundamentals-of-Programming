#include<stdio.h>
int main(){
	int op;
	double r,ans=0;
	scanf("%lf",&r);
	ans=r;
	while(scanf("%d%lf",&op,&r)!=EOF){
		if(op==0)
			ans+=r;
		else if(op==1)
			ans=1/(1/ans+1/r);
	}
	printf("%.2f\n",ans);
	return 0;
}
