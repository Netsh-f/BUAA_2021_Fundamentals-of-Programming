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
	int n;
	char s[1009];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int f=0;
		char ans[3]={'z'+1,'z'+1,'z'+1};
		scanf("%s",s);
		for(int j=0;j<3;j++){
			int p=j;
			while(1){
				if(s[p+1]==s[j])
					p+=1;
				else if(s[p+2]==s[j])
					p+=2;
				else if(s[p+3]==s[j])
					p+=3;
				else
					break;
				if(p>=(int)strlen(s)-3){
					ans[j]=s[j];
					f=1;
					break;
				}
			}
		}
		if(f==0)
			printf("You loser!\n");
		else
			printf("%c\n",min(ans[0],ans[1],ans[2]));
	}
	return 0;
} 
