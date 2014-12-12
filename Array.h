#include <vector>
using namespace std;

template <typename data> class Array
{
  public:
    vector<data> arr;
    
    void Insert();
    void Delete();
    
};

template <typename data> class SortedArray : Array
{

};
