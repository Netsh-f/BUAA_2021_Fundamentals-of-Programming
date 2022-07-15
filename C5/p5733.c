#include<stdio.h>
#include<string.h>
int main(){
	char s[105];
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]-'a'+'A';
	}
	puts(s);
	return 0;
}
