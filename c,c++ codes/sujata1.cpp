/*      --: N Queen Problem :--     */
#include<bits/stdc++.h>
using namespace std;

// Display the board after placing the Queen
void display(vector<vector<bool>>&board){
    for(vector<bool> cell : board){
        for(bool val : cell){
            if(val)
                cout<<"Q ";
            else
                cout<<"X ";
        }
        cout<<endl;
    }
}

// Checking if the path is safe or not
bool isSafe(vector<vector<bool>>&board, int row, int col){
    // Row checking
    for(int i=0;i<row;i++){
        if(board[i][col])
            return false;
    }

    // Left Diagonal Checking
    int leftMax = min(row,col);
    for(int i=1;i<=leftMax;i++){
        if(board[row-i][col-i])
            return false;
    }
    // cout<<"row="<<row<<"column="<<col<<endl;
    // Right Diagonal Checking
    int maxCol = board[0].size();
    int rightMax = min(row,(maxCol-col)-1);
    // cout<<"maxcol="<<maxCol<<"rightMax="<<rightMax<<endl;
    for(int i=1;i<=rightMax;i++){
        // cout<<"i="<<i;
        if(board[row-i][col+i])
            return false;
    }
    // cout<<"success";
    return true;
}
// Queen placing
int queen(vector<vector<bool>> board,int row){
    // Base Case
    if(row==(board.size())){
        // Print the full board where the queen is placed
        display(board);
        cout<<endl;
        return 1;
    }

    // Counting the number of ways
    int count = 0;

    for(int col=0;col<(board.size());col++){
        // Place the Queen if it is safe
        if(isSafe(board,row,col)){
            board[row][col] = true;
            count = count + queen(board,row+1);
            // Erase all the path is set
            board[row][col] = false;
        }
    }

    return count;
}

/* In nQuee() the segmentation fault is occure CHECK IT*/
void nQueen(vector<vector<bool>>&board, int r,int c,int qNum){
    // Base Case
    if(qNum==0){
        display(board);
        cout<<endl;
        return;
    }
    // Check if the board is full or not
    if(r==board.size()){
        return;
    }
    // Column is over i<colMax
    if(c==board[0].size()){
        nQueen(board,r+1,0,qNum);
        return;
    }

    if(isSafe(board,r,c)){
        board[r][c]=true;
        nQueen(board,r+1,0,qNum-1); //0,1
        board[r][c]=false;
    }
    nQueen(board,r,c+1,qNum); 
}

int main()
{
    int n = 4;
    vector<vector<bool>> board (n,vector<bool>(n));
    // cout<<queen(board,0)<<endl;
    nQueen(board,0,0,n);
    cout<<endl;
    return 0;
}