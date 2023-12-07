#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

void reverseArray(int arr[], int n){
    
    int start = 0;
    int end = n - 1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    
    int numbers[5] = {4,5,3,2,1};
    
    printArray(numbers, 5);
    
    reverseArray(numbers, 5);
    
    printArray(numbers, 5);
}
