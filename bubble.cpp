#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n-1; i++)
    {
        swapped = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        
        if (!swapped)
            break;
    }
    return
}

int main(){
    int arr[10] = {2,6,4,96,87,53,14};
    int n=10;
    


}