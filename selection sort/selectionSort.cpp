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
    int index = 0;
    for(int i = 0; i < n; i++){
        int small = 1000000000;
        for(int j = i; j < n; j++){
            if(small > arr[j]){
                small = arr[j];
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for(int i =0; i < n; i++){
        if(i == 0) cout << "Sorted array: " << "[";
        if(i>=0 && i<=n-2) cout << arr[i] <<", ";
        if(i==n-1) cout << arr[i] << "]" << endl; 
    }
    return 0;
}