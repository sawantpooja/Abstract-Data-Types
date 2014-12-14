#include <vector>
using namespace std;

template <typename data> class Array
{
  public:
    vector<data> arr;
    
    void Insert(data value);
    void Delete(data value);
    
};

template <typename data> class SortedArray : Array
{
	private:
		int BinarySearch(data value);
};
