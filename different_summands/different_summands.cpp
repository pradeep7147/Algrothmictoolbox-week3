#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n) {
  vector<int> summands;
  int l=1;
  for(int i=n;i>=l;i-l)
  {
    if(n<=2*l)
    {
    summands.push_back(n);  
    }
    else
    {
      summands.push_back(l); 
    }
    n=n-l;
    l=l+1;
    i=n;
  }
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
