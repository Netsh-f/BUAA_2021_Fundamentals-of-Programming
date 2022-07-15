#include<stdio.h>
int main(){
	int id,i=0;
	scanf("%d",&id);
	int idt=id;
	for(int j=2;j<=9;j++){
		i=i+idt%10*j;
		idt=idt/10;
	}
	id=id*10+i%10;
	printf("%d\n",id);
	return 0;
}
