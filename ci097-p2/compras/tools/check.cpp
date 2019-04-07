#include <bits/stdc++.h>

using namespace std;

int n, q;

int main() {

    scanf("%d",&n);
    assert(1 <= n and n <= 100000);
    for (int i=0;i<n;i++) {
        int t;
        scanf("%d",&t);
        assert(1 <= t and t <= 100000);
    }
    scanf("%d",&q);
    assert(1 <= q and q <= 100000);
    for (int i=0;i<q;i++) {
        int a, b, opc;
        scanf("%d %d %d",&opc,&a,&b);
        assert(opc == 1 or opc == 2);
        assert(1 <= a and a <= n);
        if (opc==1)
            assert(1 <= b and b <= 100000);
        else
            assert(1 <= b and b <= n);
    }

    return 0;
}
