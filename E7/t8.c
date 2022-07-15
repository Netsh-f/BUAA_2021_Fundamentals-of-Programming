#include<stdio.h>
#include<math.h>
int main(){
	int n,m,k,t,x[1005],y[1005],x0,y0,min;
	scanf("%d%d%d%d",&n,&m,&k,&t);
	for(int i=1;i<=k;i++)
		scanf("%d%d",&x[i],&y[i]);
	for(int i=1;i<=t;i++){
		scanf("%d%d",&x0,&y0);
		min=abs(x[1]-x0)+abs(y[1]-y0);
		for(int i=1;i<=k;i++){
			if(min>abs(x[i]-x0)+abs(y[i]-y0))
				min=abs(x[i]-x0)+abs(y[i]-y0);
		}
		printf("%d\n",min);
	}
	return 0;
}
