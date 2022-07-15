#include<stdio.h>
#include<string.h>
int main(){
	char s[1005],s0[1005];
	int ans=0,cnt=0,lens,lens0;
	scanf("%s%s",s,s0);
	lens=strlen(s);
	lens0=strlen(s0);
	if(lens0<lens){
		printf("0\n");
		return 0;
	}else{
		for(int i=0;i<lens0-lens+1;i++){
			cnt=0;
			for(int j=0;j<lens;j++){
				if(s[j]!=s0[i+j]){
					cnt++;
				}
			}
			if(cnt<=3)
				ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
