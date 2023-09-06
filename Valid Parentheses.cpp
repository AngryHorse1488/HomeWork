using namespace std;
bool validParentheses(const string& str){
  int a = 0;
  for(char c : str)
    if((a += c == '(' ? 1 : -1) < 0)
      return 0;
      
  return !a;
}
