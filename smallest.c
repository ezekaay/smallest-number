#include <stdio.h>
int smallestNum(int size, int arr[]);
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter Number one by one\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("the smallest number in array is %d\n", smallestNum(size, arr));
    return 0;
}

int smallestNum(int size, int arr[]){
    int smallest = arr[0];
    for (int i  = 1; i < size; i++)
    {
        if (arr[i] < smallest) 
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

