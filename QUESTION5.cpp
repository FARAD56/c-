#include <iostream>

using namespace std;

void filter(int arr[], int len){
int num ;
cout << "Enter the filter number: ";
cin>>num;
int Count{};

for(int i {}; i< len ; i++){
    if (arr[i] >= num){
        Count++;
    }
}

int arr1[Count];
int newIndex{};
for (int i {}; i < len ; i++){
    if (arr[i] >= num ){
        arr1[newIndex]= arr[i];
        newIndex++;
    }
}

cout<<endl;
cout<<"The members of the new array are: ";
for(int i{}; i < Count ; i++){
    cout<<arr1[i]<<" ";
}
}

int main(){

int len;
cout<<"Enter the size of the array: ";
cin>>len;

int arr[len];
cout<<"Enter the members of the array: ";
for(int i{}; i<len ; i++){
    cin>> arr[i];
}

filter(arr,len);


}
