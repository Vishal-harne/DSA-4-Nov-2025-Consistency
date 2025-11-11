#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
  //start from last which is outer loop
   for(int i=n-1;i>=0;i--){
     //leave empty spaces 
       for(int j=0;j<(n-i-1);j++){
           cout<<" ";
       }
     //enter required stars
       for(int j=0;j<(2*i+1);j++){
           cout<<" *";
       }
     //print empty spaces
       for(int j=0;j<(n-i-1);j++){
           cout<<" ";
       }cout<<endl;
   }

    return 0;
}
