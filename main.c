#include <stdio.h>

void maxElement(int num, char array[])
{
    int max;
    max = array[0];
    for(int i=0;i<num;i++)
    {
        if(max<array[i])
            max = array[i];
    }
    printf("Maximum element of the Array: %d\n", max);
}

void minElement(int num, char array[])
{
    int min;
    min = array[0];
    for(int i=0;i<num;i++)
    {
        if(min>array[i])
            min = array[i];
    }
    printf("Minimum elements of the Array: %d\n", min);
}

int main()
{
    char array[50];
    int num;
    printf("How many elements does the array have?: ");
    scanf("%d", &num);

    for(int i=0;i<num;i++)
    {
        printf("Input %d.element: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\n-----------------------------------\n\n");
    maxElement(num, array);
    minElement(num, array);

    return 0;
}
