#include <stdio.h>
#include <string.h>
int mycmp(const char *s1,const char *s2)
{
//	int ctt=0;
//	while(s1[ctt]==s2[ctt]&&s1[ctt]!='\0'){
////		if(s1[ctt]!=s2[ctt]){
////			break;
////		}else if(s1[ctt]=='\0'){
////			break;
////		}
//		ctt++;
//	}return s1[ctt]-s2[ctt];
    while(*s1==*s2&&*s1!='\0'){//带星号是所指 
    	s1++;
    	s2++;//指针指向下一单元 
	}
	return *s1-*s2; 
}
int main(int argc,char const *argv[])
{
	char s1[]="abc";
	char s2[]="abc ";
	printf("%d\n",mycmp(s1,s2));
	printf("%d\n",'a'-'A');
	return 0;
 } 
