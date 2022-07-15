#include<stdio.h>
#include<math.h>
#include<string.h>
double I[27];
double num[27],p[27];
char s[1005];
int main(){
	scanf("%s",s);
	int len=strlen(s);
	double H=0;
	for(int i=0;i<len;i++){
		num[s[i]-'a'+1]++;
	}
	for(int i=1;i<=26;i++){
		p[i]=num[i]/len;
		I[i]=-log2(p[i]);
		H+=(-p[i]*I[i]);
	}
	int index[27],t;
	for(int i=1;i<=26;i++)
		index[i]=i;
	for(int i=1;i<=26-1;i++){
		for(int j=1;j<=26-i;j++){
			if(I[index[j]]>I[index[j+1]]||(I[index[j]]==I[index[j+1]]&&index[j]>index[j+1])){
				t=index[j];
				index[j]=index[j+1];
				index[j+1]=t;
			}
		}
	}
	printf("%.2f\n",-H);
	for(int i=1;i<=10;i++){
		printf("%c:%.2f\n",'a'-1+index[i],I[index[i]]);
	}
	return 0;
}
