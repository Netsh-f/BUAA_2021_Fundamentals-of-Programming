#include<stdio.h>
#include<string.h>
int main(){
	char s[1005],a[]={"���̣��ҵĴ��������ǶԵģ�Ϊʲô����ȥWA�ˣ�"};
	char b[]={"���̣��ҵĴ���Ϊʲô����ȥ��������"};
	char c[]={"����,�ҵĴ���REG����ô���£�"};
	char d[]={"�����ҵĴ���OE�ˡ�"};
	char e[]={"�����ҵĴ���CE�ˡ�"};
	char f[]={"�����ҵĴ���ʲô���������"};
	while(gets(s)!=NULL){
		if(!(strcmp(s,a))){
			printf("���ض��˾��Ƕ��ˣ�����ȥWA˵������������⡣\n");
		}else if(!(strcmp(s,b)))
			printf("���Ե��ԡ�\n");
		else if(!(strcmp(s,c)))
			printf("SIGESGV��Լ������Խ����,SIGFPE��Լ�ǳ������ˡ�\n");
		else if(!(strcmp(s,d)))
			printf("��Լ������Խ���ˡ�\n");
		else if(!(strcmp(s,e)))
			printf("�ٶ�һ�±�����Ϣ��\n");
		else if(!(strcmp(s,f)))
			printf("��������ѭ���ˣ������ʾprocess exited with return value 3221225477�ȷ����������԰ٶȰٶ�������ֵ�Я���Ĵ�����Ϣ��\n");
		else
			printf("PARDON?\n");
	}
	return 0;
}
