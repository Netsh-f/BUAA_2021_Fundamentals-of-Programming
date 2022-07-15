#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	return *(int *)(a)<*(int *)(b);
}

int main(){
	int a[10]={3,5,4,2,9,8,5,6,1,4};
	qsort(a,10,4, cmp);
	for(int i=0; i<10; i++){
		printf("%d ",a[i]);
	}
	return 0;
}
