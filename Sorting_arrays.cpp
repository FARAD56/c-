#include <iostream>

using namespace std;

void mysort(int Array[], int len){
int a,b,c;
for(a = 1; a < len; a++){
    for (b = 0; b<len-a; b++){
        if (Array[b] > Array[b+1]){
            c = Array[b];
            Array[b] = Array[b + 1];
            Array[b + 1] = c;
        }
    }
}
 double median = (Array[4]+Array[5]) / 2.0;
 cout<<"The median of the Array is "<<median<<endl;
}


int main(){
int sortA[10]={56,34,45,75,212,54,76,67,43,90};

int num = sortA[0];
for (int i = 0 ; i < 10 ; i++){
    num += sortA[i];
}
cout <<"The mean of the Array is "<<num/10<<endl;

mysort(sortA,10);


for (int i = 0; i< 10; i++){
    cout<< sortA[i]<<" ";

}

int maxnum = sortA[0];

for(int i = 0; i < 10 ; i++){
    if(sortA[i] > maxnum){
        maxnum = sortA[i];
    }

}
cout <<endl;
cout<< "largest number = "<<maxnum;
//cout<<"The largest number in the array is "<< sortA[i]<< endl;
}
