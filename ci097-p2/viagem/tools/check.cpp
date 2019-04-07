#include <bits/stdc++.h>

using namespace std;

int n, m;

int main() {

    scanf("%d %d",&n,&m);
    assert(2 <= n and n <= 100);
    assert(1 <= m and m <= 2*(n*n - n));
    for (int i=0;i<m;i++) {
        int a, b, t, r;
        scanf("%d %d %d %d",&a,&b,&t,&r);
        assert(1 <= a and a <= n);
        assert(1 <= b and b <= n);
        assert(a != b);
        assert(t==0 or t==1);
        assert(1 <= r and r <= 10000);
    }

    return 0;
}
