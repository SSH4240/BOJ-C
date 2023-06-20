#include <iostream>

using namespace std;

int p2501() {
    int n, k;
    int ans = 0;
    int cnt = 0;
    cin >> n >> k;

    for (int i=1;i<=n;i++){
        if (n % i == 0){
            cnt++;
            if (cnt == k)
                ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}

/*
#include <cstdio>

int n, k, i;
int main() {
    scanf("%d%d", &n, &k);
    for(i=1; i<=n && k; i++)
        if(n % i == 0) k--;
    printf("%d", k ? 0:--i);
    return 0;
}
*/
