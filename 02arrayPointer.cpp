#include<iostream>
using namespace std;

int main(){
    int arr[10]={12,34,23};
    cout<<arr[0]<<endl; //12
    cout<<arr<<endl; //address
    cout<<&arr[0]<<endl; //address
    int *ptr=&arr[0];
    cout<<ptr<<endl; //address
    cout<<*ptr<<endl; //12
    return 0;
}