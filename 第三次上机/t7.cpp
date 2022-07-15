#include<stdio.h>
int main(){
	int n,chuan[20001]={0},vis[20001]={0};
	scanf("%d",&n);
	for(int i=1;i<=20000;i++){
		int t=i,w;
		int cnt=0;
		for(int j=0;j<5;j++){
			w=t%10;
			if(w==2||w==1||w==7)
				cnt++;
			t/=10;
		}
		if(cnt==2||cnt==1||cnt==7)
			chuan[i]=1;
	}
	int l,r;
	for(int i=0;i<n;i++){
		scanf("%d%d",&l,&r);
		int f=0;
		for(int j=l;j<=r;j++){
			if(chuan[j]&&vis[j]==0){
				if(f) printf(" ");
				printf("%d",j);
				vis[j]=1;
				f=1;
			}
		}
		printf("\n");
	}
	return 0;
}
