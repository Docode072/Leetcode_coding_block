// Apprach -->1
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
      
     // string stream to count the words in a text 
      /* int countWords(string str)
{
    // Breaking input into word
    // using string stream
   
    // Used for breaking words
    stringstream s(str);
   
    // To store individual words
    string word;
 
    int count = 0;
    while (s >> word)
        count++;
    return count;
}
    }

    */
    vector<string> ans;
    stringstream ss(text);
    string prev , prev2 , word ="";
    while(ss >> word){
        if(prev2 == first  && prev == second ){
            ans.push_back(word);
        }
        prev2 = prev;
        prev = word;
    }

    return ans;
    }
};








// Approach --->2

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
    vector<string> vec;
        vector<string> vec1;
        string t="";
        for(int i=0;i<text.length();i++)
        {
            if(text[i]!=' ')
            {
                t+=text[i];
            }
            else
            {
                vec.push_back(t);
                t="";
            }
        }
        vec.push_back(t);
        for(int i=0;i<vec.size()-2;i++)
        {
            if(vec[i]==first)
            {
                if(vec[i+1]==second)
                {
                    vec1.push_back(vec[i+2]);
                }
            }
        }

        return vec1; 
    }
};
