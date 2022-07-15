#include<stdio.h>
#include<string.h>
int main(){
	char s[55];
	char *ps=s,len;
	int f=0,j;
	while(gets(s)!=NULL){
		len=strlen(s);
		for(int i=0;i<len;i++){
			j=i;
			if(strncmp(ps+j,"goo",3)==0){
				j+=3;
				while(s[j]=='o')
					j++;
				if(s[j]=='d')
					f=1;
			}
			if(f){
				printf("perfect");
				i=j;
				f=0;
				continue;
			}
			printf("%c",s[i]);
		}
		printf("\n");
	}
	return 0;
}
