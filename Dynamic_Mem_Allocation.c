/* Delete an element from an array */
#include<stdio.h>
#include<stdlib.h>
void main()
{
  int *p;
  int size,i,n,pos,choice;
  printf("Enter Number of elements for an array/Size of an array\n");
  scanf("%d",&size);
  p = (int *)malloc(size * sizeof(int));
  if(p == NULL)
  {
    printf("Memory can not be allocated\n");
    exit(0);
  }
  printf("Enter elements:\n");
  for(i = 0;i < size; i ++)
    scanf("%d",(p + i));
  printf("List is:\n");
  for(i = 0;i < size; i ++)
    printf("%d ,",*(p + i));
	
  xyz:
    printf("\nEnter element you want to delete:\n");
    scanf("%d",&n);
    for(i = 0;i < size; i ++)
    { 
      if( *(p + i) == n)
	  {
	    pos = i;
		break;
	  }
    }
    if( i == size)
	{
      printf("\nElement does not exist in array\n");  
      printf("do you want to continue(yes:1 / No :0)\n");
	  scanf("%d",&choice);
	  goto xyz;
	}
	
  for(i = pos; i < size - 1; i++)
    *(p + i) = *(p + i + 1);
   size = size - 1;
   printf(" new list of array is :\n");
   for(i = 0;i < size; i ++)
    printf("%d ,",*(p + i));
}
  
