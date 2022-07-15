#include<stdio.h>
int main(){
	char s[105],type[4][100]={"int","double","char"},name[100],type_[100];
	int typen;
	while(gets(s)!=NULL){
		if(strncmp(s,"int",3)==0)
			typen=1;
		else if(strncmp(s,"double",6))
			typen=2;
		else if(strcmp(s,"char",4))
			typen=3;
		
	}
	return 0;
}
