#include<stdio.h>
void main()
{
    int arr[100];
    int size, element, position;


    printf("Enter the size of the array: ");
    scanf("%d", &size);


    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter the element to insert: ");
    scanf("%d", &element);


    printf("Enter the position to insert (0-based indexing): ");
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position. Element cannot be inserted.\n");
    } else {

        for (int i = size; i > position; i--) {
            arr[i] = arr[i - 1];
        }


        arr[position] = element;
        size++;


        printf("Element %d inserted at position %d.\n", element, position);
        printf("Updated array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }


}



