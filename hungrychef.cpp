#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int a,b;
	    int x,y,R,N;
	    cin>>a>>b>>x>>y>>R>>N;
	    
	    y = (R-N)/(b-a);
	    
	    cout<<N-y<<"  "<<y<<endl;
	    
	    if(R/b >N){
	        cout<<0<<"  "<<N<<endl;
	    }
	    if(R/a < N){
	        cout<<-1<<endl;
	    }
	    t--;
	}
	return 0;
}