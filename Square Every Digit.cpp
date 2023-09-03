#include <string>
using namespace std;

int square_digits(int n) {
  int d,s; 
  string r="";
  while (n > 0) {
        d = n % 10;
        s = d*d;    
        n /= 10; 
    r.append(to_string(s));  
    }
  reverse(r.begin(), r.end());
  return stoi(r);
}
