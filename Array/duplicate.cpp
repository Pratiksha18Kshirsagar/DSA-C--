#include<iostream>
#include<vector>
using namespace std;

 int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        if(nums.empty()) return 0;
        vector<int>arr;
         arr.push_back(nums[0]);
        for(int i = 1 ; i < n ; i++){
            if(nums[i]!=nums[i-1]){
                arr.push_back(nums[i]);
            }
        }
        for (int i = 0; i < arr.size(); i++)
        {
            cout<<arr[i] <<endl;
        }
        
      return arr.size();
    }
int main(){
    vector<int>nums ={1, 2, 3, 4, 5};
   cout<< removeDuplicates(nums);

}
