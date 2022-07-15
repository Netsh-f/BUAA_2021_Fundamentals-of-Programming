#include<stdio.h>
void bubbleSort(int a[],int n){
	int hold,f;
	for(int i=1;i<n;i++){
		f=0;
		for(int j=1;j<n-i;j++){
			if(a[j]>a[j+1]){
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
				f=1;
			}
		}
		if(f==0)
			break;
	}
}
int main(){
	int a[20]={0,12,55,42,63,15,99,66,44,58,74};
	bubbleSort(a,11);
	for(int i=1;i<=10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
