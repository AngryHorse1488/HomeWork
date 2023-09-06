#include <string>
using namespace std;
int square_digits(int n) {
  
  string s=to_string(n),a;
  for(char c: s){
    int i=c-'0';
    a+=to_string(i * i);    
  }
  return stoi(a);
}
