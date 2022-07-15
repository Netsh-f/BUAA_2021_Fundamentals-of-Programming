#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char name[1005][11];
int score[1005];
int index[1005];
int main(){
	int n,t;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s %d",name[i],&score[i]);
		index[i]=i;
	}
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-1;j++){
			if(score[index[j]]<score[index[j+1]]){
				t=index[j];
				index[j]=index[j+1];
				index[j+1]=t;
			}else if(score[index[j]]==score[index[j+1]]&&strcmp(name[index[j]],name[index[j+1]])>0){
				t=index[j];
				index[j]=index[j+1];
				index[j+1]=t;
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%s %d\n",name[index[i]],score[index[i]]);
	}
	return 0;
}
