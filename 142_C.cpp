#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<vector>
using std::vector;

#include<algorithm>
using std::sort;

#include<map>
using std::pair;
using std::make_pair;

int main()
{
  int n;
  cin >> n;
  
  vector<pair<int, int>> a(n);
  int tmp;
  for (int i = 0; i < n; i ++)
  {
    cin >> tmp;
    a.at(i) = make_pair(tmp, i + 1);
  }
  
  sort(a.begin(), a.end());
  
  for (int i = 0; i < n; i ++)
  	cout << a.at(i).second << " ";
  
  cout << endl;
  return 0;
}

// pairはsortで1番目、2番めの降順でソートされる。
// pairつくる->make_pair(), pairの1番目の要素->first, pairの2番目の要素->second
