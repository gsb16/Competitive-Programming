#include <bits/stdc++.h>

using namespace std;

set<int> S;
int ip, m, pc, na;

int main() {

    S.clear();
    assert(scanf("%d %d",&ip,&m)!=EOF);
    assert(1 <= ip and ip <= 100000);
    assert(1 <= m and m <= 100000);
    for (int i=0;i<m;i++) {
        assert(scanf("%d %d",&pc,&na) != EOF);
        assert(1 <= pc and pc <= 100000);
        assert(1 <= na and na <= 100000);
        assert(S.find(pc) == S.end());
        S.insert(pc);
    }

    return 0;
}
