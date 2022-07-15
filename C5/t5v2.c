#include<stdio.h>
double ggpa[1000010];
int cnt=0;
double gpa(double x){
	if(x>60)
		return 4-((3*(100-x)*(100-x))/1600);
	else if(x==60)
		return 1;
	else
		return 0;
}

int main(){
	int n;
	double x,h,sumh=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lf%lf",&x,&h);
		ggpa[++cnt]=gpa(x)*h;
		sumh+=h;
	}
	double ans=0;
	for(int i=1;i<=cnt;i++){
		ans=ans+ggpa[i]/sumh;
	}
	printf("%.2f\n",ans);
	return 0;
}
