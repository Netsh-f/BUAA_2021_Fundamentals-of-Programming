#include<stdio.h>
int a[1005][1005],l[1005],r[1005],d1=0,d2=0,b[10005];
int main(){
	int n,num,x[3],y[3],cnt=0,f=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
			l[i]+=a[i][j];
			r[j]+=a[i][j];
			if(i==j)
				d1+=a[i][j];
			if(n-i+1==j)
				d2+=a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		b[l[i]]++;
		b[r[i]]++;
	}
	b[d1]++;
	b[d2]++;
	for(int i=1;i<=n;i++){
		if(b[i]>=2){
			num=i;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if(l[i]!=num){
			for(int j=1;j<=n;j++){
				if(r[j]!=num){
					x[++cnt]=i;
					y[cnt]=j;
					if(cnt>=2){
						f=1;
						break;
					}
				}
			}
		}
		if(f)
			break;
	}
	printf("%d %d\n%d %d\n",x[1],y[1],x[2],y[2]);
	return 0;
}
