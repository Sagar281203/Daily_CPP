#include <iostream>
using namespace std;



pair<long long, long long> getMinMax(long long a[], int n) {
    long long int min=a[0];
    long long int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
        if(a[i]>max)
        max=a[i];
    }
    return {min,max};
}

void printArray(int arr[],int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}


int main(){
    int number[4]= {45,66,22,99};
    getMinMax(nuwsmber, 4);
    printArray(number, 4);
    
}