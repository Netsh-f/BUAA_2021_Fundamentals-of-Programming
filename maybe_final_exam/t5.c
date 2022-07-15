#include<stdio.h>
long long b[4][4];
long long a[5][5];
long long f(int x,int y){
	int i=1,j=1;
	for(int p=1;p<=4;p++){
		j=1;
		if(p==x) continue;
		for(int q=1;q<=4;q++){
			if(q==y) continue;
			b[i][j]=a[p][q];
			j++;
		}
		i++;
	}
	return b[1][1]*b[2][2]*b[3][3]+b[1][2]*b[2][3]*b[3][1]+b[1][3]*b[2][1]*b[3][2]-b[1][3]*b[2][2]*b[3][1]-b[2][3]*b[3][2]*b[1][1]-b[3][3]*b[1][2]*b[2][1];
}
int main(){
	for(int i=1;i<=4;i++)
		for(int j=1;j<=4;j++)
			scanf("%lld",&a[i][j]);
	printf("%lld\n",f(1,2));
	printf("%lld\n",f(4,3));
	printf("%lld\n",f(3,3));
	printf("%lld\n",f(1,4));
	printf("%lld\n",f(2,4));
	printf("%lld\n",f(3,3));
	printf("%lld\n",f(2,2));
	printf("%lld\n",f(4,1));
	return 0;
}
