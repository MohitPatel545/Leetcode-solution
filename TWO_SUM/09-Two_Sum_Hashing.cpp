// TWO SUM
// Example
// Array:
// 2 7 11 15
// Target:
// 9

#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
class solution{
    public:
        void twosum(int arr[],int n,int k){
            unordered_map<int ,int>ans;
            for(int i = 0;i<n; i++){
                int compliment = k - arr[i];
                if(ans.find(compliment) != ans.end()){
                    cout<<compliment<<" "<<arr[i]<<endl;
                }
                ans[arr[i]] = i;
            }
            // cout<<"Not found";
        }
};
int main(){
    int n,target;
    cout<<"Enter the target element: ";
    cin>>target;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the element of array: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    solution sol;
    sol.twosum(arr,n,target);

    return 0;
    
}