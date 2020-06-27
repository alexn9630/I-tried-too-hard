#include <stdio.h>
#include <math.h>

  void diamond()
  {
    printf("      *\n");
    printf("    *   *\n");
    printf("  *       *\n");
    printf("*           *\n");
    printf("  *       *\n");
    printf("    *   *\n");
    printf("      *\n\n");
    return;
  }

  void math()
  {
    int a = 7+9;
    int b = 12345-67890;
    int c = 12*122;
    int d = 130/13;
    float e = 130.0/14.0;
    int f = 12%2;
    int g = 12%3;
    int h = 12%4;
    int i = 12%5;
    unsigned long j = 1+2147483647UL;
    printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%0.2f\nf=%d\ng=%d\nh=%d\ni=%d\nj=%lu\n\n", a, b, c, d, e, f, g, h, i, j);
    return;
  }

  void conversion()
  {
    float eur;
    printf("Please input the cost in Euro here: ");
    scanf("%f",&eur);
    float jpy = eur*119.47;
    printf("The cost in Japanese Yen: %0.2f\n\n",jpy);
    return;
  }

  void checksum()
  {
    int x;
    x = 4512;
    printf("Checksum of x is 0x%x\n", x);
  }

  int main()
  {
    printf("My name is Anon\n");
    printf("To be or not to be\n");
    printf("c:\\cygwin\\home\\administrator\n\n");
    diamond();
    math();
    conversion();
    checksum();
    return 0;
  }
