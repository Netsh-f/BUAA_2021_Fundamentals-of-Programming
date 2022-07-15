#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int n,len1,len2,cnt;
	char s1[105],s2[105];
	scanf("%d ",&n);
	for(int i=1;i<=n;i++){
		cnt=0;
		scanf("%s",s1);
		scanf("%s",s2);
		len1=strlen(s1);
		len2=strlen(s2);
		for(int j=0;j<len1&&j<len2;j++){
			if(s1[j]==s2[j])
				continue;
			else
				cnt++;
		}
		cnt+=abs(len1-len2);
		printf("%d\n",cnt);
	}
	return 0;
}
