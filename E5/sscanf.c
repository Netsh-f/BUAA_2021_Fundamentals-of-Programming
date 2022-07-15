#include<stdio.h>
#include<string.h>
int main(){
	int day,year,h,m,s;
	char mon[4],zone[6];
	char buf[]="17/Apr/2021:10:28:28 +0800";
	sscanf(buf,"%d/%3c/%d:%d:%d:%d %s",&day,mon,&year,&h,&m,&s,zone);
	double f=3.14159;
	char buff[10];
	int n=4;
	sprintf(buff,"%%.%df",n);
	printf(buff,f);
	return 0; 
}
