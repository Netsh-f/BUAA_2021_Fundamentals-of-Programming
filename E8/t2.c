#include<stdio.h>
int a[105][105];
int b[105][105];
int main(){
	int m,n,t;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++){
			t=0;
			for(int p=0;p<3;p++)
				for(int q=0;q<3;q++){
					if(i-1+p>=1&&i-1+p<=m&&j-1+q>=1&&j-1+q<=n){
						b[i][j]+=a[i-1+p][j-1+q];
						t++;
					}
				}
			b[i][j]=b[i][j]*1.0/t+0.5;
		}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++)
			printf("%3d ",b[i][j]);
		printf("\n");
	}
	return 0;
}
