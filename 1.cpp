#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el){
    vector<int>::iterator a;
    a = find(first,last,el);
    return a;
    
};



int main()
{
  vector<int> v = {1, 2, 3, 4, 5};
  vector<int>::iterator it = Find(v.begin(), v.end(), 2);
}
