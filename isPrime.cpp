#include<iostream>
using namespace std;

bool isPrime(int n){

    if(n<=1)
    return false;

    for(int i = 2; i<n; i++){
        while(n%i==0){
            return false;
        } 
        return true;
    }


}

int main(){

    int n;
    cin >> n;

    if(isPrime(n)){
       cout<<"It is prime"<<endl;
    }
    else{
        cout << "It is not Prime"<<endl;
    }

    return 0;

}