/* WAP to delete an element of array */

#include<stdio.h>

// Function Decleration for Deletion -
void delete(int arr[], int n, int del);

// Main function -
int main()
{
    int arr[100];
    int n, del;

    printf("Enter size of array : ");
    scanf("%d",&n);

    printf("Enter elements for array : \n");
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
    
        printf("Enter index number of that element which you want to delete it : ");
        scanf("%d",&del);

        // Function calling -
        delete(arr, n, del);

    return 0;
}


void delete(int arr[], int n, int del)
{
    printf("Given array is ->  ");
    for( int i=0; i<n; i++ )
    {
        printf("%d ",arr[i]);
    }

    int j= del;
    
    // Delition Process -
    for(int i=j; i<n; i++)
    {
        arr[i] = arr[i+1] ;
    }

    printf("\nAfter deletion of given element \n");
    printf("Array is -> ");
    for(int i=0; i<n-1; i++)
    {
        printf("%d ",arr[i]);
    }

}