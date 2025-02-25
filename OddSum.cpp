#include<iostream>
using namespace std;

int main(){
    int n, oddsum=0;
    cout<<"Enter a number :";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2!=0){
            oddsum +=i;
        }
    }
    cout<<"sum of odd number is:"<< oddsum<<endl;
    return 0;
}