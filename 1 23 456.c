#include <stdio.h>//1 23 456
main()
{
   int i,j,n,k=1;
   printf("Number of rows : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%3d ",k++);
	printf("\n");
   }
}