#include<iostream>
using namespace std;
int main()
{
int i;
int j;
int l;
int len;
int len2;
int arr[20];
int arr2[20];
int array2[40];
int flag;
cout<<"Please enter the size of first array: ";
cin>>len;
cout<<"Please enter the values of first array in ascending order: "<<endl;
for(i=0;i<len;++i){
cin>>arr[i];
}
cout<<endl<<"Please enter the size of second array: ";
cin>>len2;
cout<<"Please enter the values of second array in ascending order: "<<endl;
for(i=0;i<len2;++i){
cin>>arr2[i];
}
l=0;
for(i=0;i<len;++i){
array2[l]=arr[i];
l++;
}
for(i=0;i<len2;++i){
flag=1;
for(j=0;j<len;++j){
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
for(i=0;i<l;++i){
cout<<array2[i]<<" ";
}
return 0;
}




return 0;
