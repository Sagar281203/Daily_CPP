
#include <iostream>
using namespace std;


void printArray(int arr[], int n){
    for(int i = 0; i <n; i++)
    cout << arr[i] << " ";
}

int findUnique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans^arr[i];
    }
 return ans;
}

int main(){
    int odd[7] = {1,2,1,2,3,6,3};
    
    findUnique(odd, 7);
    /*printArray(odd, 7);*/
}
