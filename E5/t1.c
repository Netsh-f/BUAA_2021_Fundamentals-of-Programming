#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b&&b==c&&a==c){
			printf("equilateral triangle!\n");
		}else if(a==b||b==c||a==c){
			printf("isosceles triangle!\n");
		}else{
			printf("regular triangle!\n");
		}
	}else{
		printf("not a triangle!\n");
	}
	return 0;
}
