#include <iostream>
#include<array>
using namespace std;
int main() {
  array<int,4> a= {1,2,4,5};
  cout<<"Size of array a is : "<<a.size()<<endl;
  for(int i = 0 ; i < a.size() ; i++){
      cout<<a[i]<<endl;
  }
  cout<<"EMpty or not "<<a.empty()<<endl;
  cout<<"ELement at position " <<a.at(2)<<endl;
  cout<<"The first element is : "<<a.front()<<endl;
  cout<<"The last element is : "<<a.back()<<endl;
  return 0;
}