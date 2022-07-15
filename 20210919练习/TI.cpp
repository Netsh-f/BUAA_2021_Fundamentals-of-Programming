#include<stdio.h>
int main(){
	int a,w,x,y,z;
	scanf("%d",&a);
	z=a%10;
	y=a/10%10;
	x=a/100%10;
	w=a/1000%10;
	a=a/10000*10000+z*1000+y*100+x*10+w;
	printf("%d\n",a);
	return 0;
}
