
class Basic_int_stack
{
  public:
    Basic_int_stack(); // constructor
    void push( int item );
    int pop();
    int top();
    bool empty();
    int size();

  private:
    static const int capacity = 10 ; // the array size
    int A[capacity] ; // the array.
    int top_index ; // this will index the top of the stack in the array
    
};
