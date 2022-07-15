#include<stdio.h>

int abc(int x){
	int a=x%10,b=(x/10)%10,c=x/100;
	if(a!=b&&a!=c&&b!=c&&a*b*c!=0)
		return 1;
	else
		return 0;
}

int ABC(int x1,int x2,int x3){
	if(abc(x1)&&abc(x2)&&abc(x3)){
		int num[10]={0};
		num[x1%10]++; num[x2%10]++; num[x3%10]++;
		num[(x1/10)%10]++; num[(x2/10)%10]++; num[(x3/10)%10]++;
		num[x1/100]++; num[x2/100]++; num[x3/100]++;
		for(int i=1;i<=9;i++){
			if(num[i]>1)
				return 0;
		}
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int a,b,c,f=0;
	scanf("%d%d%d",&a,&b,&c);
	for(int i=123;i<=987;i++){
		if(i/a*c>987)
			break;
		if(i%a==0&&ABC(i,i/a*b,i/a*c)){
			printf("%d %d %d\n",i,i/a*b,i/a*c);
			f=1;
		}
	}
	if(f==0)
		printf("NOT FOUND\n");
	return 0;
}
