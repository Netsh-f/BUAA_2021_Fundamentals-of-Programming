#include<stdio.h>
int main(){
	int n,m,x[1005],y[1005],s[1005],xx[1005],yy[1005],sco=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&x[i],&y[i],&s[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d%d",&xx[i],&yy[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(xx[j]==x[i]||yy[j]==y[i]){
				sco+=s[i];
				break;
			}
		}
	}
	printf("%d\n",sco);
	return 0;
}
