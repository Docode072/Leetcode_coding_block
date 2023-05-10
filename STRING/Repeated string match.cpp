class Solution {
public:
   
    int repeatedStringMatch(string a, string b) {
        int count = 1; 
        string strA = a;
         int add= b.size()/a.size(); 
        for(int i =0 ; i< add+2; i++){
            
            if(a.find(b) != string::npos){// a= abcd  // b = cdabcdab
                return count;             // a =abcdabcdabcd
            }
            else{
                a +=strA;
                count++;
            }
        }
        return -1;
        
    }
};
