#include <stdio.h>

int main()
{
	const int size=3;
	int board[size][size]; 
	int i,j;
	int numofx;
	int numof0;
	int result=-1;//-1����û��Ӯ��1���ڲ��Ӯ��0���� 0Ӯ 
//�������
    for(i=0;i<size;i++){
    	for(j=0;j<size;j++){
    		scanf("%d",&board[i][j]);
		}
	}
//����� 
      for(i=0;i<size&&result==-1;j++){
      	numofx=numof0=0;//ÿһ�м���ʱ���ü����������� 
      	for(j=0;i<size;j++){//��Ϊ��һ���У������߽�������ʵ��һ����˼�����Բ���result 
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
//������Խ���
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
		printf("xӮ��"); 
	}else if(result==0){
			printf("0Ӯ��"); 
	}
	return 0;	  	 	  	 
 }
 //�кű���ø��� 
