/*
	TEMPLATE
*/

#include <bits/stdc++.h>
#define D(x) cout << #x << ": " << x << endl;
#define CYN(x) cout << (x ? "YES" : "NO" ) <<endl; 
#define forn(i,n) for(int i=0; i< (int)n; i++)
#define for1(i,n) for(int i=1; i<= (int)n; i++)
#define all(v) v.begin(),v.end()
#define precision(x) cout<< setprecision(x)<< fixed
#define cin_pro  ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define F first
#define S second
#define pf push_front
#define mp make_pair
#define rall(v) v.rbegin(), v.rend()
#define cases(t) while(t--)
#define rforn(i,n) for(int i = n - 1; i >= 0; i--)
#define rfor1(i,n) for(int i = n; i >= 1; i--)
#define foreach(it, v) for(auto it: v)
#define mem(v, val) memset(v, (val), sizeof(v))
#define inf (int) 1e9
#define pi 3.1415926535897932384626433832795

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define vvi vector<vi>
#define mpii map<int,int>
#define umpii unordered_map<int,int>
#define seti set<int>
#define pqi priority_queue<int>

//Operaciones | Sumatorias | Otros
#define sumn(n) n*(n+1)/2
#define sumevens(n) n*(n+1)
#define sumodds(n) n*n
#define sumsquares(n) (n*(n+1)*(2*n+1))/6
#define sumcubes(n) sumn(n)*sumn(n)

int dr[] = {1,-1,0, 0,1,-1,-1, 1};
int dc[] = {0, 0,1,-1,1, 1,-1,-1};

using namespace std;

typedef long long ll;   

template <typename T> void amax(T &a, const T &b){ if( a < b) a = b; }
template <typename T> void amin(T &a, const T &b){ if( b < a) a = b; }
template <typename T> T gcd(T a, T b){
    if(a==0 || b==0)return max(a,b);
    else return gcd(b,a%b);
}

template <typename T> inline void prefix_sum(T arr, T& res){ 
	if(arr.size() > 0) res[0]=arr[0];
	for(int i = 1; i < arr.size(); i++) res[i] += res[i-1] + arr[i]; 
}

template <typename T> inline void sufix_sum(T arr, T& res){ 
	if(arr.size() > 0) res[arr.size()-1]=arr[arr.size()-1];
	for(int i = arr.size()-2; i >= 0; i--) res[i] += res[i+1] + arr[i]; 
}

void read_fast(){
	cin_pro;
	//#ifdef ONLINE_JUDGE
	#ifdef LOCAL
        	freopen("input.txt", "r", stdin);
	#else
        	#define endl '\n'
    #endif
}

/*
	END OF TEMPLATE
*/

void solve(){
	int n,m,tMinutes=0;
    string s,e;
    cin >> n >> m;
    while (n--){
        int start,end;
        start = end = 0;
        cin >> s >> e;
        start += ((int)s[0]*10)*60;
        start += (int)s[1]*60;
        start += (int)s[3]*10;
        start += (int)s[4];

        end += ((int)e[0]*10)*60;
        end += (int)e[1]*60;
        end += (int)e[3]*10;
        end += (int)e[4];
        tMinutes += (end-start);
    }
    if (tMinutes/60 >= m) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
	read_fast();
	int t = 1;
    cin >> t;
	cases(t){
		solve();
	}
	return 0;
}