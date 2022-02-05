/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
    vector<int> x;
    int pointer;
    void checker(TreeNode * root)
    {
        if(root==NULL)
            return;
        checker(root->left);
        x.push_back(root->val);
        checker(root->right);
        
    }
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // checker(root);
	    // for(auto it: x)
	    // cout<<it<<" ";
        x=nums;
        pointer=0;
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return x[(pointer)];
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    return x[(pointer++)];
	}
	
	bool hasNext() const {
	    if(pointer==x.size())
            return false;
        return true;
	}
};