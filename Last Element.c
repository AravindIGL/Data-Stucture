#include <stdio.h>

int main() {
    int arr[100], n, i, element;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to add at the end: ");
    scanf("%d", &element);

    arr[n] = element;
    n++; 

    printf("Array after adding element at the end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
