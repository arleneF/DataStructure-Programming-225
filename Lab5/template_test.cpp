#include "Seq.h"
#include <iostream>
using namespace std;

int main() {
   cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
    cout<<"first sequence is for int"<<endl;
    cout<<"here we add ints: 1 2 3 4 5"<<endl;
    Seq <int> s;
   s.add(1);
   s.add(2);
    s.add(3);
    s.add(4);
    s.add(5);
    s.display();
    cout<<"then insert int 10 at position 3"<<endl;
    s.insertAt(10,3);
    s.display();
    cout<<"finally remove 4"<<endl;
    s.remove(4);
   s.display();
    cout<<endl<<endl;
    
    
    cout<<"second sequence is for string"<<endl;
    cout<<"here we add strings: a b c d e"<<endl;
    Seq <string> A;
    A.add("a");
    A.add("b");
    A.add("c");
    A.add("d");
    A.add("e");
    A.display();
    cout<<"then insert string z at position 3"<<endl;
    A.insertAt("z",3);
    A.display();
    cout<<"finally remove d"<<endl;
    A.remove("d");
    A.display();
    cout<<endl<<endl;

    
    
    cout<<"third sequence is for double"<<endl;
    cout<<"here we add doubles: 1.11 2.22 3.33 4.44 5.55"<<endl;
    Seq <double> B;
    B.add(1.11);
    B.add(2.22);
    B.add(3.33);
    B.add(4.44);
    B.add(5.55);
    B.display();
    cout<<"then insert double 10.1010 at position 3"<<endl;
    B.insertAt(10.1010,3);
    B.display();
    cout<<"finally remove 4.44"<<endl;
    B.remove(4.44);
    B.display();
    cout<<endl<<endl;

   return 0;
}