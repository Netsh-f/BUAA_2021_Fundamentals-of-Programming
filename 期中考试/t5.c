#include<stdio.h>
double s[305];
int num[305];
void bubbleSort(int n){
	double hold,f;
	for(int i=1;i<n;i++){
		f=0;
		for(int j=1;j<n-i;j++){
			if(s[j]>s[j+1]){
				hold=s[j];
				s[j]=s[j+1];
				s[j+1]=hold;
				hold=num[j];
				num[j]=num[j+1];
				num[j+1]=hold;
				f=1;
			}else if(s[j]==s[j+1]&&num[j]>num[j+1]){
				hold=num[j];
				num[j]=num[j+1];
				num[j+1]=hold;
			}
		}
		if(f==0)
			break;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d%lf",&num[i],&s[i]);
	bubbleSort(n+1);
	for(int i=1;i<=n;i++){
		printf("%08d %.2f\n",num[i],s[i]);
	}
	return 0;
}
