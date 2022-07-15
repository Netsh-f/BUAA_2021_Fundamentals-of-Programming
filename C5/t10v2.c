#include<stdio.h>
int a[5000005];
int main(){
	int n,x,xn=0,px,cnt=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		a[i]=x;
		if(xn==0){
			px=x;
			xn=1;
		}else{
			if(x==px){
				xn++;
			}else{
				xn--;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]==px)
			cnt++;
	}
	if(cnt*2>n)
		printf("%d\n",px);
	else
		printf("Not Found\n");
	return 0;
}
