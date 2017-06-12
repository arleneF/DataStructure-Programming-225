/* File: queue.h       

  Header file for a very basic linked-list based dynamic Queue class.

*/

class queue
{
  public:

    queue(); // Constructs a new empty queue.
    queue( const queue& q );// Copy constructor.
    ~queue();// Destructor.
    
    void enqueue( int item ); // Enqueues <item>.
    int dequeue();  // Dequeues the front item.
    int front();  // Returns the front item without dequeuing it.
    bool empty();  // Returns true iff the queue contains no items.
    int size();  // Returns the current number of items in the queue.
  
  private:
    class node  // node type for the linked list 
    {
       public:
           node(int new_data, node * next_node ){
              data = new_data ;
              next = next_node ;
           }
           int data ;
           node * next ;
    };

    node * front_p ; // pointer to the (node containing the) next item 
              //  which to be dequeud, or NULL if the queue is empty.

    node * back_p ; // pointer to the (node containing the) last item 
              // which was enqueued, or NULL if the queue is empty.

    int current_size ; // current number of elements in the queue.
};

queue::queue(){    //default constructor
    front_p = NULL;
    back_p = NULL;
    current_size = 0 ;
}


queue ::queue( const queue& q ){// Copy constructor.
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


queue ::~queue(){ // Destructor.
   	node* ptr= front_p;
	node* temp;
	while(ptr!=NULL)
	{
		temp=ptr->next;
		delete ptr;
		ptr=temp;
    }
}


void queue::enqueue( int item ){
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


int queue::dequeue(){
    node * temp;
	temp=front_p;
    int val=front_p->data;
	front_p=front_p->next;
	delete temp;
	current_size--;
    return val;
}


int queue::front(){
    return (front_p->data);
}


bool queue::empty(){
    return current_size == 0 ;
}


int queue::size(){
    return current_size;
}

