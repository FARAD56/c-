#include <iostream>

using namespace std;

float mode(float a[],const int len){
float mValue{};
int mCount{};

for(int i {}; i < len ; i++){
    int Count{};
    for(int j{}; j < len; j++){
        if (a[j] == a[i])
            Count++;
    }
    if(Count > mCount){
        mCount = Count;
        mValue = a[i];
    }
    else if (mCount == 1)
        mValue = -1;
}
cout<<"The mode is "<< mValue;
}

void mysort(float a[], int len){
    for(int i=1; i < len; i++){
        for (int j{}; j < len-i; j++){
            if (a[j]<a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
if (len%2 == 0){
    double median = (a[(len/2)]+ a[(len/2)-1])/2;
    cout<<endl;
    cout<<"The median of the Array is "<<median<<endl;
}

else{
    double median = a[(len-1)/2];
     cout<<endl;
    cout<<"The median of the Array is "<<median<<endl;
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

 int maxnum = numbers[0];
 for (int i{};i<len ; i++){
    if (maxnum < numbers[i]){
        maxnum = numbers[i];
    }
 }
 cout <<endl;
cout<< "largest number = "<<maxnum<<endl;


int num = numbers[0];
for (int i = 0 ; i < 10 ; i++){
    num += numbers[i];
}
cout <<"The mean of the Array is "<<num/len<<endl;

mode(numbers,len);

}
