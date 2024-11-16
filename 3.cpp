#include <iostream>
#include <string>
#include <vector>
using namespace std;
int wordsCounter(const string& str){
    int s=1;
    for(int i=0;i<str.size();++i){
        if(str[i] == ' ' || str[i] == ','|| str[i] == '.'){
            s++;
        }
    }
    return s;
};



int main()
{
  int words = wordsCounter("can you can,can");
  cout<<words;
}
