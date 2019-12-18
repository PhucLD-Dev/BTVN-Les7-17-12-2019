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
		int temp2[4][3];
		printf("nhap mang temp2 \n");
	for (int i=0;i<4;i++)
		{for(int j=0;j<3;j++){
		printf("[%d][%d]: ",i,j);
		scanf("%d",&temp2[i][j]) ;
		}
		}
		for(int i=0;i<4;++i)
    {    
        for(int j=0;j<3;j++)
        {
            printf("%5d",temp2[i][j]);
        }
        printf("\n");
    }
		int temp3[4][3]; 
		for(int i=0;i<4;i++)
     {
        for(int j=0;j<3;j++)
              {
            temp3[i][j]=temp1[i][j]+temp2[i][j];
        }
    	}  
		int temp4[4][3]; 
		for(int i=0;i<4;i++)
     {
        for(int j=0;j<3;j++)
              {
            temp4[i][j]=temp1[i][j]-temp2[i][j];
        }
    	}  
    	
    printf("\nMa tran sau cong:\n");
    for(int i=0;i<4;++i)
    {    
        for(int j=0;j<3;j++)
        {
            printf("%5d",temp3[i][j]);
        }
        printf("\n");
    }
    printf("\nMa tran sau tru:\n");
    for(int i=0;i<4;++i)
    {    
        for(int j=0;j<3;j++)
        {
            printf("%5d",temp4[i][j]);
        }
        printf("\n");
    }
}
