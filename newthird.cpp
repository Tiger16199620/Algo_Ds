#include <bits/stdc++.h>
#define db1(x) cerr << #x << "=" << x << '\n'
#define db2(x, y) cerr << #x << "=" << x << "," << #y << "=" << y << '\n'
#define db3(x, y, z) cerr << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << '\n'
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define repA(i, a, n) for (ll i = a; i <= (n); ++i)
#define repD(i, a, n) for (ll i = a; i >= (n); --i)
#define mp make_pair
#define sp << ' ' <<
#define pb push_back
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
using ll = long long;
void merge(vector<int> &A, int beg, int mid, int end, int &count)
{
    int size = end - beg;
    vector<int> New;
    int i = beg, j = mid;
    while (i < mid && j < end)
    {
        if (A[i] <= A[j])
        {
            New.push_back(A[i++]);
        }
        else
        {
            count++;
            New.push_back(A[j++]);
        }
        db1(count);
    }
    while (i < mid)
    {
        New.push_back(A[i++]);
    }
    while (j < end)
    {
        New.push_back(A[j++]);
    }
    rep(i, New.size()) cerr << New[i] << " ";
    cout << endl;
    // copy to the array the result
    for (int i = beg, j = 0; i < end; i++, j++)
    {
        A[i] = New[j];
    }
}
void merge_sort(vector<int> &A, int beg, int end, int &count)
{
    int mid = (beg + end) / 2;
    merge_sort(A, beg, mid, count);
    merge_sort(A, mid, end, count);
    merge(A, beg, mid, end, count);
}
int main()
{
    FastIO

        ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> v(n);
        rep(i, n) cin >> v[i];
        int count = 0;
        merge_sort(v, 0, n, count);
        rep(i, n) cout << v[i] << " ";
        cout << endl;
        cout << count << endl;
        cout << '\n';
    }
    return 0;
}
