#include <stdio.h>

int main()
{
    int x, temp, r, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &x);

    temp = x;

    while(temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    if(x == sum)
        printf("Palindrome number");
    else
        printf("Not palindrome number");

}

