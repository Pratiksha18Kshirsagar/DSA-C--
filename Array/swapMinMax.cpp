#include <iostream>
using namespace std;

int minArray(int arr[] , int size){
    int minValue = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        minValue = min(arr[i] ,minValue);
    }
    for (int i = 0; i < size; i++)
    {
        if(minValue == arr[i]){
            return i;
        }
    }
}




int maxArray(int arr[] , int size){
    int maxValue = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        maxValue = max(arr[i] ,maxValue);
    }
    for (int i = 0; i < size; i++)
    {
        if(maxValue == arr[i]){
            return i;
        }
    }
}


int main(){
    int arr[] = {1,25,39,4,5};
    swap(arr[minArray(arr,5)] , arr[maxArray(arr , 5)]);
      for (int i = 0; i < 5; i++)
      {
        cout<<arr[i]<<",";
      }
      
}