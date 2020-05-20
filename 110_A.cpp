#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
  vector<int> c(3);
  for (int i = 0; i < 3; i ++)
    cin >> c.at(i);
  
  sort(c.begin(), c.end(), greater<>{});
  cout << c.at(0) * 10 + c.at(1) + c.at(2) << endl;
  
  return 0;
}

// 降順ソートはsort, greater<>{} ヘッダはalgorithm, functional
