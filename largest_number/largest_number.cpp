#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

string largest_number(vector<int> a) {
vector<int> points;
for (size_t i = 0; i < a.size(); i++) {
       if(a[i]>10 && a[i+1]<10)
       {
        if(a[i+1]==NULL)
         {
           points.push_back(a[i]);
         }
    else{
	   points.push_back(a[i]/10);
       points.push_back(a[i]%10);
	   } 
   }
	   else
	   {
	     points.push_back(a[i]);
	   }
  }
  std::sort(std::begin(points),std::end(points));
  std::stringstream ret;
  int j=points.size();
  for (size_t i = 0; i < points.size(); i++) {
    ret << points[j-1];
    j--;
  }
  string result;
  ret >> result;
  return result;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
