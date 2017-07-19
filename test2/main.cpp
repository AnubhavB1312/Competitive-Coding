/************************************
 *	AUTHOR: 		Divyansh Gaba	*
 *	INSTITUTION: 	ASET, BIJWASAN	*
 ************************************/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;


int main()
{
	fast;
	srand(time(NULL));
	ofstream fout("input.txt");
	fout<<45<<endl;
	int t = 45;
	while(t--){
	int n = rand()%1000 + 1;
	fout<<n<<" ";
	int m = rand()%1000 + 1;
	while(m > n)
        m = rand()%1000 + 1;
    fout<<m<<endl;
    int done[n+1];
    memset(done,0,sizeof(done));
	for(int i = 0;i<m;i++)
    {
        int a = rand()%n + 1;
        while(done[a] == 1)
            a = rand()%n +1;
        done[a] =1;
        fout<<a<<" ";
    }
    fout<<endl;
	}

	return 0;

}
