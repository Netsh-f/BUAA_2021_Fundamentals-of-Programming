#include<stdio.h>
#include<string.h>

void rev(char *l,char *r){
	char t;
	while(l<r){
		t=*l;
		*l=*r;
		*r=t;
		l++;
		r--;
	}
}

int main(){
	char s[205],t[205],*p;
	int len;
	scanf("%s%s",s,t);
	len=strlen(t);
	if((p=strstr(s,t))!=NULL&&len>1){
		do{
			rev(p,p+len-1);
		}while((p=strstr(p+len,t))!=NULL);
	}
	puts(s);
	return 0;
}
