#include<stdio.h>
#include<string.h>
int main(){
	char ch[101],p[400][27];
	int cnt[27]={0},len,max=0,f;
	for(int j=0;j<4;j++){
		gets(ch);
		len=strlen(ch);
		for(int i=0;i<len;i++){
			if(ch[i]>='A'&&ch[i]<='Z')
				cnt[ch[i]-'A'+1]++;
		}
	}
	memset(p,' ',sizeof(p));
	for(int i=1;i<=26;i++){
		if(cnt[i]>max)
			max=cnt[i];
		for(int j=1;j<=cnt[i];j++){
			p[j][i]='*';
		}
	}
	for(int i=1;i<=max;i++){
		f=0;
		for(int j=1;j<=26;j++){
			if(f)
				printf(" %c",p[max-i+1][j]);
			else{
				printf("%c",p[max-i+1][j]);
				f=1;
			}
		}
		printf("\n");
	}
	f=0;
	for(int i=1;i<=26;i++){
		if(f)
			printf(" %c",'A'+i-1);
		else{
			printf("%c",'A'+i-1);
			f=1;
		}
	}
	return 0;
}
