#include <stdio.h>
int main()
{
	int a=0;
    unsigned int b=0; 
	while(++a>0);//因为最大数加一会变成负的，若是负的则跳出循环，否则锁死。 
		printf("int数据类型最大的数是:%d\n",a-1); 
		while(++b!=0);//必须是++b,要不然直接退出了 
		//因为unsigned最大数加一等于0 
		printf("unsigned int数据类型最大的数是:%u",b-1);//unsigned int 得用%u来输出 
		return 0;
 } 
 //浮点数精度拉跨 
