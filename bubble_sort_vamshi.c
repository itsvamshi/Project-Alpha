#include <stdio.h>

int main()
{
  int no,i=0,j,sj,te;
  printf("\nHelloworld\n");
  printf("Enter the length of the array you want to enter(less than 100)\n");
  scanf("%d",&no);
  int a[no];

for(i=0;i<no;i++)
{
  printf("\nEnter your numbers");
  scanf("%d",&a[i]);
}
for(j=0;j<i;j++)
{
  for(sj=0;sj<(i-1);sj++)
  {
    if(a[sj] > a[sj+1])
    {
      te = a[sj];
      a[sj] = a[sj+1];
      a[sj+1] = te;
    }

  }

}

printf("\n sorted list\n");
for(j=0;j<no;j++)
printf("%d\n",a[j]);

return 0;
}
