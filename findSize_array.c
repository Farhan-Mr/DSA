/* WAP to find size of an array */
#include <stdio.h>

int main() {
    
    int arr[] = {1,2,3,4,5,6,7,8,9,44,55,66,44,78,11,22,33,77,555,44};
    
    int size = sizeof(arr)/sizeof(int);      // Imp line (calculation)
    
    printf("Size of array is : %d",size);

    return 0;
}