#include<stdio.h>
int main(){
	char a[300],c=0;
	scanf("%s",a);
	for(int i=0;i<300;i++){
		if(a[i]=='@')
			break;
		if(a[i]=='(')
			c++;
		else if(a[i]==')')
			c--;
		if(c<0){
			printf("NO\n");
			return 0;
		}
	}
	if(c==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
