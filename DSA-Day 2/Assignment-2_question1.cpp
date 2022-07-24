#include<iostream>
using namespace std;

void sum(int n){

    if(n==0)
        return;
    else{
      sum(n-1);
        cout<<n;
    }
}

int main(){
    int n;
    cin>>n;
    int res;
    res = sum(n);
}
//In this case it will give output
//output - error: void value not ignored as it ought to be
  //   res = sum(n);

//if we inittialize thhe value in the function like sum(3) then it will give output like 123;