#include<stdio.h>
int main(){
	int k,x;
	double n;
	char buf[100];
	scanf("%d%d",&k,&x);
	scanf("%lf",&n);
	sprintf(buf,"%%%d.%dlf",k,x);
	printf("%s\n",buf);
	printf(buf,n);
	return 0;
}
