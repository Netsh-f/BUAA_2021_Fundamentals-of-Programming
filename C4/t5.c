#include<stdio.h>
#include<string.h>
int main(){
	char s[105];
	int b=0,f=1;
	scanf("%s",s);
	int len=(int)strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]=='b')
			b=1;
		if(b==1&&s[i]=='w')
			f=0;
	}
	if(f)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
