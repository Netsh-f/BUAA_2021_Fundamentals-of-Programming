#include<stdio.h>
int main(){
	char c,t;
	int f=1,ans=0;
	while((c=getchar())!='!'){
		if(f){
			t=c;
			f=0;
		}else{
			if(c<=t){
				t=c;
				continue;
			}else{
				ans++;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
