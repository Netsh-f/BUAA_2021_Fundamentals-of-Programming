#include<stdio.h>
#include<string.h>
char s[1000005];
int main(){
	gets(s);
	long long ans=0;
	char a[10]="two",b[10]="three",c[10]="four",d[10]="five",e[10]="six";
	char *p,*pt; p=s;
	while(strstr(p,a)!=NULL){
		pt=strstr(p,a);
		ans+=2;
		p=pt+3;
	}
	p=s;
	while(strstr(p,b)!=NULL){
		pt=strstr(p,b);
		ans+=3;
		p=pt+5;
	}
	p=s;
	while(strstr(p,c)!=NULL){
		pt=strstr(p,c);
		ans+=4;
		p=pt+4;
	}
	p=s;
	while(strstr(p,d)!=NULL){
		pt=strstr(p,d);
		ans+=5;
		p=pt+4;
	}
	p=s;
	while(strstr(p,e)!=NULL){
		pt=strstr(p,e);
		ans+=6;
		p=pt+3;
	}
	printf("%lld\n",ans);
	return 0;
}
