#include<stdio.h>
int main(){
	int x,a[105],len=0;
	while(~scanf("%d",&x)){
		len=0;
		while(x>0){
			a[++len]=x%3;
			x/=3;
		}
		if(len==0)
			printf("0");
		if(len>=5)
			printf("LONG");
		for(int i=len;i>0;i--)
			printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}
