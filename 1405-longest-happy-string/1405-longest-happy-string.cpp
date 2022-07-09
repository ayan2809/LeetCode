class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        int A=0,B=0, C=0;
        int size=a+b+c;
        string out="";
        for(int i=0;i<size;i++)
        {
            if((a>=b && a>=c && A!=2 )||(B==2 && a>0)||(C==2 && a>0))
            {
                out+='a';
                a--;
                A++;
                B=0;
                C=0;
            }
            else if((b>=a && b>=c && B!=2 )||(A==2 && b>0)||(C==2 && b>0))
            {
                out+='b';
                b--;
                B++;
                A=0;
                C=0;
            }
            else if((c>=a && c>=b && C!=2 )||(A==2 && c>0)||(B==2 && c>0))
            {
                out+='c';
                c--;
                C++;
                A=0;
                B=0;
            }
        }
        return out;
    }
};