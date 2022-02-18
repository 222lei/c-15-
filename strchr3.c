#include <stdio.h>
#include <string.h>
int main(int argc,char const *argv[])//ȡhe 
{
	char s[]="hello";
	char *p=strchr(s,'l');
	char c=*p;
	*p='\0';//'h','e','\0','l','o'
	char *t=(char*)malloc(strlen(s)+1);
	strcpy(t,s);
	printf("%s\n",t);
	printf("%s\n",s);
	*p=c;
	printf("%s\n",s);
	free(t);
	return 0;
}
