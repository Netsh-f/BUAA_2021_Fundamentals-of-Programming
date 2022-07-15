#include<stdio.h>
int main(){
	int n,s[30],num;
	double p[30],q[30],ans[30],late,answer=0;
	for(int i=0;i<30;i++)
		ans[i]=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%lf%lf",&s[i],&p[i],&q[i]);
		late+=p[i]*q[i];
	}
	for(int i=0;i<n;i++){
		ans[i]=(p[i]*q[i])/late;
	}
	for(int i=0;i<n;i++){
		if(ans[i]>answer){
			answer=ans[i];
			num=s[i];
		}
	}
	int f=1;
	for(int i=0;i<n;i++){
		if(ans[i]>0.00001){
			f=0;
			break;
		}
	}
	if(f==1){
		printf("ERROR!\n");
	}else{
		printf("%04d %.4f\n",num,answer);
	}
	return 0;
}
