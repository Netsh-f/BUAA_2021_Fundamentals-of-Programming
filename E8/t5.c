#include<stdio.h>
int stu[100005][2];
int main(){
	int n,m,p=0,dir,step;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d%d",&stu[i][0],&stu[i][1]);
	for(int i=0;i<m;i++){
		scanf("%d%d",&dir,&step);
		if(dir==0){
			if(stu[p][0]==1)
				p=(p+step)%n;
			else if(stu[p][0]==0)
				p=(p+n-step)%n;
		}else{
			if(stu[p][0]==0)
				p=(p+step)%n;
			else if(stu[p][0]==1)
				p=(p+n-step)%n;
		}
	}
	printf("%d\n",stu[p][1]);
	return 0;
}
