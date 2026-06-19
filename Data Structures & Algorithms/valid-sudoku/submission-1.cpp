class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> box[9];
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int box_index = ((i/3)*3) + (j/3);
                char val = board[i][j];
                if(val == '.'){
                    continue;
                }
                if(rows[i].count(val)) return false;
                if(cols[j].count(val)) return false;
                if(box[box_index].count(val)) return false;
                
                rows[i].insert(val);
                cols[j].insert(val);
                box[box_index].insert(val);
        }

    }
    return true;
    }

    
};
