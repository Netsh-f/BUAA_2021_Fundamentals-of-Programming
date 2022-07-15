#include <stdio.h>
int main()
{
 int n,k=0;
 scanf("%d",&n);
 int i,a[10000];
 for(i=1;i<12*n;i++)
 	scanf("%d\n",&a[i]);
 int sh=0;
 for(i=1;i<12*n;i++)
 {
  if(i%12!=0)
  {
   if(a[i]<=200+sh)
   {
    sh=200+sh-a[i];
    k++;
   }
   else
   {
    sh=sh+300-a[i];
    if(sh<0)
    {
     printf("-%d",i+1);
     break;
    }
   }
  }
  else
  {
   sh=sh+300-a[i]+k*120;
   k=0;
  }
  if(i==12*n)
  {
   printf("%d",sh);
   break;
  }
 }
 return 0;
}
