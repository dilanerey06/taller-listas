// Dilan Esteban Rey Sepulveda - 2190397
#include<iostream>

using namespace std;

struct Node{
  int value;
  struct Node *sig;
};

int main(){
  int n;
  cout << "List lenght: ";
  cin >> n;
  Node *first = new Node();
  Node *current;
  current = first;
  for(int i = 0; i < n; i++){
    cout<<"Element #"<<i+1<<":";
    cin>>current->value;
    if( i == n-1 ){
      current->sig = NULL;
      break;
    }
    Node *newNode = new Node();
    current->sig = newNode;
    current = newNode;
  }
  Node *aux = first;
  for(int j = 0; j < n; j++){
    cout<<"List element #"<<j+1<<": "<<aux->value<<endl;
    aux = aux->sig;
  }  
  return 0;
}