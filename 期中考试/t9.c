#include<stdio.h>
int l[1005],a[1005][1005];
int len(int i,int j){
	int ans=0;
	for(int p=i;p<j;p++){
		ans+=l[i];
	}
	return ans;
}

int main(){
	int n,cnt=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&l[i]);
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n+1;j++){
			a[i][j]=len(i,j);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n+1;j++){
			for(int p=j;p<=n+1;p++){
				for(int q=p;q<=n+1;q++){
					if(a[i][j]==a[p][q]&&a[j][p]==a[q][i])
						cnt++;
				}
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
}
