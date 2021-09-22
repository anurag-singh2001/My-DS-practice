int MinHeap::extractMin() 
{
    // Your code here
    if(heap_size<=0)
    {   
        return -1;
    }
    if(heap_size==1)
    {
        
        heap_size--;
        return harr[0];
    }
    int root=harr[0];
    harr[0]=harr[heap_size-1];
    heap_size--;
    MinHeapify(0);
    return root;
}

//Function to delete a key at ith index.
void MinHeap::deleteKey(int i)
{
    if(i<heap_size){
    decreaseKey(i,INT_MIN);
    extractMin();
  }
}

//Function to insert a value in Heap.
void MinHeap::insertKey(int k) 
{
    // Your code here
    heap_size++;
    int i=heap_size-1;
    harr[heap_size-1]=k;
    
    while(i!=0 && harr[parent(i)]>harr[i])
    {
        swap(harr[i],harr[parent(i)]);
        i=parent(i);
    }
}

//Function to change value at ith index and store that value at first index.
void MinHeap::decreaseKey(int i, int new_val) 
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i]) {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}

/* You may call below MinHeapify function in
   above codes. Please do not delete this code
   if you are not writing your own MinHeapify */
void MinHeap::MinHeapify(int i) 
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i]) smallest = l;
    if (r < heap_size && harr[r] < harr[smallest]) smallest = r;
    if (smallest != i) {
        swap(harr[i], harr[smallest]);
        MinHeapify(smallest);
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}