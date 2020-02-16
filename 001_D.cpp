#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  const int numBlocks = 12 * 24;	// 5分刻みのブロックの数
  
  string duration;
  int shh, smm, ehh, emm;
  int s, e;
  vector<bool> flags(numBlocks, false);

  for (int i = 0; i < n; i ++)
  {
    cin >> duration;
  
    // 時刻解析部
	shh = atoi(duration.substr(0, 2).c_str());	// 降り始め時刻（時）
	smm = atoi(duration.substr(2, 2).c_str());	// 降り始め時刻（分）
	ehh = atoi(duration.substr(5, 2).c_str());	// 降り終わり時刻（時）
	emm = atoi(duration.substr(7, 2).c_str());	// 降り終わり時刻（分）
    
    s = shh * 12 + smm / 5;
    e = ehh * 12 + (emm % 5 == 0 ? emm / 5 : emm / 5 + 1);
    for (int j = s; j < e; j ++)
      flags.at(j) = true;
  }
  
  bool prev = false;
  bool curr = false;
  int rainStart;
  for (int i = 0; i < numBlocks; i ++)
  {
    curr = flags.at(i);
    if (prev == false && curr == true)
    {
      rainStart = i;
    }
    else if (prev == true && curr == false)
    {
      cout << setw(4) << setfill('0') << (rainStart / 12) * 100 + (rainStart % 12) * 5 << "-" << setw(4) << setfill('0') << (i / 12) * 100 + (i % 12) * 5 << endl;
    }

    prev = curr;
  }

  if (curr == true)
  {
    cout << setw(4) << setfill('0') << (rainStart / 12) * 100 + (rainStart % 12) * 5 << "-" << "2400" << endl;
  }

  return 0;
}

/*
001_D
- 5分刻みのフラグを立てていくアイデア
- 時刻を10進法の添字がついた配列に変換するとき、分・秒は60進法であることに注意する
- 図を描こう（描いたら複数の重複がある範囲の射影であることがはっきりした・配列に不自然な1を足す必要ないことがわかった）
- setw(), setfill()はそれぞれ1つの文字列にしか聞かない
- コードテストはできるだけエッジなものを設定（0000-0005をを試してみて↑でバグってたのがわかった）
- atoi(*char), vectorの初期値付き確保、string.substr(begin, char_num)
- string -> *charはstring.c_str()でポインタを取れる
*/
