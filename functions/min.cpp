#include <iostream>
using namespace std;

void printHello()
{
    cout << "hello!!";
}

int sum(int a , int b){
int s = a+b;
return s;
}

int minNum(int a , int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    printHello();
    cout <<endl << sum(10,20) <<endl;
    cout << minNum(20,9) << endl;
    return 0;
}