//(short)32768因为short最大是20767，所以输出是-32768.，强制类型转换并不是去改变量，而是去计算一个新的值出来。
//include <stdbool.h>后，就可以用bool
#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool b=6>5;
	bool a=true;
	printf("%d\n",b);
	printf("%d",a);
	return 0;
	}	
	//!>&&>||
	//逻辑运算会短路，a==6&&b==1; 

