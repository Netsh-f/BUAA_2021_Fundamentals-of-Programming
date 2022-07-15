#include<stdio.h>
int main(){
	int n,a[105],f=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("a[]={");
	for(int i=n;i>=1;i--){
		if(f){
			printf(",%d",a[i]);
		}else{
			printf("%d",a[i]);
			f=1;
		}
	}
	printf("};\n");
	return 0;
}
