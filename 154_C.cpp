#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  
  vector<int> vec(N);

  for (int i = 0; i < N; i++) 
    cin >> vec.at(i);
  
  sort(vec.begin(), vec.end());
  
  for (int i = 0; i < N - 1; i++)
  {
    if (vec.at(i) == vec.at(i + 1))
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  
  cout << "YES" << endl;
  return 0;
}
