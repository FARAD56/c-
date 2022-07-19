#include <iostream>
using namespace std;

int main(){
    int n;
int m = 5;
int *ptr = &m;
*ptr = &n;
cout<<*ptr<<endl;
cout<<ptr<<endl;

}
