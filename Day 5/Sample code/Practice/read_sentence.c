#include <stdlib.h>
#include <stdio.h>

int main() {
  char str[30];
  printf("Enter string: ");
  fgets(str, sizeof(str), stdin);
  printf("The string is: ");
  puts(str);

  return 0;
}
