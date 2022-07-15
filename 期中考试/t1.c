#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a>='a'&&a<='z'){
		printf("Lowercase letter QAQ..\n");
	}else if(a>='A'&&a<='Z'){
		printf("Capital! \\^ ^/");
	}else if(a>='0'&&a<='9'){
		printf("! Number !\n");
	}else{
		printf("I can't read.\n");
	}
	return 0;
}
