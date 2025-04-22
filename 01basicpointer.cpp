#include<iostream>
using namespace std;

int main(){
    //create a integer type pointer
    int num=5;
    
    cout<<"address of number: "<< &num<<endl;  //it give address of num

    int *p=&num;  //pointer p store address of num ;
     
    cout<<"store valuse of adress of num:"<<*p;
}