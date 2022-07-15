#include<stdio.h>
#include<string.h>
int main(){
	char s[1005],a[]={"助教，我的代码样例是对的，为什么交上去WA了？"};
	char b[]={"助教，我的代码为什么过不去样例啊。"};
	char c[]={"助教,我的代码REG是怎么回事？"};
	char d[]={"助教我的代码OE了。"};
	char e[]={"助教我的代码CE了。"};
	char f[]={"助教我的代码什么都不输出。"};
	while(gets(s)!=NULL){
		if(!(strcmp(s,a))){
			printf("本地对了就是对了，交上去WA说明评测机有问题。\n");
		}else if(!(strcmp(s,b)))
			printf("调试调试。\n");
		else if(!(strcmp(s,c)))
			printf("SIGESGV大约是数组越界了,SIGFPE大约是除以零了。\n");
		else if(!(strcmp(s,d)))
			printf("大约是数组越界了。\n");
		else if(!(strcmp(s,e)))
			printf("百度一下报错信息。\n");
		else if(!(strcmp(s,f)))
			printf("可能是死循环了，如果显示process exited with return value 3221225477等非零数，可以百度百度这个数字的携带的错误信息。\n");
		else
			printf("PARDON?\n");
	}
	return 0;
}
