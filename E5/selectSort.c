#include<stdio.h>
int max(int x[],int n){
	int j=0;
	for(int i=1;i<n;i++){
		if(x[i]>x[j]){
			j=i;
		}
	}
	return j;
}
void selectSort(int x[],int n){
	int t,j;
	for(int i=n;i>1;i--){
		j=max(x,i);
		t=x[j];
		x[j]=x[i-1];
		x[i-1]=t;
	}
}
int main(){
	int a[20]={0,12,55,42,63,15,99,66,44,58,74};
	selectSort(a,11);
	for(int i=1;i<=10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
