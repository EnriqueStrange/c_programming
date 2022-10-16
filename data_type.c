#include <stdio.h>      
int main() {
  short a;
  long b;
  long long c;
  long double d;
  
  // valid codes
   unsigned int x = 35;
  int y = -35;  // signed int
  int z = 36;  // signed int

  // invalid code: unsigned int cannot hold negative integers
  unsigned int num = -35;

  printf("size of short = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));
  return 0;
}
