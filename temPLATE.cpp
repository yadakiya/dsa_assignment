#include<iostream>
using namespace std ;
template <typename T>
T getsmall(T A , T B) {  
  return  (A < B) ?  A : B ;
}
int main (){
cout << "the smallest number  from 30 and 40  is :  "    <<getsmall  (30,40) << endl;
 return 0;
}