/* WAP to delete an array of element which you wnt to delete it */

#include<stdio.h>

void deletion( int arr[], int n, int del);  // Function decleration

int main ()
{

    int n,del;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements for array :\n");
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

      printf("Enter index number which you want to delete it : ");
      scanf("%d",&del);  

      // Function caling 
      deletion(arr,n,del);

    return 0;
}

// Function Definition 

void deletion( int arr[], int n, int del)
{
    int element_del = arr[del-1];

    int i = del;

    
    while(i<n-1)
    {
        arr[i] = arr[i+1];
        i++ ;
    }

    printf("Given array after deletion of element : \n");

    for(int k=0; k<n; k++)
    {
        printf("\narr[%d] = %d",k,arr[k]);
    }
}