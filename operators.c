//Operators
//Example
int main() {
int sum1 = 100 + 50;        
int sum2 = sum1 + 250;      
int sum3 = sum2 + sum2;
printf("%d\n", sum1);
  printf("%d\n", sum2);
  printf("%d\n", sum3);
  return 0;
}


//Arithmetic Operators
#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;
  printf("%d", x + y);
  printf("%d", x - y);
  printf("%d", x * y);
  printf("%d", x / y);
  printf("%d", x % y);
  printf("%d", ++x);
  printf("%d", --x);   
  return 0;
}

//Assignment Operators
#include <stdio.h>
// =
int main() {
  int x = 5;
  printf("%d", x);
  return 0;
}

//+=
#include <stdio.h>

int main() {
  int x = 5;
  x += 3;
  printf("%d", x);
  return 0;
}

//-=
#include <stdio.h>

int main() {
  int x = 5;
  x -= 3;
  printf("%d", x);
  return 0;
}

//*=
#include <stdio.h>

int main() {
  int x = 5;
  x *= 3;
  printf("%d", x);
  return 0;
}

//&=
#include<stdio.h>
int main() {
  int x = 5;
  x &= 3;
  printf("%d", x);
  return 0;
}

//^
#include <stdio.h>

int main() {
  int x = 5;
  x ^= 3;
  printf("%d", x);
  return 0;
}

//>>=

#include <stdio.h>

int main() {
  int x = 5;
  x ^= 3;
  printf("%d", x);
  return 0;
}

//<<=
#include <stdio.h>
int main() {
  int x = 5;
  x <<= 3;
  printf("%d", x);
  return 0;
}
