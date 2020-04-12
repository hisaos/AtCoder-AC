#include<bits/stdc++.h>
using namespace std;
 
template<typename A, typename B>
pair<B, A> flip_pair(const pair<A, B> &p)
{
  return pair<B, A>(p.second, p.first);
}
 
template<typename A, typename B>
multimap<B, A, greater<int>> flip_map(const map<A, B> &src)
{
  multimap<B, A, greater<int>> dst;
  transform(src.begin(), src.end(), inserter(dst, dst.begin()), flip_pair<A, B>);
  return dst;
}
 
int main()
{
  int n;
  cin >> n;
  
  string pollName;
  map<string, int> poll;
  for (int i = 0; i < n; i ++)
  {
    cin >> pollName;
    auto it = poll.find(pollName);
    if (it != poll.end()) it->second ++;
    else poll[pollName] = 1;
  }
 
  multimap<int, string, greater<int>> flip_poll = flip_map(poll);
  
  int numPoll;
  for (auto it = flip_poll.begin(); it != flip_poll.end(); it ++)
  {
    if (it->first < numPoll) break;
    cout << it->second << endl;
    numPoll = it->first;
  }
  
  return 0;
}

// C++でややっこしいやり方で連想配列みたいなことをやろうとしたやつ。
// map<>は内部的にキーをソートして持ってるらしい
