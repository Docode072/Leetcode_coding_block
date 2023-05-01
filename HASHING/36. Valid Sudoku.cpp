class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        unordered_map<string , int>m;
        for(int i = 0; i<9; i++){
            for(int j = 0; j< 9; j++){
                if(b[i][j] != '.'){
                    string row = "row"+to_string(i)+to_string(b[i][j]);
                    string col = "col"+to_string(j)+to_string(b[i][j]);
                    string box = "box"+to_string(i/3*3+j/3)+to_string(b[i][j]);
                    if(m[row] || m[col]  ||  m[box] ){
                       return false;
                  }
                  else{
                        m[row]++;
                        m[col]++;
                        m[box]++;
                  }
               }
                
            }
        }
        return true;
    }
};
