#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
int n;
cout<<"Enter size of arr:"<<endl;
cin>>n;
int arr[n];
int i;
int count = 0;
int result = 1;

if(n < 0) {
    cout<<"Error"<<"\n";
} else if (n < 3) {
    cout<<"Need highter number"<<"\n";
} else {
    for ( i = 0; i < n; i++){
        cout<<"Enter element of array"<<"\n";
        cin>>arr[i];
    }
    for ( i = 0; i < n; i++){
        if(arr[i] > 0) {
            count++;
            result *= arr[i];           
              if(count == 3) {
                break; 
              }     
        }
      
    } 
    if(count < 3) {
        cout<<"Need more positive numbers"<<"\n";
    }
    if(count == 3) {
        cout<<"Result"<<"\n";
    cout<<result<<"\n";
    }
}

return 0;
}