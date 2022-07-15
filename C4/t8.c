#include<stdio.h>
#include<string.h>
int main(){
	char s[1000005];
	int l=0,cnt=0,start=0;
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if(((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))&&start=0){
			start=1;
		}
		if(start){
			l++;
		}
	}
}
