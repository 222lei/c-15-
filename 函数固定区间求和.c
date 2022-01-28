#include <stdio.h>
int sum(int begin,int end);//函数声明 ，原型 
int main()
{
    sum(1,10);
    sum(20,30);
    sum(35,45);
}
int sum(int begin,int end){  //函数定义 
	int sum;
	int i;
		for(i=begin,sum=0;i<=end;i++){
		sum+=i;
	}
	printf("sum=%d\n",sum);
} 

//	int i,sum;
//	for(i=1,sum=0;i<=10;i++){
//		sum+=i;
//	}
//	printf("sum=%d\n",sum);
//		for(i=20,sum=0;i<=30;i++){
//		sum+=i;
//	}
//	printf("sum=%d\n",sum);
//		for(i=35,sum=0;i<=45;i++){
//		sum+=i;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//}

//cheer()函数调用必须有圆括号 
//return 停止函数的运行，并返回值 
//设计理念，单一出口 
//swap函数不太行，函数只是传递值
//形参和实参不行，太老了，要用参数和值来代替。
//两个括号里的即为块，块内的变量不能重复定义。
//离开这个块，这个变量就消失了。 
