#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  while (cin >> n) {
    vector<int> d(100), e(100);
    int size; char t;
    for (int i = 0; i < n; ++i) {
      cin >> size >> t;
      if (t == 'D')
        d[size]++;
      else
        e[size]++;
    }

    int ans = 0;
    for (int i = 0; i < 100; ++i)
      ans += min(d[i], e[i]);
    cout << ans << endl;
  }

  return 0;
}
