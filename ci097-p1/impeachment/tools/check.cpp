#include <bits/stdc++.h>

using namespace std;

int n;

int main() {

    assert(scanf("%d",&n) != EOF);
    assert(1 <= n and n <= 100000);
    for (int i=0;i<n;i++) {
        int t;
        assert(scanf("%d",&t) != EOF);
        assert(t == 0 or t== 1);
    }

    return 0;
}
