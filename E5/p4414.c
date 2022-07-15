#include<stdio.h>
int main(){
	int a[4],t;
	char ch[4];
	scanf("%d%d%d",&a[1],&a[2],&a[3]);
	scanf("%s",ch);
	if(a[1]>a[2]){
		t=a[1];
		a[1]=a[2];
		a[2]=t;
	}
	if(a[2]>a[3]){
		t=a[2];
		a[2]=a[3];
		a[3]=t;
	}
	if(a[1]>a[2]){
		t=a[1];
		a[1]=a[2];
		a[2]=t;
	}
	for(int i=0;i<3;i++){
		if(ch[i]=='A')
			printf("%d ",a[1]);
		if(ch[i]=='B')
			printf("%d ",a[2]);
		if(ch[i]=='C')
			printf("%d ",a[3]);
	}
	return 0;
}
