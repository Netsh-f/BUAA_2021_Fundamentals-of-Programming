#include<stdio.h>
int main()
{
 int a[101]={0},b[301]={0},i=1,j=1,score,count,m=0,n,max,min;
 double ave;
 while(1)
 {
  scanf("%d",&score);
  if(score==-1)
   break;
  if(score>=0&&score<=100)
  {
   b[i]=score;
   i++;
   count++;
  }
 }
 
 printf("count: %d\n",count);
 
 for(j=1;j<=count;j++)
  a[b[j]]++;
 for(i=1;i<101;i++)
  ave+=i*a[i];
 ave/=(double)count;
 
 printf("ave: %.4f\n",ave);
 
max=-1;
int maxN;
for(i=1;i<=count;i++){
	if(b[i]>=max){
		max=b[i];
		maxN=i;
	}
}
 
 printf("max: %d: %d\n",maxN,max);
 
 for(i=0;i<101;i++)
 { 
  if(a[i]>0)
  {
   for(j=count;b[j]!=i;j--)
    min=j;
  }
  break;
 }
 
 printf("min: %d: %d\n",min,i);
 
 for(i=0;i<101;i++)
 {
  if(a[i]>m)
   m=a[i];
 }
 for(i=100;a[i]!=m;i--)
  n=i;
 printf("mode: %d\n",n);
 return 0;
}
