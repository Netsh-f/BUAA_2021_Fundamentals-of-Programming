#include<stdio.h>
int main(){
	int n,a[35]={0};
	scanf("%x",&n);
	for(int i=32;i>=1;i--){
		a[i]=n%2;
		n/=2;
	}
	int x,y,z;
	x=a[7]*16+a[8]*8+a[9]*4+a[10]*2+a[11];
	y=a[12]*16+a[13]*8+a[14]*4+a[15]*2+a[16];
	z=a[17]*16+a[18]*8+a[19]*4+a[20]*2+a[21];
	printf("add $%d,$%d,$%d\n",z,x,y);
	return 0;
}
