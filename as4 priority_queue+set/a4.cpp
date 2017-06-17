/*
**  a4.cpp
**  Assignment 4, CMPT-225, Spring 2015
**
**  Reads a sequence of integers (in the range of int's) from standard in;
**  It is interpreted as two lists, separated by a single 0
**/
#include <iostream>
#include <queue>
#include <set>
using namespace std;

int find(priority_queue<int> l1, set<int> l2);
int main(){
    cout<<"301256171"<<"     "<<"jfa49"<<"     "<<"Jianglin Fu"<<endl;
    //read txt file
    int x ;
    priority_queue<int> l1;
    set<int> l2;
    bool List2 = false;
    cin>>x;
    while( !cin.eof() )
    {
        if( x == 0 )
            List2 = true ;
        else
        {
            if(!List2)
                l1.push(x) ;
            else
                l2.insert(x);
        }
        cin>>x;
    }
    cout << endl ;
    cout<<find(l1,l2);
    return 0;
}

int find(priority_queue<int> l1, set<int> l2){
    int a=l1.top();
    bool found=false;
    for (set<int>::iterator it=l2.begin(); it!=l2.end() && (!L1.empty()); ++it){
        set<int>::iterator b= l2.find(a);
        if (b!=l2.end()){ //which means l2 has element a
            cout<<a<<"is poped"<<endl;  //for debug
            l1.pop();
            a=find(l1,l2);}
        else
            found=true;
    }
    if(!found){
        cout<<"NONE"<<endl;
        return 0;}
    else
        return a;
}

//
//int find(priority_queue<int> l1, set<int> l2){
//    int a=l1.top();
//    bool found=false;
//    for (set<int>::iterator it=l2.begin(); it!=l2.end(); ++it)
//    {
//        set<int>::iterator b= l2.find(a);
//        if (a!=(*b)){
//            found=true;
//            return a;}
//        else{
//            cout<<a<<"is poped"<<endl;
//            l1.pop();
//            a=find(l1,l2);}
//    }
//    if(!found)
//        cout<<"NONE"<<endl;
//    return 0;
//}





    //    //test l1
    //    while(!l1.empty()){
    //        cout<<l1.top();
    //        l1.pop();
    //    }
    //    cout<<endl;
    //    //test l2
//        for (std::set<int>::reverse_iterator it=l2.rbegin(); it!=l2.rend(); ++it)
//            std::cout << ' ' << *it;}




// access to iterator
//    set<int>::iterator a= l2.find(3);
//    cout<<(*a);
