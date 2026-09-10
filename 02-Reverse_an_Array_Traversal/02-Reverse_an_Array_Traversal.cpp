// Input:
// 5
// 10 25 7 42 18
// Output:
// 18 42 7 25 10

#include<iostream>
using namespace std;
class solution{
    public:
        void reverse(int arr[],int n){
            int s = 0;
            int e = n - 1;
            while(s <= e){
                int temp = arr[s];
                arr[s] = arr[e];
                arr[e] = temp;
                s++;
                e--;
            }
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
    sol.reverse(arr,n);
    cout<<"After the reverse array: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}