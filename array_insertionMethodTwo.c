/* WAP to create an array then insert an element at any position of given array */

#include<stdio.h>

int insert(int arr[], int a, int loc, int item );
int display( int arr[], int a);

int main()
{
    int arr[100];
    int n, loc, item ;

    printf("Enter size of array : ");
    scanf("%d",&n);

    printf("Enter elements for array : ");
    for( int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter location where you want to insert the element ( as per index no. ) : ");
    scanf("%d",&loc);

    printf("Enter element which you want to insert : ");
    scanf("%d",&item);

   // Call the function - 
   insert(arr,n,loc,item);
   printf("\n ---Done--- ");
    return 0;
}

// Function Definition -

int insert(int arr[], int n, int loc, int item )
{
    int j=n;
    while (j>loc)
    {
        arr[j] = arr[j-1];
        j-- ;
    }
    arr[loc] = item ;

    // Call function to print the array 
    display(arr,n);
 
}

// Function for diaplay the array 
int display( int arr[], int a)
{
    // print the array -
    printf("\nNew array :\n");

    for(int i=0; i<a+1; i++)
{
    printf("%d ",arr[i]);
}
   
}