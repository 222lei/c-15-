//char a[]={'H','e','l','l','o','\0'}; '\0'与0相同，但与'0'不同，这才是c语言的字符串，标志字符串的结束 
//char *s="hello"后面不能更改，若更改，应直接用数组赋值，即char s[]="hello"

#include <stdio.h>
int main(void)
{
	char word[8];
	char word2[8];//在某些情况下，数组名就是指针，也就是首地址，所以不加& 
	scanf("%7s",word);//scanf输入一个单词，直到空格，回车，tab为止
	scanf("%7s",word2);
	printf("%s##%s##\n",word,word2); 
 } 
// char *string;
// scanf("%s",string);错了，没有对string初始化
//char a[100]="";空字符串，a[0]=='\0' 
//char a[][10]跨度为10的行指针矩形     char 8a[] 指针数组，数组每个都是指针，指向字符串 
