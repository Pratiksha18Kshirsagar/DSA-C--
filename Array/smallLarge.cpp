#include <iostream>
using namespace std;


int main(){
int arr[] = {12,23,11,45,66,79};
int size = 6;
int smallest = INT8_MAX;
int largest = INT8_MIN;

for (int i = 0; i < size; i++)
{
    smallest = min(arr[i] , smallest);
    largest = max(arr[i] , largest);
    
}

cout << "The smallest number is : " << smallest << endl ;
cout << "The largest number is : " << largest;



    return 0 ;
}