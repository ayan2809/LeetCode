#include <string>
#include <vector>

class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    TrieNode *root;

   public:
    int count;

    Trie() {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            if (!root->isTerminal) {
                root->isTerminal = true;
                return true;
            } else {
                return false;
            }
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        return insertWord(child, word.substr(1));
    }

    void insertWord(string word) {
        if (insertWord(root, word)) {
            this->count++;
        }
    }
    bool checker(TrieNode *root, string word)
    {
        if (word.size() == 0) {
            if(root->isTerminal ==true)
            return true;
            else
            return false;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL ) {
            child = root->children[index];
            root=child;
            return checker(root,word.substr(1));
           
        } else {
            
            return false;
            
        }
    }

    bool patternMatching(vector<string> vect, string pattern) {
        // Write your code here
        // TrieNode * root= new TrieNode(); 
        for(auto it: vect)
        {
            for(int i=0;i<it.size();i++)
            {
                string x= it.substr(i, it.size());
                // cout<<x<<endl;
                insertWord(root,x);
            }
            for(int i=1;i<=it.size();i++)
            {
                string x= it.substr(0, i);
                // cout<<x<<endl;
                insertWord(root,x);
            }
            // insertWord(root,it);
        }
        return checker(root, pattern);
        return true;
    }
};

class MapSum {
    Trie T;
    unordered_map<string, int> umap;
public:
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        // T.insertWord(key);
        umap[key]=val;
    }
    
    int Substr(string s2, string s1)
    {
        int counter = 0; // pointing s2
        int i = 0;
        for(;i<s1.length();i++)
        {
            if(counter==s2.length())
                break;
            if(s2[counter]==s1[i])
            {
                counter++;
            }
          else
            {
                if(counter > 0)
                {
                    i -= counter;
                }
                counter = 0;
            }
        }
        return counter < s2.length()?-1:i-counter;
    }
    
    int sum(string prefix) {
        int sum=0;
        for(auto it:umap)
        {
            if(Substr(prefix, it.first)==0)
            {
                sum+=it.second;
            }
        }
        // if (checker())
        return sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */