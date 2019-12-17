#include<stdio.h>
int main(){
	int n;
	printf("nhap so luong phan tu n=");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{printf("nhap phan tu a[%d]:",i);
	scanf("%d",&a[i]);}
	int x;
	printf("nhap so can tim:") ;
	scanf("%d",&x);
	for(int i=0;i<n;i++)
		if(a[i]==x){ if((i-1)<0)
		{printf("%d co nham trong mang va nam o gan vi tri %d \n",x,i+1); }
		 else if((i+1)>=n) {
		printf("%d co nham trong mang va nam o gan vi tri %d \n",x,i-1);
		} 
		else {printf("%d co nham trong mang va nam o gan vi tri %d va %d \n",x,i-1,i+1);
		} 
		 } printf("so can tim ko nam trong mang "); 
    return 0; 
} 
