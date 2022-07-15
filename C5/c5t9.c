#include<stdio.h>
#include<string.h>
int main(){
	char s[1010];
	int len,f,cnt,no;
	while(gets(s)!=NULL){
		len=strlen(s);
		f=0;
		cnt=0;
		no=0;
		for(int i=0;i<len-2;i++){
			if(s[i]=='b'&&s[i+1]=='e'&&s[i+2]=='g'&&s[i+3]=='i'&&s[i+4]=='n'){
				cnt++;
				f++;
			}
			if(s[i]=='e'&&s[i+1]=='n'&&s[i+2]=='d'){
				cnt--;
				f++;
			}
			if(cnt<0){
				printf("no\n");
				no=1;
				break;
			}
		}
		if(no==0){
			if(f!=0&&cnt==0){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		}
	}
	return 0;
}
