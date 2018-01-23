#include <stdio.h>
 
int main()
{
  char bt;
 
  printf("Enter a character");
  scanf("%c", &ch);
 
  if (bt == 'a' || bt == 'A' || bt == 'e' || bt == 'E' || bt == 'i' || bt == 'I' || bt =='o' || bt=='O' || bt == 'u' || bt == 'U')
    printf("%c is a vowel.\n", bt);
  else
    printf("%c is not a vowel.\n", bt);
 
  return 0;
}
