class Solution
{
public:
    // Brut force approachh
    //      void setZeroes(vector<vector<int>>& matrix) {
    //           map<int,int> rows;
    //           map<int , int> col;
    //           for(int i = 0 ; i < matrix.size(); i++){
    //              for(int j = 0 ; j < matrix[i].size(); j++){
    //                  if(matrix[i][j] == 0){
    //                      rows[i] = 0;
    //                      col[j] = 0;
    //                  }
    //              }
    //           }
    //           for(int i = 0 ; i < matrix.size() ; i++){
    //              for(int j = 0 ; j < matrix[i].size() ; j++){
    //                  if(rows.find(i) != rows.end() || col.find(j) != col.end()){
    //                      matrix[i][j] = 0;
    //                  }
    //              }
    //           }
    //     }
    void setZeroes(vector<vector<int>> &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();
        bool firstRow = false;
        bool firstCol = false;
        // check if there is zero in first row or not
        // same for column
        for (int i = 0; i < c; i++)
        {
            if (matrix[0][i] == 0)
            {
                firstRow = true;
                break;
            }
        }
        for (int i = 0; i < r; i++)
        {
            if (matrix[i][0] == 0)
            {
                firstCol = true;
                break;
            }
        }
        // Now traverese all the othere rows and col
        // and chck if any other 0 presetn
        //  if present mark in the first row and col
        // will modigy on the basis of it

        for (int i = 1; i < r; i++)
        {
            for (int j = 1; j < c; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for (int i = 1; i < r; i++)
        {
            for (int j = 1; j < c; j++)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        if (firstRow)
        {
            for (int i = 0; i < c; i++)
            {
                matrix[0][i] = 0;
            }
        }
        if (firstCol)
        {
            for (int i = 0; i < r; i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};