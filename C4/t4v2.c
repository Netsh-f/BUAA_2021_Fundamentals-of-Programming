#include<stdio.h>

int read(){
	char c=getchar();
	int n=0;
	while(c<'0'||c>'9')
		c=getchar();
	while(c>='0'&&c<='9'){
		n=n*10+c-'0';
		c=getchar();
	}
	return n;
}

char geta(){
	char c=getchar();
	while(c<'A'||c>'C')
		c=getchar();
	return c;
}

int main(){
	int n,sco,max[4],min[4],a=0,b=0,c=0;
	double sum[4]={0};
	for(int i=0;i<4;i++){
		max[i]=-1;
		min[i]=101;
	}
	char ch;
	n=read();
	for(int j=0;j<n;j++){
		ch=geta();
		sco=read();
		if(ch=='A'){
			if(sco>max[1])
				max[1]=sco;
			if(sco<min[1])
				min[1]=sco;
			sum[1]+=sco;
			a++;
		}
		if(ch=='B'){
			if(sco>max[2])
				max[2]=sco;
			if(sco<min[2])
				min[2]=sco;
			sum[2]+=sco;
			b++;
		}
		if(ch=='C'){
			if(sco>max[3])
				max[3]=sco;
			if(sco<min[3])
				min[3]=sco;
			sum[3]+=sco;
			c++;
		}
	}
	sum[1]/=a;
	sum[2]/=b;
	sum[3]/=c;
	if(sum[1]>=sum[2]&&sum[1]>=sum[3])
		printf("A\n");
	else if(sum[2]>=sum[1]&&sum[2]>=sum[3])
		printf("B\n");
	else
		printf("C\n");
	for(int i=1;i<=3;i++){
		printf("%d %d\n",max[i],min[i]);
	}
	return 0;
}
