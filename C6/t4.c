#include<stdio.h>
#include<string.h>
int main(){
	char a[105],b[105];
	char *p;
	gets(a);
	gets(b);
	p=strstr(a,b);
	if(!p){
		printf("NO\n");
	}else{
		printf("YES %d\n",strlen(a)-strlen(p));
	}
	return 0;
}
