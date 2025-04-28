/* WAP to Create an array and search a element inside the array through Linear Search */

#include<stdio.h>

// Function decleration --
int linear_search( int arr[], int n, int element );

int main(){

    int n;
    printf("Enter size of array ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements for array : \n");
       for(int i=0; i<n; i++)
       {
        scanf("%d",&arr[i]);
       }
       int element;
       printf("Enter number which you want to search inside the array : ");
       scanf("%d",&element);

       int index = linear_search(arr,n,element);

       printf("\n%d Present at index %d",element,index);

       // Function calling - 
    return 0;
}

// Function Definition 
int linear_search( int arr[], int n, int element )
{
    printf("Given array is : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    // Search Element --
    for(int i=0; i<n; i++)
    {
        if(arr[i] == element)
        {
            return i;         // Because, print from main function thats why we retun index number 
        }
    }
}