#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char s[21];
	int n=0,x=0,nn=0,xx=0,f,t,xnn;
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]=='.'){
			break;
		}else{
			n=n*10+s[i]-'0';
			nn++;
		}
	}
	for(int i=nn+1;i<=len;i++){
		if(s[i]=='\0'){
			break;
		}else{
			x=x*10+s[i]-'0';
		}
	}
	xx=len-nn-1;
	if(x==0)
		xx=0;
	int xt=x,xn=0;
	while(xt!=0){
		xn++;
		xt/=10;
	}
	if(n==0&&x!=0){
		xnn=xn;
		while(x%10==0&&x!=0){
			x/=10;
			xnn--;
		}
		t=pow(10,xnn-1);
		printf("%d",x/t);
		x=x-x/t*t;
		if(x!=0)
			printf(".%d",x);
		printf("E-%d\n",xx-xn+1);
	}else{
		f=1;
		printf("%c",s[0]);
		for(int i=1;i<nn;i++){
			n=n-(s[i-1]-'0')*pow(10,nn-i);
			if(n!=0){
				if(f){
					printf(".");
					f=0;
				}
				printf("%c",s[i]);
			}
		}
		if(xx>0){
			for(int i=0;i<xx;i++){
				if(s[nn+1+i]!='0')
					break;
				printf("%c",s[nn+1+i]);
			}
			xnn=xn;
			while(x%10==0&&x!=0){
				x/=10;
				xnn--;
			}
			printf("%d",x);
		}
		if(nn!=1)
			printf("E%d",nn-1);
	}
	return 0;
}
