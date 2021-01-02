#include <vector>
#include <iostream>

using namespace std;

void printLeader(vector<int> &arr, int n){
    int max = arr[n-1];
    cout<<max<<" ";
    for(int i = n-2; i >= 0; i--) {
        if(arr[i] > max){
            max = arr[i];
            cout<<max<<" ";
        }
    }
}

int main(){
    vector<int> arr{2,3,10,6,4,8,1};
    printLeader(arr, arr.size());
    return 0;
}