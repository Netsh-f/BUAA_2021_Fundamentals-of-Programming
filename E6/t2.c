#include<stdio.h>

char read(){
	char c;
	c=getchar();
	while(c>='0'&&c<='9')
		c=getchar();
	if(c>='A'&&c<='Z')
		c=c-'A'+'a';
	return c;
}

int main(){
	int n,len=0,f;
	char s[105];
	scanf("%d ",&n);
	for(int j=1;j<=n;j++){
		len=0;
		f=1;
		do{
			s[++len]=read();
		}while(s[len]!='\n');
		for(int i=1;i<=len-i;i++){
			if(s[i]!=s[len-i])
				f=0;
		}
		if(f)
			printf("P1@lin&r0rne\n");
		else
			printf("$tr1ng\n");
	}
	return 0;
}
