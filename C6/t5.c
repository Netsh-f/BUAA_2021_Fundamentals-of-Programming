#include<stdio.h>
int main(){
	int t,a[12][12],b[12][12],c[12][12]={0},f;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		for(int j=1;j<=t;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=t;i++){
		for(int j=1;j<=t;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=1;i<=t;i++){
		for(int j=1;j<=t;j++){
			for(int k=1;k<=t;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=1;i<=t;i++){
		f=1;
		for(int j=1;j<=t;j++){
			if(f){
				printf("%d",c[i][j]);
				f=0;
			}
			else
				printf(" %d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
