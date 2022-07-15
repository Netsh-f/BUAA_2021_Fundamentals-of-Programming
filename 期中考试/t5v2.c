#include<stdio.h>
double s[305];
int num[305];
void sort(int n){
	double t;
	int tt;
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-i;j++){
			if(s[j]>s[j+1]){
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
				tt=num[j];
				num[j]=num[j+1];
				num[j+1]=tt;
			}else if(s[j]==s[j+1]&&num[j]>num[j+1]){
				tt=num[j];
				num[j]=num[j+1];
				num[j+1]=tt;
			}
		}
	}
	return;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d%lf",&num[i],&s[i]);
	sort(n);
	for(int i=1;i<=n;i++){
		printf("%08d %.2f\n",num[i],s[i]);
	}
	return 0;
}
