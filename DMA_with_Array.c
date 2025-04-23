/* WAP to change the size of array with the help of DMA 
   by using ( Malloc or Calloc )*/

   #include<stdio.h>
   #include<stdlib.h>
   int main (){
 
     int n;
     printf("Enter the size of array : ");
     scanf("%d",&n);
     int arr[n];
     printf("Enter Elements for array : \n");
       for( int i=0; i<n; i++ )
       {
         scanf("%d",&arr[i]);
       }
       printf("Array is : ");
       for(int i=0; i<n; i++)
       {
         printf("%d ",arr[i]);
       }
 
       // Using DMA change the size of array - 
         int a;
         printf("\n\nEnter new size of array : ");
         scanf("%d",&a);
         int *brr;
         brr = (int*)malloc(a*sizeof(int));

         *brr = *arr;     // IMP LINE 

         printf("Enter Elements for NEW array : \n");
 
         for( int i=0; i<a; i++ )
         {
           scanf("%d",&arr[i]);
         }
   
         printf("New Array : ");
         for(int i=0; i<a; i++)
         {
           printf("%d ",arr[i]);
         }
   
     return 0;
   } 