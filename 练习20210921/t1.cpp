#include<stdio.h>
int main(){
	int a,f=0;
	for(int i=1;i<=6;i++){
		scanf("%d",&a);
		if(a==i){
			f=1;
			printf("*");
		}
	}
	if(f==0)
		printf("Sorry!Unlucky!\n");
	return 0;
}
