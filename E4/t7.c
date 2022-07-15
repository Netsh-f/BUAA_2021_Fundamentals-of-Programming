#include<stdio.h>

int ncode2(int n){
	int ans=0;
	while(n!=0){
		ans+=n%10;
		n/=10;
	}
	if(ans<10)
		return ans;
	else
		return ncode2(ans);
}

int main(){
	int k,t,f,n,w,n1,n2,l,r,vis[20001]={0};
	scanf("%d",&k);
	for(int j=0;j<k;j++){
		scanf("%d%d",&l,&r);
		f=0;
		for(int i=l;i<=r;i++){
			n=0;
			n1=0;
			n2=0;
			t=i;
			while(t!=0){
				w=t%10;
				if(w==2||w==1||w==7)
					n++;
				t/=10;
			}
			for(int p=0;p<=31;p++){
				if(n>>p&1)
					n1++;
			}
			n2=ncode2(n);
			if((n1==2||n1==1||n1==7||n2==2||n2==1||n2==7)&&vis[i]==0){
				if(f)
					printf(" %d",i);
				else{
					printf("%d",i);
					f=1;
				}
				vis[i]=1;
			}
		}
		printf("\n");
	}
	return 0;
}
