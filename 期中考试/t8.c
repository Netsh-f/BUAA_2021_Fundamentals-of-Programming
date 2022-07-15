#include<stdio.h>
int a[30][30]={0},fre[30]={0};
char read(){
	char c;
	c=getchar();
	while(c<'A'||c>'Z'){
		c=getchar();
	}
	return c;
}
int main(){
	int n,m,ave,f=0,k=0;
	char x,y;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++){
		x=read();
		y=read();
		if(x==y)
			continue;
		if(a[x-'A'+1][y-'A'+1]==0){
			a[x-'A'+1][y-'A'+1]=1;
			fre[x-'A'+1]++;
		}
		if(a[y-'A'+1][x-'A'+1]==0){
			a[y-'A'+1][x-'A'+1]=1;
			fre[y-'A'+1]++;
		}
	}
	for(int i=1;i<=n;i++){
		ave=0;
		for(int j=1;j<=n;j++){
			if(a[i][j]){
				ave+=fre[j];
			}
		}
		if(fre[i]*fre[i]<ave){
			if(k){
				printf(" %c",'A'-1+i);
			}else{
				printf("%c",'A'-1+i);
				k=1;
			}
			f=1;
		}
	}
	if(f==0)
		printf("Not Found\n");
	return 0;
}
