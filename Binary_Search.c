/* WAP to create a array and search an element through Binary search */

#include<stdio.h>

// Function Decleartion -
int binary_search( int arr[], int n, int element );


// Main Function -
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

       // Function Calling - 
       int index =  binary_search( arr,n,element );
       printf("\n%d Present at index %d",element,index);



    return 0;
}
// Function Definition 
int binary_search( int arr[], int n, int element )
{
    printf("Given array is : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    // Linear Search -- 

    int mid,low,high;
    low = 0;
    high = n-1;

  while(low<=high)
  {
    mid = ( low + high )/2 ;
    if(arr[mid] == element)
    {
        return mid; 
    }
    if (arr[mid]<element)
    {
        low = mid+1 ;
    }
    else
    {
        high = mid-1 ;
    }

  }
  return -1;
}
