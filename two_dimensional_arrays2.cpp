#include <iostream>

using namespace std;


int main(){
int row,col;
cout<<"Rows: ";
cin>>row;
cout<<"Columns: ";
cin>>col;

int table[row][col];

for(int i{}; i< row;i++){
  for (int j{}; j<col;j++){
  cin>>table[i][j];
  }
}

for(int i{}; i< row;i++){
  for (int j{}; j<col;j++){
  cout<<table[i][j]<<" ";
  }
  cout<<endl;
}

cout<<endl;
cout<<table[0][2];

}
