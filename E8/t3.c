#include<stdio.h>
#include<string.h>
char s[1005][1005];
int main(){
	int cnt=0,maxlen=-1,maxn,minlen=1005,minn,len;
	while(gets(s[++cnt])!=NULL){
		len=strlen(s[cnt]);
		if(len>maxlen){
			maxlen=len;
			maxn=cnt;
		}
		if(len<minlen){
			minlen=len;
			minn=cnt;
		}
	}
	printf("%d\n%s\n%d\n%s\n",minlen,s[minn],maxlen,s[maxn]);
	return 0;
}
