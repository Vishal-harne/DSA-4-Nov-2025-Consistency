// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Please Enter the value of N ";
  cin>>n;
  for(int i=1;i<=(n);i++){
      int j=1;
      for(;j<=(n-i);j++){
          cout<<" "<<" ";
      }
      int k=j;
      while(j<(k+(2*i-1))){
          cout<<"*"<<" ";
          j++;
      }cout<<endl;
  }
  
    return 0;
}
