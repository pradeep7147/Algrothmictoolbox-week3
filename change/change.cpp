#include <iostream>

int get_change(int m) {
  int n=0,l=0,r=0,k=0;
  if(m==0)
  {
    return m;
  }
  else
  {
     n=n+(m/10);
     m=m%10;
     l=l+(m/5);
     m=m%5;
     r=r+(m/1);
  }
  k=n+l+r;
  return k;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
