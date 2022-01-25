#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{   int a,i,g,N;
	srand(time(0));
	g=rand()%100+1;
//	N=rand()%100+1;
	printf("请输入最大猜测次数：");
	scanf("%d",&N);
	for(i=1;i<=N+1;i++){ //N+1次 
		scanf("%d",&a);
		if(a<g){
			printf("小了\n");
		}
		else if(a>g){
			printf("大了\n"); 
		}
		else if(a==g){
		break;
		} 
	}if(a==g&&i==1){
		printf("bingo!");
	}else if(a==g&&i<=3){
		printf("lucky you!");
	}else if(a==g&&i>3){
		printf("good guess!");
	}else if(a!=g||a<0){
		printf("game over!");
	}
 }
/*#include <stdlib.h>
#include <time.h> 
	srand(time(0));
	g=rand()%100+1;*/
