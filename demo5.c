#include<stdio.h>
//return_type  function_name(datatype parameter)
//int factorial(int n); // 1. global function decl
int main(void)
{
    int no1, ans;
    int factorial(int n); // local function decl
    printf("\n Enter No1=");
    scanf("%d", &no1);

    ans= factorial(no1); // 3. functaion call
    // no1 is actual argument

    printf("\n %d!=%d", no1, ans);

    return 0;
}

//2. function defination
// n is formal argument
int factorial(int n)
{
    int counter, fact;
    for( counter=fact=1; counter<=n; counter++)
    {
        fact*=counter; // fact=fact*counter;
    }
    return fact;
}
