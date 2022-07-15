#include<stdio.h>
#include<string.h>
char s[100010][1005];
int main(){
	int cnt=0,len[100010]={0},index[100010],t,is[100010]={0};
	while(gets(s[++cnt])!=NULL){
		len[cnt]=strlen(s[cnt]);
		index[cnt]=cnt;
	}
	for(int i=1;i<=cnt-1;i++){
		for(int j=1;j<=cnt-1-i;j++){
			if(len[index[j]]<len[index[j+1]]){
				t=index[j];
				index[j]=index[j+1];
				index[j+1]=t;
			}
		}
	}
	for(int i=1;i<=20;i++){
		is[index[i]]=1;
	}
	for(int i=1;i<=cnt;i++){
		if(is[i]){
			printf("%s\n",s[i]);
		}
	}
	return 0;
}

