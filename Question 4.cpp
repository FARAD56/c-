#include <iostream>

using namespace std;

void add(int arr[],int arr2[], int len, int len2){
int leng = len + len2;
int arr1[leng];
for(int i{}; i< leng - len2 ; i++){
    arr1[i]= arr[i];
}

for(int i = len; i < leng ; i++)
{
    arr1[i] = arr2[i - len];
}

cout<<"\n"<<endl;
cout << "The members of the Concantenated array are: ";
for(int i{}; i<leng ; i++){
    cout << arr1[i]<< " ";

}

}


int main(){

int len;
cout<<"Enter the size of the first array: ";
cin>>len;

int arr[len];
cout<<"Enter the members of the first array: ";
for(int i{}; i<len ; i++){
    cin>> arr[i];
}
cout << "The members of the first array are: ";
for(int i{}; i<len ; i++){
    cout << arr[i]<< " ";
}

cout<< "\n" <<endl;


int len2;
cout<<"Enter the size of the second array: ";
cin>>len2;

int arr2[len2];
cout<<"Enter the members of the second array: ";
for(int i{}; i<len2 ; i++){
    cin>> arr2[i];
}
cout << "The members of the second array are: ";
for(int i{}; i<len2 ; i++){
    cout << arr2[i]<< " ";
}

add(arr,arr2,len,len2);
}

