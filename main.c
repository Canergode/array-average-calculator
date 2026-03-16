#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float numbers[100],average,total=0.0;

    // Get array size from user(must be between 1 and 99)
    printf("How many numbers will you enter:\n");
    scanf("%d",&n);

    // Validate input
    while(n>=100 || n<=0)
    {
        printf("How many numbers will you enter:\n");
        scanf("%d",&n);
    }

    // Get array elements from user
    for(i=0;i<n;i++)
    {
        printf("%d.number:",i+1);
        scanf("%f",&numbers[i]);
        total+=numbers[i];
    }

    // Calculate and print average
    average=total/n;
    printf("Average:%.2f",average);
    return 0;
}
