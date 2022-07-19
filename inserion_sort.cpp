#include <iostream>

using namespace std;

void insertion(int arr[],int len){
    int key,j{};
for(int i=1; i < len ; i++){
    key = arr[i];
    j = i - 1;
    while(j >= 0 && arr[j] > key){
        arr[j + 1] = arr[j];
        j = j -1;
    }
    arr[j + 1] = key;
}

}

int main(){
    int len;
    cout <<"Enter the array length: ";
    cin>>len;
int arr[len];
cout<<"Enter the array members: ";
for (int i{}; i< len; i++){
    cin>>arr[i];
}

for (int i{}; i< len; i++){
    cout<<arr[i];
}
cout<<endl;
insertion(arr,len);

for (int i{}; i< len; i++){
    cout<<arr[i];
}


}
