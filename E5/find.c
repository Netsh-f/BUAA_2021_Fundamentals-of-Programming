#include<stdio.h>
int b[1010];
int find(int key,int low,int high){
	int mid;
	if(low>high)
		return -1;
	mid=(low+high)/2;
	if(key==b[mid])
		return mid;
	else if(key>b[mid])
		return find(key,mid+1,high);
	else
		return find(key,low,mid-1);
}
int main(){
	int key,res;
	for(int i=1;i<=1000;i++)
		b[i]=i*3;
	scanf("%d",&key);
	res=find(key,1,1000);
	if(res!=-1)
		printf("key is b[%d]\n",res);
	else
		printf("key not found\n");
	return 0;
}
