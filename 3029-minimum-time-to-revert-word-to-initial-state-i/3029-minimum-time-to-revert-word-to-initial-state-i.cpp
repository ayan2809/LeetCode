class Solution {
public:
    bool isEqual(string str, string target)
    {
        int count=0;
        for(int i=0;i<str.length();i++)
        {    
            if(str[i]==target[i])
                count++;
            if(str[i]!=target[i] && str[i]=='*')
                count++;
        }
        cout<<count<<" "<<str.length()<<endl;
        return count == str.length();       
    }
    int minimumTimeToInitialState(string word, int k) {
        // abacabad-> acabad** -> abad**** -> ad******
        string target = word;
        int count=0;
        do{
            word = word.substr(k) + string(k, '*'); // to convert the string with stars
            count ++;
            cout<<word<<endl;
        } while(!isEqual(word, target));
        return count;
    }
};