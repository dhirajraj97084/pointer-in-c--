#include<iostream>
using namespace std;

int main(){
    // int arr[10]={12,34,23};
    // cout<<arr[0]<<endl; //12
    // cout<<arr<<endl; //address
    // cout<<&arr[0]<<endl; //address
    // int *ptr=&arr[0];
    // cout<<ptr<<endl; //address
    // cout<<*ptr<<endl; //12
    int temp[5]={3,4,6,8,1};
    // cout<<temp[0]<<endl; //3
    // cout<<temp<<endl;
    // cout<<&temp[0]<<endl;
    // cout<<&temp[1]<<endl;
    // cout<<sizeof(temp)<<endl;//20
    // cout<<sizeof(&temp)<<endl;//8
    // cout<<sizeof(&temp[0])<<endl;//8
    // cout<<sizeof(temp[0])<<endl; //4
    // int *ptr=&temp[0];
    // cout<<*ptr<<endl;
    // cout<<sizeof(*ptr)<<endl;

    int arr[5]={3,5,7,1,0};
    int *ptr=&arr[0];
    cout<<*ptr<<endl; //3
    cout<<*ptr+2<<endl; //3+2=5
    cout<<*ptr+10<<endl;  //3+10=13
    cout<<*(ptr)+2<<endl; //3+2=5
    cout<<*(ptr+2)+10<<endl; //(0+2)location=7+10=17
    return 0;
}