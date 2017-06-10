#include "Basic_int_stack.h"
#include<iostream>
using namespace std;

Basic_int_stack::Basic_int_stack(){
    top_index = -1; // top_index == -1 indicates the stack is empty.
}

void Basic_int_stack::push( int item ){
    top_index = top_index + 1;
    A[top_index] = item ;
}

int Basic_int_stack::top(){
    return A[top_index];
}

int Basic_int_stack::pop(){
    top_index = top_index - 1 ;
    return A[ top_index + 1 ];
}

bool Basic_int_stack::empty(){
    return top_index == -1 ;
}

int Basic_int_stack::size(){
    return top_index;
}

