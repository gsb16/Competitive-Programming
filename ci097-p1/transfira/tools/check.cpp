#include <bits/stdc++.h>

using namespace std;

int n, k, t;

int main() {

    assert(scanf("%d %d",&n,&k) != EOF);
    assert(1 <= n and n <= 100);
    assert(1 <= k and k <= 10000);
    for (int i=0;i<n;i++) {
        assert( scanf("%d",&t) != EOF);
        assert(1 <= t and t <= 10000);
    }
    for (int i=0;i<n;i++) {
        assert( scanf("%d",&t) != EOF);
        assert(1 <= t and t <= 10000);
    }

    return 0;
}
