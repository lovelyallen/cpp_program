#include <bits/stdc++.h>
using namespace std;
priority_queue<int> a;
int main(){
    int n;
    freopen("input.in","r",stdin);
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int t;
        scanf("%d",&t);
        a.push(t);
    }
    for (int i=1;i<=n;i++){
        printf("%d\n",a.top());a.pop();
    }
    return 0;
}