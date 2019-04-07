#include <bits/stdc++.h>

using namespace std;

int n, m;

int main() {

    assert(scanf("%d %d",&n,&m) != EOF);
    assert(2 <= n and n <= 100);
    assert(2 <= m and m <= 100);
    bool dois=false;
    bool um=false;
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++) {
            int t;
            assert(scanf("%d",&t) != EOF);
            assert(0 <= t and t <= 2);
            if (t==1) {
                assert(um==false);
                um=true;
            } else if (t==2) {
                assert(dois==false);
                dois=true;
            } else
                assert(t==0);
        }

    return 0;
}
