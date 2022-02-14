#include <stdio.h>
int main(int argc,char const *argv[])
{
	int ch;
    while((ch=getchar())!=EOF){//getchar是单字符 
    	putchar(ch);
	}
	printf("EOF");
	return 0;
 }
 //按下回车之后才将行编辑送到shell
 //作为函数的参数，数组和指针是一样的 
