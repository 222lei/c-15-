#include <stdio.h>
int main()
{
	int x,i;
	int count=0;
	for(x=1;count<50;x++){
		for(i=2;i<x;i++){
			if(x%i==0)
			break; 
		}
		if(i==x){
			count++;
			printf("%d\t",x);
			if(count%5==0) printf("\n");
		} 
}
}
//算数运算符比关系运算符优先级更高   //break 与 continue的区别
//循环的嵌套 
