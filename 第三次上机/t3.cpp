#include<stdio.h>

char min(char a,char b){
	if(a<b) return a;
	else return b;
}

int main(){
	int n,f=0;
	char s[70];
	scanf("%d\n",&n);
	for(int i=1;i<=2*n;i++){
		scanf("%c",&s[i]);
	}
	for(int k=1;k<=n;k++){
		if(f==0){
			printf("%c",min(s[2*k-1],s[2*k]));
			f=1;
		}else{
			printf(" %c",min(s[2*k-1],s[2*k]));
		}
	}
	return 0;
}
