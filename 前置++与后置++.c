#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
  int a = 5;
  int b = 6;
  int c, d;
  a = a++;
  b = ++b;
  //无论是前置++还是后置++，都会使其操作数加一，也就是不管是前置++，还是后置++，还是遵循先赋值后加一或者是先加一再赋值，但是初始变量的值任然会加一，就如此处变量a，执行a=a++后，a先把自己的值5赋值给了a，然后再自增为6，所以此处a的值为6
  printf("%d,%d\n", a, b);//6,7
  
  c = a++;
  d = ++b;
  printf("%d,%d\n", c, d);
  return 0;
}
