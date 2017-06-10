#include <iostream>   // for I/O facilities
#include "Basic_int_stack.h" //  basic_int_stack declarations
using namespace std;


int main(){
    cout<<"jianglin fu"<<endl;
    cout<<"888"<<endl;
    cout<<"888"<<endl;
    Basic_int_stack s;
    cout<<"type positive integers from the keyboard";
    int num;
    int sum=0;
    for(;num>=0;){
        cin>>num;
        s.push(num);
        sum=sum+num;
    }
    cout<<endl;
    cout<<"the length of sequence is"<<s.size()<<endl;
    
    
    cout<<"the sum of the values in the sequence is "<<sum-s.top()<<endl;
    cout<<endl;
    cout<<"below is the reverse of the suquence you just typed before"<<endl;
    s.pop();
    while(! s.empty()){
        cout<<s.pop()<<endl;
    }
    cout<<"goodbye"<<endl;
}


