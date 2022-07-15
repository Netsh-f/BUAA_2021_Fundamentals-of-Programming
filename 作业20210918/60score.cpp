#include<stdio.h>
int main(){
	int n,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		if(a>=60)
			printf("pass! ^_^\n");
		else
			printf("fail! >_<\n");
	}
	return 0;
}
