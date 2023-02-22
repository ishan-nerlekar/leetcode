class Solution {
public:
    void max_heapify(vector<int>& arr, int i, int size_)
{
    int largest, l = (2*i) + 1, r = l + 1;

    if(l < size_ && arr[l] > arr[i])
        largest = l;
    else
        largest = i;

    if(r < size_ && arr[r] > arr[largest])
        largest = r;

    if(largest != i)
    {
        swap(arr[i], arr[largest]);
        max_heapify(arr, largest, size_);
    }
}
    
    void build_max_heap(vector<int>& arr)
{
    for(int i = (arr.size() / 2); i >= 0; i--)
    max_heapify(arr, i, arr.size());
}

void heap_sort(vector<int>& arr)
{
   build_max_heap(arr);
   int sz = arr.size();
   for(int i = arr.size() - 1; i > 0; i--)
   {
        std::swap(arr[0], arr[i]);
        sz--;
        max_heapify(arr, 0, sz);
    }
}
    
    int lastStoneWeight(vector<int>& vec) {
        heap_sort(vec);
    
    while(vec.size()>1){
		int x=vec.back();
		vec.pop_back();
		int y=vec.back();
		vec.pop_back();
		if(x>y) vec.push_back(x-y);
		
		heap_sort(vec);
	}
	int res=vec.empty()?0:vec.front();
        
        return res;
    }
};