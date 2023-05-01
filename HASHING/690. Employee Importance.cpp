// 1->approach

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int result = 0;
        for(auto& emp : employees){
            if(emp-> id == id){
                result = emp->importance;;
                if(!emp->subordinates.empty()){
                    for(auto& s : emp->subordinates){
                        result += getImportance(employees, s);
                    }
                }
                return result;
            }
        }
        return result;
    }
};

// 2--> approach
// using BFS

class Solution {
public:
    int getImportance(vector<Employee*> employ, int id) {
        map<int , Employee*>m; int imp = 0;
        for(auto ep : employ){
            m[ep->id] = ep;
        }
        queue<Employee*>q;
        q.push(m[id]);
        // bfs traveral
        while(!q.empty()){
            auto emp = q.front(); q.pop();
            imp += emp->importance;

            for(auto i : emp->subordinates){
                q.push(m[i]);
            }
        }
        return imp;
    }
};
