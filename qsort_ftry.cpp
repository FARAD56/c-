#include <iostream>
using namespace std;

int part(int arr[], int s , int e){
int pivot = arr[e];
int pindex = s;

for(int i = s; i < e ; i++){
if (arr[i]< pivot){
int temp = arr[i];
arr[i] = arr[pindex];
arr[pindex] = temp;
pindex++;
}
}
int temp = arr[e];
arr[e] = arr[pindex];
arr[pindex] = temp;

return pindex;
}

void qsort(int arr[],int s, int e){
if (s<e){
int p = part(arr,s,e);
qsort(arr,p+1,e);
qsort(arr,s,p-1);
}
}


int main(){

int arr[5]={7,9,4,3,6};

qsort(arr,0,4);

for(int i =0; i < 5;i++){
    cout<<arr[i]<<" ";
}
}
