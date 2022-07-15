#include<stdio.h>
#include<string.h>
int a[105][105],t[105][105];
int num(int x,int y){
	int ans=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(!(i==1&&j==1))
				ans+=a[x-1+i][y-1+j];
		}
	}
	return ans;
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&t[i][j]);
		}
	}
	memcpy(a,t,sizeof(t));
	for(int p=1;p<=k;p++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i][j]){
					if(num(i,j)<2||num(i,j)>3){
						t[i][j]=0;
					}
				}else{
					if(num(i,j)==3)
						t[i][j]=1;
				}
			}
		}
		memcpy(a,t,sizeof(t));
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
