#include <stdio.h>
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size);

int main() {
    int a = 1, b = 2, c = 3;
    printf("Before swap function : a= %d, b=%d, c=%d\n", a, b, c);
    swapValue(&a, &b, &c);
    printf("After swap function : a=%d, b=%d, c=%d\n", a, b, c);
    int size = 4;
    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {99, 88, 77, 66};    
    printf("Before arr1[0]: %d, arr2[0]: %d\n", arr1[0], arr2[0]);
    swapArray(arr1, arr2, size);
    printf("After arr1[0]: %d, arr2[0]: %d\n", arr1[0], arr2[0]);
    return 0;
}
void swapValue(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
void swapArray(int a[], int b[], int size) {
    int temp;
    for(int i = 0; i < size; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
