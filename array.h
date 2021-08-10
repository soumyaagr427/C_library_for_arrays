
// function to input elements in array
void inputarray(int arr, int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
}




// function to sort array (insertion)
void Sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

 // to search in array (linear)
 int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
 //binary search in array
 int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
       
        if (arr[mid] == x)
            return mid;
  
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
  
        
        return binarySearch(arr, mid + 1, r, x);
    }
  
  
    return -1;
}


// to reverse an array
void revereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }  
}    

// to rotate array one by one
void rotate(int arr[], int n)
{
   int x = arr[n-1], i;
   for (i = n-1; i > 0; i--)
      arr[i] = arr[i-1];
   arr[0] = x;
}