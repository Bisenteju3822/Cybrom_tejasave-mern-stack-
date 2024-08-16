#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {

public:
    void reverseString(vector<char>& s) {
        int l=0;
        int R=s.size()-1;
        while(l<R){
            swap(s[l],s[R]);
            ++l;
            --R;
        }

    }
};
void reverseit(){
    Solution reverse;
   vector<char>s1={'b','e','s','t'};
   reverse.reverseString(s1);
   for(char c:s1){
    cout<<c<<"";
   }
   cout<<endl;
   
}



