#include <iostream>

using namespace std;

void sum(int arr[], int len){
    int Sum{};
for(int i{}; i< len ; i++){
    Sum +=  arr[i];
}

cout<<"Sum of the array is: "<< Sum <<endl;

}

void lrg(int arr[], int len){
int lag{};
for(int i{}; i< len ; i++){
    if (arr[i]> lag)
        lag = arr[i];
}
cout<<"The largest number in the array is: "<<lag;
}

void mult(int arr[], int len){
int num;
cout << "\nEnter the factor for the multiplication: ";
cin>>num;

for (int i{};i<len ; i++){
    arr[i] = arr[i] * num;
}

cout <<"The multiplied values are: ";
for(int i{}; i<len ; i++){
    cout<<arr[i]<<" ";
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

sum(arr,len);
lrg(arr,len);
mult(arr,len);

}



