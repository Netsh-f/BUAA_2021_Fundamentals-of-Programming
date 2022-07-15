#include<stdio.h>
int main(){
	int t,n,temx,x,y,f;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		scanf("%d",&n);
		f=1;
		for(int i=0;i<n;i++){
			scanf("%d%d",&x,&y);
			if(i==0)
				temx=x;
			if(i!=0&&temx==x)
				f=0;
			temx=x;
		}
		printf("Case #%d: ",j+1);
		if(f)
			printf("Through the star sea.\n");
		else
			printf("Stop somewhere.\n");
	}
	return 0;
}
