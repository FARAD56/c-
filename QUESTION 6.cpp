#include<iostream>
using namespace std;

void add(int arr[],int arr2[], int len, int len2){
    int array2[400];
int flag;
int l=0;
for(int i=0;i<len;++i){
array2[l]=arr[i];
l++;
}
for(int i=0;i<len2;++i){
flag=1;
for(int j=0;j<len;++j){
if(arr2[i]==arr[j]){
flag=0;
break;
}
}
if(flag){
array2[l]=arr2[i];
l++;
}
}
cout<<endl<<"The union of two unsorted arrays is: ";
for(int i=0;i<l;++i){
cout<<array2[i]<<" ";
}
}


int main()
{
int i;
int j;
int l;
int len;
int len2;
int arr[200];
int arr2[200];
cout<<"Please enter the size of first array: ";
cin>>len;
cout<<"Please enter the values of first array in ascending order: "<<endl;
for(i=0;i<len;++i){
cin>>arr[i];
}
cout<<endl<<"Please enter the size of second array: ";
cin>>len2;
cout<<"Please enter the values of second array in ascending order: "<<endl;
for(int i=0;i<len2;++i){
cin>>arr2[i];
}

add(arr,arr2,len,len2);
}
