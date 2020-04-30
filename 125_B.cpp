#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  vector<int> v(n), revenue(n);
  for (int i = 0; i < n; i ++)
    cin >> v.at(i);
  
  int tmp;
  for (int i = 0; i < n; i ++)
  {
    cin >> tmp;
    revenue.at(i) = v.at(i) - tmp;
  }
  
  sort(begin(revenue), end(revenue), greater<int>());
  int sum = 0;
  auto it = begin(revenue);
  while(*it > 0)
  {
    sum += *it;
    it ++;
  }
  
  cout << sum << endl;
  return 0;
}

// 一瞬全組み合わせ走査と思ったが、価格と価値の差を求めて0より大きいものだけ足せばいいので、降順ソートして正のやつだけ足した
// sortはalgorithm必要、降順ソートのときに使うstd::greatrer<T>()はfunctional必要
// イテレータの扱い方をいい加減覚えよう。iterator必要。autoで型を気にしない。*itで指してる値にアクセス可能。it ++で次の要素に移動。ポインタみたいに使える。
// iteratorのbegin(), end()で先頭と末尾のイテレーターを取れる。終了条件はit != end(v)とか。
