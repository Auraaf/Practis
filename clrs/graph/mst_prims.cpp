#include<bits/stdc++.h>
using namespace std;

class Graph
{
	int u , v ;
	map<int , vector< pair <int , int > > > gp;
	
	void add_edge(int u, int w , int v)
	
	{
	    gp[u].push_back( make_pair( w , v ));
	    gp[v].push_back( make_pair( w , u ));
	}
	
	
	void mst_prim(int n , int r)
	{
	  vector<int > prnt(n+1 , -1) , key( n + 1 , INT_MAX );
	    
	  
	}
	
};
int main()
{ 
  deque<int> dq;
  dq.push_back(1);
   dq.push_back(0);
   dq.push_back(-1);
   sort(dq.begin() , dq.end()) ;
   for (auto it = dq.begin() ; it != dq.end() ; it++)
   cout<< *it<<" ";
  //cout<<dq.front();
}
