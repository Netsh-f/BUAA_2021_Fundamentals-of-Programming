#include<stdio.h>
#include<string.h>
char ga[] = "abcdefghijklm";
int a,b,c;
void my_array_func(char ca[10])
{
    
    b=sizeof(ca);
}
void my_pointer_func(char *pa)
{
    
    c=sizeof(pa);
}

int main(){
	scanf("%s",ga);
	printf("#include <stdio.h>\n\
\n\
char ga[] = \"abcdefghijklm\";\n\
\n\
void my_array_func(char ca[10])\n\
{\n\
    printf(\" addr of array param = %%#x \\n\", ca);\n\
    printf(\" addr (ca[0]) = %%#x \\n\", &(ca[0]));\n\
    printf(\" addr (ca[1]) = %%#x \\n\", &(ca[1]));\n\
    printf(\" ++ca = %%#x \\n\\n\", ++ca);\n\
}\n\
\n\
void my_pointer_func(char *pa)\n\
{\n\
    printf(\" addr of ptr param = %%#x \\n\", pa);\n\
    printf(\" addr (pa[0]) = %%#x \\n\", &(pa[0]));\n\
    printf(\" addr (pa[1]) = %%#x \\n\", &(pa[1]));\n\
    printf(\" ++pa = %%#x \\n\", ++pa);\n\
}\n\
\n\
int main()\n\
{\n\
    printf(\" addr of global array = %%#x \\n\", &ga);\n\
    printf(\" addr (ga[0]) = %%#x \\n\", &(ga[0]));\n\
    printf(\" addr (ga[1]) = %%#x \\n\\n\", &(ga[1]));\n\
    my_array_func(ga);\n\
    my_pointer_func(ga);\n\
    return 0;\n\
}");
	gets(ga);
	a=strlen(ga)+1;
    my_array_func(ga);
    my_pointer_func(ga);
    printf("\n\n%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
	return 0;
}
