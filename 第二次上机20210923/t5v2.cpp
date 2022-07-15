#include<stdio.h>
int main(){
	int c,k,m=1;
	char a;
	scanf("%d\n",&k);
	while((a=getchar())!=EOF){
		c=a-97;
		m=((c+k*(m-13))%26+26)%26;
		printf("%c",m+97);
	}
	return 0;
} 
