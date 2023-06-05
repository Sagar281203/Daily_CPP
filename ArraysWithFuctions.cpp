#include <iostream>
using namespace std;
void printArray(int arr[], int size){
    
    cout << "Printing the Array" << endl;
   for(int i=0; i<size; i++){
       cout << arr[i] << " ";
   }
}
int main() {
    int first[15] = {3,4,4,5,6,6};
    int n =15;
    printArray(first,15);
    
        int second[4] = {0};
     n =4;
    printArray(second,4);
    
        int third[8] = {4,4,32,5,5,53,2,2};
   n =8;
    printArray(third,8);
}