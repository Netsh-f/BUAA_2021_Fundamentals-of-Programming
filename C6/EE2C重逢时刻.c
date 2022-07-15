#include<stdio.h>
int main(){
	int n;
for(int j=0;j<=100;j++){n=j;
	double a=0,b=0,c=0;
//	scanf("%d",&n);
	n%=12;
	for(int i=0;i<n;i++){
		a+=1;
		b+=5;
		c+=300.0/11;
		if(c>=60){
			c-=60;
			b++;
		}
		if(b>=60){
			b-=60;
			a++;
		}
		if(a>=12){
			a-=12;
		}
	}
	printf("%.0f:%.0f:%.7f\n",a,b,c);
	}
	return 0;
}
