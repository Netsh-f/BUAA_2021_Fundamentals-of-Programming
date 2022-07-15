#include<stdio.h>
int main(){
	int n,a[105],b[105];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]==b[i])
			printf("0");
		else
			printf("1");
	}
	printf("\n");
	for(int i=0;i<n;i++){
		if(a[i]||b[i])
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	for(int i=0;i<n;i++){
		if(a[i]&&b[i])
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	return 0;
}
