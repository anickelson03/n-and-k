#include <stdio.h>
#include<string.h>
int main()
{
 char s[100];
 int l,i;
 scanf("%s",s);
 l=strlen(s);
 for(i=0;i<l;i++)
 {
  if((s[i]%2)!=0)
  printf("%c ",s[i]);
 }
return 0;
}
