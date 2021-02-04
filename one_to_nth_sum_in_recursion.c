#include<stdio.h>
int nthSum(n)
{
    if(n==0){
        return 0;
    }
    return n + nthSum(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("sum of %d is %d\n", n, nthSum(n));
}
