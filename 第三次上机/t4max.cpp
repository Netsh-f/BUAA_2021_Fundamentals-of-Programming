#include<stdio.h>
int main(){
	int n,a[101];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max,cnt=0;
	max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			cnt=1;
		}else if(a[i]==max){
			cnt++;
		}
	}
	printf("%d\n%d\n",max,cnt);
	return 0;
}
