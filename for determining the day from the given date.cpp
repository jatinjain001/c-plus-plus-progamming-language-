
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int yr,ref_yr=2001,dif_yr,leap_yr,nor_yr,td, day;
	    cin>>yr;
	    dif_yr=yr-ref_yr;
	    leap_yr=dif_yr/4;
	    nor_yr=dif_yr-leap_yr;
	    td=((leap_yr*366)+(nor_yr*365));
	    day=td%7;
	     if(day==0)
	     cout<<"monday"<<endl;
	     if(day==1)
	     cout<<"tuesday"<<endl;
	     if(day==2)
	     cout<<"wednesday"<<endl;
	     if(day==3)
	     cout<<"thursday"<<endl;
	     if(day==4)
	     cout<<"friday"<<endl;
	     if(day==5)
	     cout<<"saturday"<<endl;
	     if(day==6)
	     cout<<"sunday"<<endl;
	     
	}
	return 0;
}
