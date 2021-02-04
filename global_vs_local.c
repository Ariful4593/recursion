#include<stdio.h>
int x = 1;
void myFnc(int y)
{
    y = y * 2;
    x = x + 10;
    printf("My function, X = %d, Y = %d\n", x, y);
}
int main()
{
    int y = 5;
    x = 10;
    myFnc(y);
    printf("Main Function, X = %d, Y = %d\n", x, y);
}
