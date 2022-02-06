class Bitset {
public:
    string s;
    int total;
    int onecount=0;
    int checkFlip=0;
    Bitset(int size) {
        s="";
        for(int i=0;i<size;i++)
            s+="0";
        total=size;
    }
    
    void fix(int idx) {
        if (s[idx] == '0' + checkFlip) 
        {
            s[idx] = '1' + '0' - s[idx];
            onecount++;
        }
    }
    
    void unfix(int idx) {
        if (s[idx] == '1' - checkFlip) 
        {
            s[idx] = '1' + '0' - s[idx];
            onecount--;
        }
        
    }
    
    void flip() {
        checkFlip^=1;
        onecount=total-onecount;
        // for(int i=0; i<total;i++)
        // {
        //     if(s[i]=='1')
        //     {
        //         s[i]='0';
        //     }
        //     else
        //     {
        //         s[i]='1';
        //     }
        // }
    }
    
    bool all() {
        // int count=0;
        // for(int i=0; i<total;i++)
        // {
        //     if(s[i]=='1')
        //     {
        //         count++;
        //     }
        // }
        if(onecount==total)
            return true;
        return false;
    }
    
    bool one() {
        // for(int i=0; i<total;i++)
        // {
        //     if(s[i]=='1')
        //     {
        //         return true;
        //     }
        // }
        if(onecount>=1)
            return true;
        return false;
    }
    
    int count() {
        // int count=0;
        // for(int i=0; i<total;i++)
        // {
        //     if(s[i]=='1')
        //     {
        //         count++;
        //     }
        // }
        return onecount;
    }
    
    string toString() {
        // if(checkFlip!=0)
        // {
        //     for(int i=0; i<total;i++)
        //     {
        //         if(s[i]=='1')
        //         {
        //             s[i]='0';
        //         }
        //         else
        //         {
        //             s[i]='1';
        //         }
        //     }
        // }
        // return s;
        
        if (checkFlip) {
            string s2 = s;
            for (auto& c: s2)
                c = '0' + '1' - c;
            return s2;
        }
        return s;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */