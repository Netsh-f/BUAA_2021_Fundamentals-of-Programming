#include<stdio.h>
#include<string.h>

int min(char a,char b,char c){
	int t;
	if(a<b){
		t=a;
		a=b;
		b=a;
	}
	if(b<c){
		t=b;
		b=c;
		c=t;
	}
	return c;
}

int main(){
	int n,f=0,cnt=0;
	char s[1001],ans[3]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",s);
		for(int j=0;j<3;j++){
			for(int k=j;k<strlen(s);k++){
				if(s[k]==s[j]){
					cnt=0;
				}else{
					cnt++;
				}
				if(cnt>=3)
					break;
				if(k>=strlen(s)-3){
					f=1;
					ans[j]=s[j];
					break;
				}
			}
		}	
	}
	if(f==0)
		printf("You loser!");
	else
		printf("%c\n",min(ans[0],ans[1],ans[2]));
	return 0;
} 
