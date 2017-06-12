//edited by Jianglin Fu(Arlene). student Id: 888  login ID: 888
#include <iostream>
#include "heap.h"
#include "queue.h"

using namespace std;

int main(){
    cout<<"888      888        Jianglin Fu"<<endl;
    //read txt file
    int x ;
    Heap l1;
    queue l2;
    bool List2 = false;
    cin>>x;
    while( !cin.eof() )
    {
        if( x == 0 )
            List2 = true ;
        else
        {
            if(!List2)
                l1.insert(x,x) ;
            else
                l2.enqueue(x);
        }
        cin>>x;
    }
    cout<<endl;
    bool exists =false;
    int maxVal=0;
    while( !l1.empty() )
    {
        int a=l1.extractMin();
        bool found =false;
        int i=0;
        while( (!found) && i < l2.size() )
        {
            i++;
            int b = l2.dequeue();
            if( b == a )
                found = true ;
            l2.enqueue(b);
        }
        if( !found )
        {
            exists = true;
            maxVal = max(maxVal,a);
        }
    }
    if( exists )
        cout<<maxVal<<endl;
    else
        cout<<"NONE"<<endl;
}
