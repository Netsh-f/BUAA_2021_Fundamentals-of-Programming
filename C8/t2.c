#include<stdio.h>
#include<string.h>
int main(){
	char s[800];
	int f=0;
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0;i<len-4;i++){
		if(strncmp(&s[i],"EDGnb",5)==0){
			f=i+1;
			break;
		}
	}
	if(f)
		printf("%d",f);
	else
		printf("-1");
	return 0;
}
