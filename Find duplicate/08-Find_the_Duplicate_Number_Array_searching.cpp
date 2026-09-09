// Question:
// Given an array containing n + 1 integers where each integer is in the range [1, n], find the duplicate number.
// Input:

// 5
// 1 3 4 2 2
// Output:
// Duplicate Number = 2

#include<iostream>
#include<map>
using namespace std;
class solution{
    public:
    int findduplicate(int arr[],int n){
        map<int,int> ans;
        for(int i =0;i<n; i++){
            ans[arr[i]]++;
        }
        for(int i = 0;i<n;i++){
            if(ans[i] > 1){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the element in an array: ";
    for(int i = 0;i<n; i++){
        cin>>arr[i];
    }

    solution sol;
    cout<<"Duplicate: "<<sol.findduplicate(arr,n);


    return 0;
}