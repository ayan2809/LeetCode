class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        int ans=0,f=1,g=1;
	int i=lower;
	while(i<=upper)
	{
		int x=i,g=0;
		for(int j=0;j<differences.size();j++)
		{
			// cout<<x<<" ";
			x+=differences[j];
			if(x<lower || x>upper)
			{
				g=1;
				break;
			}
		}
		if(g==0)
			break;
		i++;
	}
	// cout<<i<<endl;
	if(i>upper)
		return 0;
	ans=i;
	i= upper;
	while(i>lower)
	{
		int x=i,g=0;
		for(int j=0;j<differences.size();j++)
		{
			// cout<<x<<" ";
			x+=differences[j];
			if(x<lower || x>upper)
			{
				g=1;
				break;
			}
		}
		if(g==0)
			break;
		i--;
	}
	// cout<<i<<endl;
	ans=i-ans;
	return ans+1;
    }
};