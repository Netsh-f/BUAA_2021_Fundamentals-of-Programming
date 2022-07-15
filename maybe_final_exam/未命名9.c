#include<stdio.h>
int main(){
	int n,b[22],fang[22],x,er20=1<<20,ans;
	while(scanf("%d",&n)!=EOF){
		fang[0]=1;
		for(int i=1;i<=21;i++)
			fang[i]=fang[i-1]*n;
		for(int w=20;w>=1;w--){
			x=0;
			for(int i=0;i<w;i++)
				x+=fang[i];
			if(x>er20)
				continue;
			else{
				ans=1;
				for(int i=1;i<=w;i++)
					ans*=n;
				for(int i=1;i<=w+1;i++){
					if(i==1){
						b[i]=1;
						b[w]=1;
					}else{
						b[i]=0;
						b[w-i+1]=0;
					}
				}
				
			}
		}
	}
}
