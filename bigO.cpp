#include <bits/stdc++.h>
using namespace std;

int N, M;

void solve(int N, int M){

    int a = 1;
    // O(N + M)
    for (int i = 0; i < N; i++){
        a *= 1;
    }

    for (int j = 0; j < M; j++){
        a *= j;
    }
}

int main()
{
    int n = 3;

    
    for (int i = 0; i < 10; i++) // 10번
    {
        for (int j = 0; j < n; j++) // n번
        {
            for (int k = 0; k < n; k++) // n번
            {
                if (true)
                {
                    cout << "i = " << i << ", j = " << j << ", k = " << k << "\n";
                }
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (true)
        {
            cout << "i" << "\n";
        }
    }
    
    // 10 * n * n + n;

    return 0;
}