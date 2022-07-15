#include<stdio.h>
#include<string.h>
#define anum(a) (sizeof(a)/sizeof(a[0]))
int main(){
	int cnt[26]={0};
	char s[1000];
	scanf("%s",s);
	for(int i=0;i<(int)strlen(s);i++){
		for(int j=0;j<26;j++){
			if(s[i]=='a'+j){
				cnt[j]++;
			}
		}
	}
	for(int i=0;i<26;i++){
		if(cnt[i]>0)
			printf("%c:%d\n",'a'+i,cnt[i]);
	}
	return 0;
}
