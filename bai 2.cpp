#include<stdio.h>
int main(){
	int temp[4][4];
	for (int i=0;i<4;i++)
		for(int j=0;j<4;j++){
		printf("nhap mang temp[%d][%d]: \n ",i,j);
		scanf("%d",&temp[i][j]) ;
		}
	float tbc=0;
	float tbp=0; 
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
		{
				 if(i==j)
			    {
		     	tbc=tbc+ (float)temp[i][j]/4;
		    	}
			
			
				if(i+j==3) 
				{
				tbp=tbp+ (float)temp[i][j]/4;
				}
		
		}
		
	}
	printf("trung binh duong cheo chinh la : %f\n",tbc);
	printf("trung binh duong cheo phu la : %f",tbp);
	return 0; 
	 
} 
