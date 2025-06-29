// Write a C Program to reverse an array. Demonstrate Pointers Skill

#include <stdio.h>

void reverseArray(int arr[], int size)
{
        int *leftPointer = arr;
        int *rightPointer = arr + size - 1;

        while(rightPointer - leftPointer >= 0){
                int temp = *leftPointer;
                *leftPointer = *rightPointer;
                *rightPointer = temp;
                leftPointer += 1;
                rightPointer -= 1;
        }
}

void printArray(int *arr, int size)
{
        printf("[ ");
        for(int i = 0; i < (size - 1); i++){
                printf("%d, ", *(arr + i));
        }
        printf("%d ]", *(arr + size - 1));
}

int main()
{
        int size = 5;
        int arr[] = {23, 43, 9, 42, 02};
        printf("\nBefore Reversing the Array : \n");
        printArray(arr, size);
        printf("\nAfter Reversing the Array : \n");
        reverseArray(arr, size);
        printArray(arr, size);

        return 0;
}

