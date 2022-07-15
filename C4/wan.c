#include<stdio.h>
int main(){
	int i=0;
	while(1){
		printf("%c",i);
		i++;
		if(i>1000) break;
	}
	return 0;
}
