/* File: char_stack.h       

  Header file for a very basic array-based implementation of a stack.

*/
class char_stack
{
  public:
    char_stack();       							//constructor
    void push( char item );
    char pop(); 
    char top();
    bool empty();
    int size();

  private:
    char A[250] ; // the array.
    int top_index ; // this will index the top of the stack in the array
};
