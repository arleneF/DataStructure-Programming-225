#include "queue.h"
#include <iostream>
using namespace std;

Queue::Queue(){    //default constructor
  front_p = NULL;
  back_p = NULL;
  current_size = 0 ;
} 


Queue ::Queue( const Queue& q ){// Copy constructor.
	if (q.front_p != NULL) {
        node *p1 = q.front_p;
        node *p2;
        node *headNode = new node(p1->data, NULL);
        p1 = p1->next;
        bool firstCount = false;
        while (p1 != NULL) {
            node *n1 = new node(p1->data, NULL);
            if (!firstCount) {
                headNode->next = n1;
                firstCount = true;
                p2 = n1;
            }
            else {
                p2->next = n1;
                p2 = p2->next;
            }
            p1 = p1->next;
        }
        p1 = NULL;
        p2 = NULL;
    }
}

    
Queue ::~Queue(){ // Destructor.
   	node* ptr= front_p;
	node* temp;
	while(ptr!=NULL)
	{
		temp=ptr->next;
		delete ptr;
		ptr=temp;
        }
}


void Queue::enqueue( int item ){
	node *newNode=new node(item, NULL);
    if (empty()){
        front_p=newNode;
        back_p=newNode;
    }
    else{
        back_p->next=newNode;
        back_p=newNode;
    }
    current_size++;
}
	

int Queue::dequeue(){
    node * temp;
	temp=front_p;
    int val=front_p->data;
	front_p=front_p->next;
	delete temp;
	current_size--;
    return val;
}


int Queue::front(){
    return (front_p->data);
}


bool Queue::empty(){
  return current_size == 0 ;
}


int Queue::size(){
  return current_size;
}

int Queue::makeUnique(int item){
    int sum=0;
    node *p1=front_p;
    node *p2;
    while (p1!=NULL){
        if (p1->data==item){
            sum++;
            if (sum>1){
                p2->next=p1->next;
                delete p1;
                p1=p2->next;
                if(p1==NULL)
                    back_p=p2;
                continue;
            }
        }
        p2=p1;
        p1=p1->next;
    }
    return (sum>1)?(sum-1):0;
}
