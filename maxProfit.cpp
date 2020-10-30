#include <bits/stdc++.h>
#define vi vector<int>
#define pushb push_back
#define si set<int>
#define vsi vector<si>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; i++)
#define REPI(i, a, b) for (int i = a; i >= b; i--)

void inputStocks(vi &stock, int n)
{
    while (n--)
    {
        int ele;
        cin >> ele;
        stock.pushb(ele);
    }
}

int main()
{
    int n;
    cin >> n;
    vi stock;
    inputStocks(stock, n);

    int i;
    vsi allSet;
    si arr;
    REPI(i, n - 1, 0)
    {
        arr.insert(stock[i]);
        allSet.pushb(arr);
    }
    reverse(allSet.begin(), allSet.end());
    int maxi = INT_MIN;

    REP(i, 0, n)
    {
        maxi = max(abs(stock[i] - *allSet[i].rbegin()), maxi);
    }

    cout << maxi;

    return 0;
}
