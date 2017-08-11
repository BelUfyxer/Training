// how to find out correspondence of number to char

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  for (int i = 65; i < 65 + 26; i++)
  {
  // (char) to treat var i as a character
    printf ("%c is %i\n", (char) i, i);
  }
}


//another variant

#include <stdio.h>


int main(void)
{
  for (char c = 'A'; c <= 'Z'; c++)
  {
  // (int) to treat var c as integer
    printf ("%c is %i\n", c, (int) c);
  }
}

//another variant
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  string s = get_string();
  if (s != NULL)
  {
    for (int = 0, n = strlen(s); i < n; i++)
    {
    if (s[i] >= 'a' && s[i] <= 'z')
      {
      printf("%c", s[i] - 32) // or ("%c", s[i] - ('a' - 'A')) or + # include <ctype.h> ("%c", toupper(s[i]))
      }
      else
      {
      printf("%c", s[i]);
      }
      printf("\n");
    }
 }
}
