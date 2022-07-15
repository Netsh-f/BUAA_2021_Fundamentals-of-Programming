#include<stdio.h>
int main(){
	int b[10]={0},l,r,t;
	scanf("%d%d",&l,&r);
	for(int i=l;i<=r;i++){
		t=i;
		if(t==0)
			b[0]++;
		while(t!=0){
			b[t%10]++;
			t/=10;
		}
	}
	for(int i=0;i<=9;i++)
		printf("%d ",b[i]);
	return 0;
}
