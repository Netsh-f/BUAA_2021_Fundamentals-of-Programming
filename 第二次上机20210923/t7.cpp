#include<stdio.h>
int main(){
	int n,a[100001]={0},f=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j*i<=n;j++){
			a[j*i]++;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]%2==1){
			if(f==1)
				printf(" ");
			printf("%d",i);
			f=1;
		}
	}
	return 0;
}
