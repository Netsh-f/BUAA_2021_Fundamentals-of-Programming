#include<stdio.h>
int main(){
	int n,ans=0,er20=1<<20,x,fang[22];
	char s[22]="0123456789ABCDEFGHIJK";
	int b[100];
	while(scanf("%d",&n)!=EOF){
		fang[0]=1;
		for(int i=1;i<=21;i++)
			fang[i]=fang[i-1]*n;
		for(int w=1;;w++){
			for(int i=1;i<=(w+1)/2;i++){
				if(i==1){
					b[i]=1;
					b[w]=1;
				}
				else{
					b[i]=0;
					b[w-i+1]=0;
				}
			}
			if(w%2==0){
				while(1){
					x=0;
					for(int i=0;i<w;i++)
						x+=fang[b[w-i+1]]*b[w-i+1];
					if(x>er20){
						printf("%d\n",ans);
						for(int i=1;i<=w;i++)
							printf("%c",b[i]);
						printf("\n");
						break;
					}
					
				}
			}
		}
	}
	
}
