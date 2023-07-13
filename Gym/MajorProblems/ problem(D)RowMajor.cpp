#include <bits/stdc++.h>
using namespace std;
 
char s[1000001];
int main() {
    int i;
    int t,n;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        int c = 1;
        while ((n % c) == 0) c++;
        for (i = 0; i < n; i++) s[i] = 'a'+(i % c);
        s[n] = '\0';
        printf("%s\n",s);
    }
    return 0;
}