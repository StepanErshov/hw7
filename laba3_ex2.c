#include <stdio.h>
#include <stdlib.h>

void combSort(int *arr, int len)
{
    double shrink = 1.2473309;  
    int g = len;  
    int flag = 1; 

    
    while(g > 1 || flag)
    {
        
        if(g > 1)
        {
            g = (int)(g / shrink);
        }
        
        flag = 0;  
        int i = 0;
        while(i + g < len)  
        {
            if(*(arr + i) > *(arr + i + g))  
            {
                int tmp = *(arr + i);
                *(arr + i) = *(arr + i + g);
                *(arr + i + g) = tmp;
                flag = 1;  
            }
            i++; 
        }
    }
}

int main()
{
    int arr[] = {10, 5, 8, 20, 2, 18};  
    int len = sizeof(arr)/sizeof(arr[0]); 
    int *ptr;  
    ptr = &arr[0]; 

    combSort(ptr, len);  

    
    printf("Отсортированный массив: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}