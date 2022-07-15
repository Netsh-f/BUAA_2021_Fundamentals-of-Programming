#include<stdio.h>
#include<string.h>
int is(int cnt[]){
	int f=1;
	for(int i=1;i<=9;i++){
		f*=cnt[i];
	}
	return f==1;
}
int main(){
	int a[10][10],cnt[10];
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			scanf("%d",&a[i][j]);
		}
	}
	memset(cnt,0,sizeof(cnt));
	for(int i=1;i<=9;i++){
		memset(cnt,0,sizeof(cnt));
		for(int j=1;j<=9;j++){
			cnt[a[i][j]]++;
		}
		if(!is(cnt)){
			printf("Emergency food! ~>_<~\n");
			return 0;
		}
	}
	for(int i=1;i<=9;i++){
		memset(cnt,0,sizeof(cnt));
		for(int j=1;j<=9;j++){
			cnt[a[j][i]]++;
		}
		if(!is(cnt)){
			printf("Emergency food! ~>_<~\n");
			return 0;
		}
	}
	for(int p=0;p<3;p++){
		for(int q=0;q<3;q++){
			memset(cnt,0,sizeof(cnt));
			for(int i=1;i<=3;i++){
				for(int j=1;j<=3;j++){
					cnt[a[p*3+i][q*3+j]]++;
				}
			}
			if(!is(cnt)){
				printf("Emergency food! ~>_<~\n");
				return 0;
			}
		}
	}
	printf("Cheers! O(^_^)O\n");
	return 0;
}
