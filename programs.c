#include<stdio.h>
#include"array.h"
// linked my header file using "" as both are in same directory.

int main()
{
   int arr[10];
   
   //performing array functions on the above array
   inputarray(arr,10);
   sort(arr,10);
   search(arr,10,1);
   revereseArray(arr,10);


    return 0;
}
