#include <iostream>
// #include <algorithm>
using namespace std;

// void func(int sum, int n)
// {
//     if (n < 1)
//     {
//         cout<<sum;
//         return;
//     }

//     func(sum + n, n - 1);
// }

// int main()
// {
//     int n = 5;
//     func(0, n);
// }

// recursion problems

// int func(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * func(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "Enter the value:" << endl;
//     cin >> n;
//     cout << func(n);
// }

// reverse an array problem

// int reverseArray(int arr[], int start, int end)
// {
//   if (start < end)
//   {
//     swap(arr[start], arr[end]);
//     reverseArray(arr, start + 1, end - 1);
//   }
// }

// int main()
// {
//   int n = 5;
//   int arr[n] = {18, 3, 4, 2, 1};
//   reverseArray(arr, 0, n - 1);
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
// }

//palindrome

string reverseString(string str, int start, int end)
{
  if (start < end)
  {
    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
  }
  return str;
}

int main()
{
  
  string str = "pratu";
  int n = str.size();
  string str2 = reverseString(str, 0, n - 1);
  cout<<str2<<endl;
  if(str == str2){
    cout << "Palindrome" << endl;
  }
  else{
    cout<< "Not a palindrome";
  }

}