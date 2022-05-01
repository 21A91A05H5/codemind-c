#include <stdio.h>
int main() {

  char line[150];
  int vowels, consonant, digit, space;
  digit=0;
  fgets(line, sizeof(line), stdin);
  for (int i = 0; line[i] != NULL; ++i) 
  {
        if (line[i] >= '0' && line[i] <= '9')   
        {
          ++digit;
        }
  }
    if (digit>0)
     {
        printf("Contains %d digit", digit);
     }
    else
    {
        printf("Doesn't contain digit");
    }
}
