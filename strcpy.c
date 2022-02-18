#include <stdio.h>
#include <string.h>
char *mcpy(char *dst,const char *src)
{
//	int idx=0;//数组形式 
//	while(src[idx]!='\0'){
//		dst[idx]=src[idx];
//		idx++;
//	}dst[idx]='\0';
//	return dst;//最后返回指针，指向最初首地址
    char *rest=dst; 
    while(*src!='\0'){
    	*dst=*src;
    	dst++;
    	src++;
	}*dst='\0';
	return rest; //要的就是dst最初的地址，但因为中途会改变指针dst的值 ，所以在最开始找个指针指向指针dst的初地址 
}
int main(int argc,char const *argv[])//strcpy不能重叠，覆盖  char *dst=(char*)malloc(strlen(src)+1);  strcpy(dst,src)
{
	char s1[]="    ";
	char s2[]="abc";
	mcpy(s1,s2);
	printf("%s",s1);
	return 0; 
}
