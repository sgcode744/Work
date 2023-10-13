#include<stdio.h>
#include<limits.h>
int main(void)
{
  char ch='A';
    printf("\n sizeof(10)=%d", sizeof(10));  // 4 bytes
    printf("\n sizeof(10.2)=%d", sizeof(10.2));  // 8 bytes
    // all fractions are by default double in c
    printf("\n sizeof(10.56464f)=%d", sizeof(10.55f));  // 4 bytes
    printf("\n sizeof(10.26565F)=%d", sizeof(10.554565F));  // 4 bytes
    printf("\n sizeof(ch)=%d", sizeof(ch));  // 1 bytes
    printf("\n sizeof('A')=%d", sizeof('A'));  //4 bytes
   

    return 0 ;
}