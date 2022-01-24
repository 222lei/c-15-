#include <stdio.h>
int main()
{
	int i=1;
switch ( i%3 ) {
case 0: printf("zero");
case 1: printf("one");
case 2: printf("two");
}
}
//swich语句有一个起飞了，如果没break,会一直执行下去，管他条件成不成立。 

