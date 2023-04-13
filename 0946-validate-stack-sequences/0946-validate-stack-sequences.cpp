class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack <int> st1;
        stack <int> st2;
        int j=0,i=0;
        while(j<popped.size())
        {
            
            if(j==popped.size()) 
                return true;
            
            if(j<popped.size() && st1.size()!=0)
            {
//                 cout<<st1.top()<<" "<<popped[j]<<endl;
//                 if(st1.top()==popped[j])
//                 {
                    
//                     st1.pop();
//                     j++;
//                 }  
                while(j<popped.size() && st1.size()>0)
                {
                    cout<<st1.top()<<" "<<popped[j]<<endl;
                    if(st1.top()!=popped[j])
                        break;
                    st1.pop();
                    j++;
                }
            }
            
            st1.push(pushed[i]);
            i++;
            if(i==pushed.size())
                break;
            
            
            // cout<<st1.top()<<endl;
            
        }
        cout<<st1.size()<<endl;
        while(j<popped.size() && st1.size()>0)
                {
                    cout<<st1.top()<<" "<<popped[j]<<endl;
                    if(st1.top()!=popped[j])
                        return false;
                    st1.pop();
                    j++;
                }
        if(st1.size()==0)
            return true;
        return false;
    }
};