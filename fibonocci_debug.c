#include<stdio.h>

int main()
{
  int i=0,j=i+1,k,temp,count;
  system("cls");
  printf("\nEnter upto how many digits(>3) you need the Fibonocci series");
  scanf("%d",&count);
  printf("Fibonocci series :\n");
  printf("I\tJ\tK");
  for(i=0;i<count;)
  {
    if(count==0)
    {
        printf("lol");
    }
    if(i==0)
    {
printf("\n%d\n\t%d\n\t%d",i,j,(i+j));
}
else
printf("\n%d",(i+j));

temp = i+j;
i=j;
j=temp;
  }

return 0;

}
