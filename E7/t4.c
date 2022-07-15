#include<stdio.h>
char a[105][105];
int main(){
	int n,m,l1,l2,index[105],t;
	scanf("%d%d ",&n,&m);
	for(int i=1;i<=n;i++){
		gets(a[i]);
		index[i]=i;
	}
	for(int i=1;i<=m;i++){
		scanf("%d%d",&l1,&l2);
		t=index[l1];
		index[l1]=index[l2];
		index[l2]=t;
	}
	for(int i=1;i<=n;i++){
		printf("%s\n",a[index[i]]);
	}
	return 0;
}
