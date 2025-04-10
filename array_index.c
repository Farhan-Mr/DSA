/* WAP to print the index number with their element */

#include<stdio.h>
int main (){

    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements for array :");
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

    printf("\nGiven array is : \n");    
        for(int i=0; i<n; i++)
        {
            printf(" arr[%d] = %d",i,arr[i]);
            printf("\n");
        }

    return 0;
}