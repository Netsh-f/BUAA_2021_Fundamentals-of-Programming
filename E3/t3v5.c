#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[4],b[4],c[4];
	for(int j=0;j<n;j++){
		for(int i=1;i<=3;i++){
			scanf("%d",&a[i]);
			scanf("%d",&b[i]);
			scanf("%d",&c[i]);
		}
		if((a[1]*b[2]==a[2]*b[1]&&a[1]*b[3]==a[3]*b[1]&&a[2]*b[3]==a[3]*b[2])&&((a[1]*c[2]!=a[2]*c[1]||a[1]*c[3]!=a[3]*c[1]||a[2]*c[3]!=a[3]*c[2])||(b[1]*c[2]!=b[2]*c[1]||b[1]*c[3]!=b[3]*c[1]||b[2]*c[3]!=b[3]*c[2]))){
			printf("A nice test data ~\n");
		}else if(a[1]*(b[2]*c[3]-b[3]*c[2])-b[1]*(a[2]*c[3]-a[3]*c[2])+c[1]*(a[2]*b[3]-a[3]*b[2])==0){
			printf("Could be a bug!\n");
		}else{
			printf("A nice test data ~\n");
		}
	}
	return 0;
}
