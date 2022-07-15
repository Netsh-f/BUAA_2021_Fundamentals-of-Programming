#include<stdio.h>
#include<string.h>
int main(){
	char s[105],type[100],name[100],typez[100];
	int typen,namen,typezn,cnt,len;
	while(gets(s)!=NULL){
		typen=0; namen=0; typezn=0; cnt=0; len=strlen(s);
		do{
			type[typen++]=s[cnt++];
		}while(!(s[cnt-1]=='*'&&s[cnt]!='*'));
		while(cnt<len&&s[cnt]!=')'){
			name[namen++]=s[cnt++];
		}
		if(s[cnt]==')'){
			while(cnt<len){
				type[typen++]=s[cnt++];
			}
		}
		for(int i=0;i<typen;i++)
			printf("%c",type[i]);
		printf(" ");
		for(int i=0;i<namen;i++)
			printf("%c",name[i]);
		printf(" -> ");
		for(int i=0;i<typen;i++){
			if(type[i]=='('){
				while(type[i-1]!=')')
					i++;
			}else if(type[i]=='*')
				i++;
			typez[typezn++]=type[i];
		}
		for(int i=0;i<typezn;i++)
			printf("%c",typez[i]);
		printf("\n");
	}
	return 0;
}
