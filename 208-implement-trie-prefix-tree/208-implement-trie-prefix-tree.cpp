class TrieNode{
public:
	char data;
	TrieNode **children;
	bool isTerminal;

	TrieNode(char data)
	{
		this->data= data;
		children= new TrieNode*[26];
		for(int i=0;i<26;i++)
		{
			children[i] = NULL;
		}
		isTerminal=false;
	}

};

class Trie {
    TrieNode * root;
public:
    Trie() {
        root=new TrieNode('\0');
    }
    
    void insertWord(TrieNode *root, string word)
	{
		// base case
		if(word.size()==0)
		{
			root->isTerminal= true;
			return;
		}

		// small calculation
		int index=word[0]-'a';
		TrieNode *child;
		if(root->children[index]!=NULL)
		{
			child= root->children[index];
		}
		else
		{
			child=new TrieNode(word[0]);
			root->children[index]=child;
		}

		// recursive call
		insertWord(child, word.substr(1));

	}
    
    void insert(string word) {
        insertWord(root, word);
    }
    
    bool searchHelper(TrieNode *root, string word)
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
            return searchHelper(root,word.substr(1));
           
        } else {
            
            return false;
            
        }
    }
    
    bool search(string word) {
        return searchHelper(root, word);
    }
    
    bool searchHelper2(TrieNode *root, string word)
    {
        if (word.size() == 0) {
            // if(root->isTerminal ==true)
            return true;
            // else
            // return false;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL ) {
            child = root->children[index];
            root=child;
            return searchHelper2(root,word.substr(1));
           
        } else {
            
            return false;
            
        }
    }
    
    
    
    bool startsWith(string prefix) {
        return searchHelper2(root,prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */