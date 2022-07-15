#include<stdio.h>

void f(int n,int *s,int *foot){
	int a,b,c,ss;
	if(n==0){
		*s=0;
		*foot=1;
	}else if(n==1){
		*s=0;
		*foot=1;
	}else if(n==2){
		*s=0;
		*foot=2;
	}else{
		f(n-1,&ss,&a);
		f(n-2,&ss,&b);
		f(n-3,&ss,&c);
		if(ss==0){
			*foot+=a+b+c;
			*s=1;
		}else{
			*foot+=a+b;
			*s=0;
		}
	}
	return ;
}

int main(){
	int n,s,foot=0;
	while(scanf("%d",&n)!=EOF){
		foot=0;
		f(n,&s,&foot);
		printf("%d\n",foot);
	}
	return 0;
}
