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
    for(int i = 0; i < n; i++){
        if(i == 0) cout << "Input array: " << "[";
        if(i>=0 && i<=n-2) cout << arr[i] <<", "; 
        if(i==n-1) cout << arr[i] << "]" << endl; 
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(i == 0) cout << "Sorted array: " << "[";
        if(i>=0 && i<=n-2) cout << arr[i] <<", ";
        if(i==n-1) cout << arr[i] << "]" << endl; 
    }
    return 0;
}
