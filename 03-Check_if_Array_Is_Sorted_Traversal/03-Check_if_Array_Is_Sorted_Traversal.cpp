// Input:
// 5
// 10 20 30 40 50
// Output:
// Array is sorted
// Another Input:
// 5
// 10 30 20 40 50
// Output:
// Array is not sorted

#include<iostream>
using namespace std;
class solution{
    public:
    bool check(int arr[], int n){
        for(int i =1;i<n; i++){
            if(arr[i-1] > arr[i]) return false;
        }
        return true;
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
    cout<<(sol.check(arr,n)?"Array is sorted":"Array is not sorted");
    return 0;
}