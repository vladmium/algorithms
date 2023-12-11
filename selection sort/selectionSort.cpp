#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of your array: ";
    cin >> n;
    vector<int> arr;
    for(int i = 1; i < n + 1; i++){
        if(i == 1) cout << "Enter 1st element: ";
        else if(i == 2) cout << "Enter 2nd element: "; 
        else if(i == 3) cout << "Enter 3rd element: ";
        else cout << "Enter "<< i <<"th element: ";
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    vector<int> ans;
    int mini_j = 0;
    for(int i = 0; i < n; i++){
        int mini = 1000000000;
        for(int j = 0; j < n; j++){
            if(mini > arr[j]){
                mini = arr[j];
                mini_j = j;
            }
        }
        ans.push_back(mini);
        arr[mini_j] = 1000000000;
    }
    for(int i =0; i < n; i++){
        if(i == 0) cout << "Sorted array: " << "[";
        if(i>=0 && i<=n-2) cout << ans[i] <<", ";
        if(i==n-1) cout << ans[i] << "]" << endl; 
    }
    return 0;
}