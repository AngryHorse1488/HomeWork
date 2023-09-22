#include<cmath>
using namespace std;
double toIndustrial(int time){
  return round((time/60.0)*100)/100;
}

double toIndustrial(string time){
  return toIndustrial(stoi(time.substr(0,time.find(':')))*60+stoi(time.substr(time.find(':')+1,time.size()-1)));
}
  
string toNormal(double time){
  return to_string((int)floor(time))+":"+to_string((int)round((time-trunc(time))*60));
}
