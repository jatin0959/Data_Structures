#include <iostream>
#include <vector>
using namespace std;

void bubble(int array[],int n){
    for (int i = 0; i < n-1; i++)
    { 
        for (int j = 0; j < n-1; j++)
        {
            if (array[j]>array[j+1])
        {
            swap(array[j],array[j+1]);
        }
        
        }
        
       
    }
    
}
 
 void selection(int array[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < j; j++)
        {
            if (array[j]<array[i])
            {
                swap(array[j],array[i]);
            }
            
        }
        
    }
    
 }

void insertionSort(int array[], int n) {
    for (int i = 1; i < n; i++) {
        int key = array[i]; // Store the current element
        int j = i - 1;
        
        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}




int main(){
int arr[10]={2,41,5,54,2,30,1};
int n=7;
insertionSort(arr,n);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}
