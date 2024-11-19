#include <stdio.h>

int divisibility(int a, int b);

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    divisibility(a,b);
}

int divisibility(int a, int b)
{
    if (a%b==0){
        printf("First number divisible by the second one.");
        return 1;
    }

    else {
        printf("First number is not divisible by the second one.");
        return 0;
    }
}