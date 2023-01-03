#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[100004], b, c, psum[100004], n, m;

int main(){
    ios_base::sync_with_stdio(false); // 동기화를 비활성화
    
    // cin과 cout의 묶음을 풀어
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    // 전체 누적합(1부터 받음)
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        psum[i] = psum[i - 1] + a[i];
    }

    // 구간 누적합
    for (int i = 0; i < m; i++){
        cin >> b >> c;
        cout << psum[c] - psum[b - 1] << "\n";
    }

    return 0;
}