#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  
  vector<int> vec(N);
  vector<double> vecexp(N);

  double exp, maxExp;
  int offset = 0;
  
  for (int i = 0; i < N; i++) 
  {
    cin >> vec.at(i);
    int pi = vec.at(i);
    double dpi = (double)pi;
    vecexp.at(i) = (1 + dpi) / 2;
    exp += vecexp.at(i);
    if (i >= K)
    {
      exp -= vecexp.at(offset);
      offset++;
    }
    if (exp > maxExp)
    {
      maxExp = exp;
    }
  }
 
  cout << fixed << setprecision(12) << maxExp << endl;
      
  return 0;
}
