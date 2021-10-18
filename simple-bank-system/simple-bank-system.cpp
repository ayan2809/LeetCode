class Bank {
public:
    map<int, long long> bal;
    Bank(vector<long long>& balance) {
        for(int i=0;i<balance.size();i++)
        {
            bal[i+1]=balance[i];
        }
        // for(auto it: bal)
        //     cout<<it.first<<endl;
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(bal.find(account1)==bal.end() || bal.find(account2)== bal.end())
            return false;
        if(bal[account1]<money)
            return false;
        bal[account1]-=money;
        bal[account2]+=money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if(bal.find(account)==bal.end())
            return false;
        bal[account]+=money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if(bal.find(account)==bal.end())
            return false;
        if(bal[account]<money)
            return false;
        bal[account]-=money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */