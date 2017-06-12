#include<iostream>
#include<string>
using namespace std;
#include "char_stack.h"
#include<stdio.h>

void printError(int index, char*line){
    for(int i=0;i<=index;i++)
        cout<<line[i];
    cout<<endl;
    for(int i=0;i<=index;i++)
        cout<<" ";
    for (int j=index+1;j<cin.gcount();j++)
        cout<<line[j];
    cout<<endl;
    }

int main(){
char_stack S;
char c='\0';
char a[250];
int line=1;
for ( ;cin.peek()!=EOF;line++)
{
	cin.getline(a,250);
	for (int i=0;i<cin.gcount();i++)
    {
        c=a[i];
        if ( c =='{' || c=='[' || c=='(' )
            S.push( c );
        else if ( c =='}' || c==']' || c==')')
        {
            if ( S.empty() ){
                cout<<"Error on line "<<line<<":Too many"<<c<<endl;
                printError(i,a);
                return 0;
            }
            else{
                char l=S.pop();
                if (l=='{' && c!='}' ){
                    cout<<"Error on line"<<line<<" :Read"<<c<<", expected }"<<endl;
                    printError(i,a);
                    return 0;}
                else if (l=='(' && c!=')' ){
                    cout<<"Error on line"<<line<<" :Read"<<c<<", expected )"<<endl;
                    printError(i,a);
                    return 0;}
                else if (l=='[' && c!=']' ){
                    cout<<"Error on line"<<line<<" :Read"<<c<<", expected ]"<<endl;
                    printError(i,a);
                    return 0;}
            }
        }
    }
}
if ( !S.empty() ){
    c = S.pop();
    cout<<"Error on line"<<line-1<<":Too many"<<c<<endl;
    for(int i=0;a[i]!='\0';i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}
else
    cout<<"No Errors Found";
}

	
