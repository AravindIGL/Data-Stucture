#include <stdio.h>

int main() {
    int arr[100], n, i, element;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to add at the beginning: ");
    scanf("%d", &element);

    for(i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = element;
    n++; 

    printf("Array after adding element at beginning:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
