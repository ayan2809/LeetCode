class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.size()<3)
            return false;
//         int i=0,j=0;
//         while(1)
//         {
//             if(colors.size()<3)
//                 return false;
//             int x=colors.size();
//             for(i=0;i<colors.size()-2;i++)
//             {
//                 if(colors[i]=='A' && colors[i+1]=='A' && colors[i+2]=='A')
//                 {
//                     colors=colors.substr(0,i+1)+colors.substr(i+2);
//                     //j-=1;
//                     break;
//                 }
//             }
//             if(x==colors.size())
//                 return false;
//             if(colors.size()<3)
//                 return true;
//             x=colors.size();
//             //i-=1;
//             for(j=0;j<colors.size()-2;j++)
//             {
//                 if(colors[j]=='B' && colors[j+1]=='B' && colors[j+2]=='B')
//                 {
//                     colors=colors.substr(0,j+1)+colors.substr(j+2);
//                     //i-=1;
//                     break;
//                 }
//             }
//             //cout<<j<<colors<<endl;
//             if(x==colors.size())
//                 return true;
            
//         }
//         return true;
        int a=0,b=0;
        for(int i=0;i<colors.size()-2;i++)
        {
            if(colors[i]=='A' && colors[i+1]=='A' && colors[i+2]=='A')
            {
                a++;
                    //colors=colors.substr(0,i+1)+colors.substr(i+2);
                    //j-=1;
                    //break;
            }
            else if(colors[i]=='B' && colors[i+1]=='B' && colors[i+2]=='B')
            {
                b++;
            }
        }
        return a>b;
    }
};