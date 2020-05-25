#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> chouri(5);

int calc_chouri_time();

int main()
{
  for (int i = 0; i < 5; i ++)
    cin >> chouri.at(i);
  
  int min_chouri_time = 644;
  int tmp;
  do
  {
    tmp = calc_chouri_time();
    if (tmp < min_chouri_time) min_chouri_time = tmp;
  } while(next_permutation(chouri.begin(), chouri.end()));

  cout << min_chouri_time << endl;
  return 0;
}

int calc_chouri_time()
{
  int chouri_time = 0;
  int n;
  
  for (int i = 0; i < 4; i ++)
  {
    n = chouri.at(i) / 10;
    if (chouri.at(i) % 10 != 0) n ++;
    chouri_time += n * 10;
  }
  
  chouri_time += chouri.at(4);
  return chouri_time;
}

// next_permutationの使い方。
// 問題文はなんかDPっぽいことを書いてあるが、料理が5つ固定なので全部のオーダー順でかかる時間を全探索しても計算は5!=120回で終わる
