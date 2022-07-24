#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int i = 0, j = 0, k = 0;
    while (i < n) {
       
        // for spacing
        while (k <= n - i - 2) {
            cout << " ";
            k++;
        }
        k = 0;
       
          // For Pattern printing
        while (j < 2 * i - 1) {
            cout << "*";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
    return 0;
}