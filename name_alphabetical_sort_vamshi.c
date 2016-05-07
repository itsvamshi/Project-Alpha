#include<stdio.h>
#include<string.h>

int main()
{
  int len,temp,i,j,c;
 char ch[100];
 system("cls");
 printf("\nHello World\n");
 printf("\nEnter your word\n");
 scanf("%s",&ch);
 printf("\nWord entered is: \t %s\n",ch);
 len = strlen(ch);
 printf("\n Length of the string entered = %d\n",len);
 int m[len];

system("cls");
printf("\nWord entered is: \t %s\n",ch);
printf("\nLength of the word entered = \t%d\n",len);
for(i=0;i<len;i++)
{
  printf("\n letter %d =%c\t ascii value = %d",(i+1),ch[i],ch[i]);
  m[i] = ch[i];
}
for(j=0;j<i;j++)
{
  for(c=0;c<(i-1);c++)
  {
    if(m[c] > m[c+1])
    {
      temp = m[c];
      m[c] = m[c+1];
      m[c+1] = temp;
    }

  }

}
printf("\n\n");
for(j=0;j<len;j++)
{
  printf("\n letter %d =%c\t ascii value = %d",(j+1),m[j],m[j]);
}
  return 0;
 }
