#include <stdio.h>

int main()
{
	const int size=3;
	int board[size][size]; 
	int i,j;
	int numofx;
	int numof0;
	int result=-1;//-1等于没人赢，1等于叉叉赢，0等于 0赢 
//读入矩阵
    for(i=0;i<size;i++){
    	for(j=0;j<size;j++){
    		scanf("%d",&board[i][j]);
		}
	}
//检查行 
      for(i=0;i<size&&result==-1;j++){
      	numofx=numof0=0;//每一行计算时，让计数器先清零 
      	for(j=0;i<size;j++){//因为是一行中，两个边界条件其实是一个意思，可以不看result 
      		if(board[i][j]==1){
      			numofx++;
			  }
			  else {
			  	numof0++;
			  }
			  if(numofx==size){
			  	result=1; 
			  }else if(numof0==size){
			  	result=0; 
			  }
		  }	
	  }
//检查主对角线
    numofx=numof0=0;
	for(i=0;i<size;i++){
		if(board[i][i]==1){
			numofx++;
		}else numof0++;
	}
	if(numofx==size){
			  	result=1; 
	}else if(numof0==size){
			  	result=0; 
	}
	   numofx=numof0=0;
	for(i=0;i<size;i++){
		if(board[i][size-i-1]==1){
			numofx++;
		}else numof0++;
	}
	if(numofx==size){
			  	result=1; 
	}else if(numof0==size){
			  	result=0; 
	}
	if(result==1){
		printf("x赢了"); 
	}else if(result==0){
			printf("0赢了"); 
	}
	return 0;	  	 	  	 
 }
 //列号必须得给出 
