using namespace std;


class Heap{

public:

   Heap();
   Heap(int c);
   ~Heap();
   bool empty() const {return hSize == 0;};
   int size() const { return hSize ;} ; // Current size of Heap.
   void insert( int element, int priority );
   int extractMin();
private:
   class Pair{
      public:
        int element ;
        int priority ;
   };

   Pair* A ; // Array containing heap contents.
   int hCapacity ; // Max number of elements (= size of A).
   int hSize ; // Current number of elements.

   // Repairs ordering invariant after adding leaf at A[i].
   void trickleUp(int i);

   // Repairs ordering invariant for sub-tree rooted at index i,
   //   when A[i] may be smaller than one of its children.
   void trickleDown(int i);

   // Establishes ordering invariant for entire array contents.
   void heapify(); //(Same as "make_heap" in lectures.)

   // Useful for implementing trickle up and down
   void swap(int i,int j);
};

Heap::Heap(){
   hCapacity = 100000 ;
   A = new Pair[hCapacity];
   hSize = 0 ; 
}

Heap::Heap(int c){ // New empty Heap with capacity c.
   // Complete this.
    hCapacity=c;
    A = new Pair[hCapacity];
    hSize=0;
}

// Destructor
Heap::~Heap(){
   delete[] A;
}

// Modifiers

void Heap::insert(int element, int priority){
   A[hSize].element = element;
   A[hSize].priority = priority;
   trickleUp(hSize);
   hSize ++;
}

// Repairs the heap ordering invariant after adding a new element.
// Initial call should be trickleUp(hSize-1).
void Heap::trickleUp(int i){
   // Complete this.
    if(i>0 && A[i].priority< A[(i-1)/2].priority)
    {
        swap(i,(i-1)/2);
        trickleUp((i-1)/2);
    }

}

void Heap::swap(int i, int j){
   Pair temp = A[i];
   A[i] = A[j];
   A[j] = temp ;
}

// Removes and returns the element with highest priority.
// (That is, the element associated with the minimum priority value.)
int Heap::extractMin(){
   // Complete this.
    int return_val =A[0].element;
    A[0]=A[hSize-1];
    int i=0;
    trickleDown(i);
    hSize=hSize-1;
    return return_val;
}

// Repairs the heap ordering invariant after replacing the root.
// Initial call by insert() is trickleDown(0).
// (trickleDown(i) performs the repair on the subtree rooted a A[i].)
// (heapify() calls trickleDown(i) for i from (hSize/2)-1 down to 0.)
void Heap::trickleDown(int i){
   // Complete thia.
    int temp = 2*i+1;
    if ( 2*i+1 < hSize ){
        if( 2*i+2 < hSize && A[2*i+2].priority < A[2*i+1].priority ){
            temp = 2*i+2;
        }
        if( A[i].priority > A[temp].priority ){
            swap (i,temp);
            trickleDown( temp);
        }
    }
}

// Turns A[0] .. A[size-1] into a heap.
void Heap::heapify(){
   for( int i = (hSize/2)-1; i>=0 ; i-- ) trickleDown(i);  
}


