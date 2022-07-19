#include <iostream>

using namespace std;

void mysort(float a[], int len){
for(int i = 1; i < len; i++){
    int minm = i;
    for(int j = i + 1; j<len; j++){
        if(a[j]<a[minm]){
            minm = j;
        }
    }
    if (minm != i){
        int temp = a[minm];
        a[minm]= a[i];
        a[i] = temp;
    }

}
}

int main(){
    int len;
    cout<<"Enter the number of items to be sorted: ";
    cin>>len;
 float numbers[len];
 cout<<"Enter "<<len<<" numbers in any order: ";
 for(int i{}; i < len ; i++){
    cin>>numbers[i];
 }
 cout<<"Before sorting"<<endl;
 for(int i{}; i < len ; i++){
    cout<<numbers[i]<<" ";
 }

mysort(numbers,len);
cout<<endl;
cout<<"After sorting"<<endl;
 for(int i{}; i < len ; i++){
    cout<<numbers[i]<<" ";
 }
}
