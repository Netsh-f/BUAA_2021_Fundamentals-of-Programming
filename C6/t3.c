#include<stdio.h>
int main(){
	int n,l,size=0;
	char s[15];
	scanf("%d%d ",&n,&l);
	for(int i=1;i<=n;i++){
		gets(s);
		if(s[0]=='c')
			size+=1;
		if(s[0]=='i')
			size+=4;
		if(s[0]=='d'||s[0]=='l')
			size+=8;
	}
	printf("%d\n",size*l);
	return 0;
}
