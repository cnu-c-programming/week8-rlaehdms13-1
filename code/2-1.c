#include <stdio.h>

int main(){
  char arr[] = "Hello";
  char *p = "hello";

  arr[0] = 'H';
  printf("%s\n", arr);
 
  /*
  p[0] = 'H';
  printf("%s\n", p); */
 
  return 0;
}
