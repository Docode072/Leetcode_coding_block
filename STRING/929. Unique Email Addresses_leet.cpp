class Solution {
public:
     int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>s;
        int idx = 0;
        for(string &email : emails){
            string v_mail ="";
            for(char ch : email ){
                
                if(ch=='@' || ch == '+'){
                    break;
                }
                else if(ch == '.'){
                    
                    continue;
                }
                v_mail +=ch;
            }
            
            v_mail += email.substr(email.find('@'));
            s.insert(v_mail);
        }
        return (int)s.size();
        
    }
};
