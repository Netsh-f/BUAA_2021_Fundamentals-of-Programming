#include<stdio.h>
int main(){
	unsigned long long a,b,c;
	int dis=0;
	scanf("%llu%llu",&a,&b);
	c=a^b;
	for(int i=0;i<64;i++){
		if(c&1) dis++;
		c=c>>1;
	}
	printf("%d\n",dis);
	return 0;
}
