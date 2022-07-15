#include<stdio.h>
#include<stdlib.h>
int cmp(const void *p1,const void *p2){
	return *((int*)p1)-*((int*)p2);
}

int main(){
	int a[10]={35,42,96,15,18,66,50,51,51,52,};
	qsort(a,sizeof(a)/sizeof(a[0]),sizeof(int),cmp);
	for(int i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}
