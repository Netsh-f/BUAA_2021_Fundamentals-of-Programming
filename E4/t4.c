#include<stdio.h>
int main(){
	int x,n,f=0;
	scanf("%d.%d",&x,&n);
	for(int i=31;i>=0;i--){
		if((x>>i)&1)
			f=1;
		if(f)
			printf("%d",(x>>i)&1);
	}
	if(f==0)
		printf("0");
	printf(".");
	int w=1,len=0;
	while(n/w!=0)
		w*=10;
	while(!(n==0||len==10)){
		if(n*2/w!=0){
			printf("1");
			n=(n*2)%w;
		}else{
			printf("0");
			n*=2;
		}
		len++;
	}
	for(int i=0;i<10-len;i++)
		printf("0");
	printf("\n");
	return 0;
}
