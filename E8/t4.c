#include<stdio.h>
int main(){
	unsigned long long n,a,b;
	int m;
	while(scanf("%llu%d",&n,&m)!=EOF){
		for(int i=0;i<=m;i++){
			a=0; b=0;
			a=n&(1llu<<i)?1:0;
			b=n&(1llu<<(m+1+i))?1:0;
			n=n&~(1llu<<i);
			n=n&~(1llu<<(m+1+i));
			n=n|(a<<(m+1+i));
			n=n|(b<<i);
		}
		printf("%llu\n",n);
	}
	return 0;
}
