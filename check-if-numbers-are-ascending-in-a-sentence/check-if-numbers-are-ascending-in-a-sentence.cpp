class Solution {
public:
    bool areNumbersAscending(string s) {
        string word="";
        vector<int> check;
        for(auto it: s)
        {
            if (it == ' ')
            {
                //cout << word << endl;
                if(word[0]>=48 && word[0]<=57)
                {
                    check.push_back(stoi(word));
                }
                word = "";
            }
            else {
                word = word + it;
            }
           
        }
        if(word[0]>=48 && word[0]<=57)
        {
            check.push_back(stoi(word));
        }
        for(int i=1;i<check.size();i++)
        {
            cout<<"hello"<<endl;
            if(check[i]<=check[i-1])
                return false;
        }
        //cout<<word<<endl;
        return true;
    }
};