#include<stdio.h>
int main(){
	int temp1[4][3];
	printf("nhap mang temp1 \n");
	for (int i=0;i<4;i++)	
		{for(int j=0;j<3;j++){
		printf("[%d][%d]: ",i,j);
		scanf("%d",&temp1[i][j]) ;
		}
	}
	for(int i=0;i<4;++i)
    {    
        for(int j=0;j<3;j++)
        {
            printf("%5d",temp1[i][j]);
        }
        printf("\n");
    }
		int temp3[3][4];
		for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {		
      temp3[j][i]=temp1[i][j];
	  } 
   }   
    printf("\nMa tran chuyen vi :\n");
    for(int i=0;i<3;++i)
    { 
     for(int j=0;j<4;j++)
        {           
            printf("%5d",temp3[i][j]);
        }
        printf("\n");
    }
}
