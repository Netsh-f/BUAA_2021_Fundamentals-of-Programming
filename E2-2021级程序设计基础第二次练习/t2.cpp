#include<stdio.h>
int main(){
	char a;
	int n;
	scanf("%c %d",&a,&n);
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z')){
		if((a>='a'&&a<='z'&&a+n>'z')||(a>='A'&&a<='Z'&&a+n>'Z')){
			printf("OverfIow!\n");
		}else{
			for(int i=0;i<n;i++){
				printf("%c ",a+i);
			}
		}
	}else{
		printf("Not a Letter\n");
	}
	return 0;
}
