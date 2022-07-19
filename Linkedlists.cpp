#include <iostream>
using namespace std;


class node{
public:
int value;
node* next;
};

void printlist(node* n){
while(n!=NULL){
    cout << n->value << endl;
    n = n->next;
}
}

int main(){
node* head = new node();
node* second = new node();
node* third = new node();

head->value = 1;
head->next =second;
second->value= 2;
second->next = third;
third->value = 3;
third->next = NULL;

printlist(head);
}
