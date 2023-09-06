/*   *******************************************************************************************************************

Author of This code
Ashish thakur

Date 07 july 2023 , Friday

@codeforces-profile=oder_1
@codeforces-profile=oder_1
@GFG-profile=oder_1
@LeetCode-Profile=Ashish_49

 ******************************************************************************************************************************
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define set_bits __builtin_popcountll
#define ts to_string
#define FIXED(kk) cout << fixed << setprecision(10) << kk

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

// -------------map unordered-map set unordered set ---------------important -----------------notes -----------
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order(), order_of_key()
#define PLL pair<ll, ll>
#define PII pair<int, int>
#define SLL set<ll>
#define SI set<int>
#define MII map<int, int>
#define MLL map<ll, ll>
#define MCI map<char, int>
#define MSI map<string, int>
#define UMII unordered_map<int, int>
#define UMLL unordered_map<ll, ll>

#define UMCI unordered_map<char, int>
#define UMSI unordered_map<string, int>
#define USII unordered_set<int, int>
#define UMLL unordered_map<ll, ll>

// // -----------vector important  --------------------------notes----*************************************************************
#define POF pop_front
#define VL vector<ll>
#define VI vector<int>
#define VSTR vector<string>
#define VB vector<bool>
#define VPL vector<PLL>
#define VPI vector<PII>
#define ALL(b) b.begin(), b.end()
#define PB push_back
#define PF push_front
#define PP pop_back

#define FF first
#define SS second

// // sorting stl ....................................important----------------------*********************************************
#define SR(a) reverse(ALL(a));
#define SRT(a) sort(ALL(a))
#define SRTG(a) sort(ALL(a), greater<ll>())
#define AC(a) accumulate(ALL(a), 0)

//  //----------------max min conatainer -------------- important -----------------notes---------------

#define MXV(v) *max_element(ALL(v))
#define MNV(v) *min_element(ALL(v))
#define MXA(arr, n) *max_element(arr, arr + (n))
#define MNA(arr, n) *min_element(arr, arr + (n))

// // print the vector and array  and traverse the lopp---------------------shortcut--------------------**********************************

#define PRINTA(v, n)               \
    for (int I = 0; I < n < ; I++) \
    cout << (v)[I] << " "

#define PRINTV(v)      \
    for (auto &kk : v) \
    cout << kk << " "

#define rt return
#define NL cout << endl

/*******************************************************************************************************************************/

#define PACK(n) for (int i = 0; i < n; i++)
#define RPACK(n) for (int i = n - 1; i >= 0; i--)

#define PUT(v, n)               \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> v[i];            \
    }

#define CNI(X) \
    int(X);    \
    cin >> X;
#define CNII(X, Y) \
    int X, Y;      \
    cin >> X >> Y;
#define CNIII(X, Y, Z) \
    int X, Y, Z;       \
    cin >> X >> Y >> Z;

//  // important .........................usefull--------sortcut-------------------
#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define NO cout << "NO" << endl
#define No cout << "No" << endl
#define no cout << "no" << endl

// // basic---------knowledge------------------**************************************************************************
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

#define PI 3.14159265
#define endl "\n"
#define boost ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

// //--------------------------nt fibonacci number -----------------------
    ll fib(ll n){
        ll MOD=1e9;
      ll dp[n+1] = {0};
       dp[1] = 1;
       dp[2] = 1;
       for(long long int i=3;i<=n;i++){
           dp[i] = (dp[i-1]%(MOD))+(dp[i-2]%(MOD));
       }
       return (dp[n])%(MOD);
    }



bool isprime(int n)
{
    if(n<=1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

// struct cmp {
//         bool operator () (const pair<int, string>& a, const pair<int, string>& b) {
//             return a.first == b.first ? a.second > b.second : a.first < b.first;
//         }
//     };

/*****------------------check the palindrome ----------------------*****************/

bool ispalindrome(string s)
{
    int N = s.size();
    for (int i = 0; i < N / 2; i++)
    {
        if (s[i] != s[N - 1 - i])
            return 0;
    }
    return 1;
}

// this is my function some basic data types
#define C char
#define B bool;
#define ll long long
#define UL unsigned long long
#define L long

/* *******************  decimal to binary in log(n) *********************** */

void BinaryToDecimal(ll n){
    string s;
    while(n!=0){
        if(n&1) s+="1";
        else s+="0";
        n>>=1;
    }
  reverse(s.begin(),s.end());
  cout<<s<<endl;
}

/*********************  binary to decimal in O(1)   *************************************/

// void BinaryToDecimal(ll n){
//     for(int i=31; i>=0;i--){
//       ll k=n>>i;
//       if(k&1)cout<<1;
//       else cout<<0;
//     }
// }

// *************************power of 2 **********************

ll POWOF2(ll m)
{
    return 1LL << m;
}

/*********************IS power of Two*/

bool ISPOWOF2(ll n)
{
    if (n < 0)
        return false;

    int bits = __builtin_popcountll(n);

    if (bits == 1)
        return true;
    return false;
}

/*************************************************   gcd of two number    */
ll GCD(ll a, ll b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

/********************LCM of two number ******************/

ll LCM(ll a, ll b)
{
    return (a / GCD(a, b)) * b;
}

/************ ***********************maximum of three number *************************************/
ll MAX3(ll a, ll b, ll c)
{
    return max(a, max(b, c));
}

/****************************minimum of three number ********************************************/
ll MIN3(ll a, ll b, ll c)
{
    return min(a, min(b, c));
}

/****************************maximum of 4 number **********************************************/
ll MAX4(ll a, ll b, ll c, ll d)
{
    return max(a, max(b, max(c, d)));
}

/**************************minimum of 4 numbers***********************************/

ll MIN4(ll a, ll b, ll c, ll d)
{
    return min(a, min(b, min(c, d)));
}

//  **********************DFS******************************
void DFS(int v, vector<int> adj[], vector<bool> &vis)
{
    vis[v] = true;

    for (auto it : adj[v])
    {
        if (vis[it] == false)
            DFS(it, adj, vis);
    }
}

// *********************************count thte connected component***********************************************
int COUNTCONNECTED(int n, vector<int> adj[])
{
    int ct = 0;

    vector<bool> vis(n + 1, 0);

    for (int i = 0; i <= n; i++)
        vis[i] = false;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            DFS(i, adj, vis);
            ct++;
        }
    }

    return ct;
}

/*******************************SEGMENT TREE*****************************************/

void BUILD(ll index, ll low, ll high, ll a[], ll seg[])
{
    if (low == high)
    {
        seg[index] = a[low];
        return;
    }
   int mid = low + (high - low) / 2;

    BUILD(2 * index + 1, low, mid, a, seg);
    BUILD(2 * index + 2, mid + 1, high, a, seg);

    seg[index] = min(seg[2 * index + 1], seg[2 * index + 2]);
}

int QUERY(ll index, ll low, ll high, ll l, ll r, ll seg[])
{

    // no overlapping
    // l r low high or low high l r
    if (r < low || high < l)
        return INT_MAX;

    // complete overlapping
    // [l low high r]
    if (low >= l && high <= r)
        return seg[index];

    // partial overlap

    ll mid = low + (high - low) / 2;

   ll left = QUERY(2 * index + 1, low, mid, l, r, seg);
   ll right = QUERY(2 * index + 2, mid + 1, high, l, r, seg);

    return min(left, right);
}

void UPDATE(ll index, ll low, ll high, ll idx, ll value, ll seg[])
{
    if (low == high)
    {
        seg[index] = value;
        return;
    }

    ll mid = low + (high - low) / 2;

    if(idx<=mid) UPDATE(2 * index + 1, low, mid, idx, value, seg);
     else   UPDATE(2 * index + 2, mid + 1, high, idx, value, seg);

    seg[index] = min(seg[2 * index + 1], seg[2 * index + 2]);
}

//................ DSU iIN GRAPH.................................

const int N = 1e3;
int parent[N];
int sz[N];
void Make(int v)
{
    parent[v] = v;
    sz[v] = 1;
}
int Find(int v)
{
    if (parent[v] == v)
        return v;
    return parent[v] = Find(parent[v]);
}
void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

   
//---------------------------------- Binary Search in Array --------------------------------
ll BinarySearch(ll arr[], ll st, ll ed, ll val)
{
    while (st <= ed) {
        ll mid = st + (ed - st) / 2;
 
        // Check if x is present at mid
        if (arr[mid] == val)
            return mid;
 
        // If x greater, ignore left half
        if (arr[mid] < val)
            st = mid+ 1;
 
        // If x is smaller, ignore right half
        else
            ed = mid- 1;
    }
 
    // If we reach here, then element was not present
    return -1;
}

#define tcT template<class T


// sort and remove duplicates
tcT> void remDup(vector<T>& v) { 
	sort(all(v)); v.erase(unique(all(v)),end(v)); }

/*****************************Print Fucntion here you can print easily from here **********************************/
#define P(n) cout << n << endl;

/*  for speed fast */
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")




/********************My logical fuction start here ********** Please Read my question from here**********************************/

void BUILD_LOGIC_HERE()
{
    
CNI(n);

VI a(n);

PUT(a,n);

//CNS(s);
}




/* -------------my main function start here -----------------*/
int main()
{
    speed;
    int T = 1;
    cin >> T;

    while (T--)
    {

        BUILD_LOGIC_HERE();
    }

    return 0;
}
