#include <iostream>
#include <vector>

using namespace std;

void reverseArr(vector<int> &arr, int low, int high){
    while(low<high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void leftRotate(vector<int> &arr, int n, int d){
    reverseArr(arr, 0, d-1);
    reverseArr(arr, d, n-1);
    reverseArr(arr, 0, n-1);
}

int main(){
    vector<int> a;
    int n;
    int d;

    cin>>n;
    cin>>d;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    leftRotate(a, n, d);
    for(int i: a){
        cout<<i<<" ";
    }
    return 0;
}