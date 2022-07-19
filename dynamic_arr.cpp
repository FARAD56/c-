#include <iostream>

using namespace std;


int main(){
int num;
cout<<"Size : ";
cin>>num;

int *arr = new int [num];

cout<<"Enter the members of the array: ";
for(int i{}; i< num; i++){
    cin>>arr[i];
}
for(int i{}; i< num; i++){
    cout<<arr[i]<<" ";
}

}
