#include <stdio.h>
void removeDupChar(char *inStr)
{
   if (inStr == NULL)
   {
      return ;
   }
   char prv  = '\0';
   int newStrCnt  = 0;
   for ( int i = 0; inStr[i] != '\0'; i++)
   {
      if (prv != inStr[i] )
      {
         inStr[newStrCnt++] = inStr[i] ;
      }
      prv = inStr[i];
   }
   inStr[newStrCnt] = '\0';
}
int main(int argc, char**argv)
{
   char s[32] = "saarccc";
   printf("string before dup removal:%s\n",s);
   removeDupChar(s);
   printf("string after dup removal:%s\n",s);
   return 0;
}
