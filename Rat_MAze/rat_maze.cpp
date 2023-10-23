# include <iostream>
# include <vector>
using namespace std;
bool isSafe(int newx,int newy, vector<vector<bool>> &visited,int maze[][4],int row,int col ,int srcx,int srcy){
      if((maze[newx][newy]==1)&& (visited[newx][newy]==false)&& (newx>=0&&newx<row)&&(newy>=0&&newy<col)){
       
        return true;
      }
      return false;
}
void printPath(int maze[][4],int row,int col,string &output,int srcx,int srcy,vector<vector<bool > > &visited){
   if(srcx == row-1 && srcy == col-1) {	//reached destination
   cout<<"Destintion :";
       cout << output << endl;
		return;
	}
  
    // Down going
    int newx=srcx+1;
    int newy=srcy;
    if(isSafe(newx,newy,visited,maze,row,col,newx,newy)){
      // visited ko true mark karna h;
      visited[newx][newy]=true;
      // output me path ko dalna h
      output.push_back('D');
      printPath(maze,row,col,output,newx,newy,visited);
      // backtracking 
       output.pop_back();
       visited[newx][newy]=false;
    }
    // going right
    newx=srcx;
    newy=srcy+1;
    if(isSafe(newx,newy,visited,maze,row,col,newx,newy)){
      // visited ko true mark karna h;
      visited[newx][newy]=true;
      // output me path ko dalna h
      output.push_back('R');
      printPath(maze,row,col,output,newx,newy,visited);
      // backtracking 
       output.pop_back();
       visited[newx][newy]=false;
    }

    // going left
    newx=srcx;
    newy=srcy-1;

     if(isSafe(newx,newy,visited,maze,row,col,newx,newy)){
      // visited ko true mark karna h;
      visited[newx][newy]=true;
      // output me path ko dalna h
      output.push_back('L');
      printPath(maze,row,col,output,newx,newy,visited);
      // backtracking 
       output.pop_back();
       visited[newx][newy]=false;
    }
  // going to up
  newx=srcy-1;
  newy=srcy;
   if(isSafe(newx,newy,visited,maze,row,col,newx,newy)){
      // visited ko true mark karna h;
      visited[newx][newy]=true;
      // output me path ko dalna h
      output.push_back('D');
      printPath(maze,row,col,output,newx,newy,visited);
      // backtracking 
       output.pop_back();
       visited[newx][newy]=false;
    }





}
int main(){
    int maze[4][4]={
        {1,0,0,0},
        {1,0,0,0},
        {1,1,1,1},
        {0,0,1,1}
        };
        int srcx=0;
        int srcy=0;
        int row=4;
        int col=4;
        vector<vector<bool > > visited(row, vector<bool>(col, false));	
        string output="";
        if(maze[0][0]==0){
            cout<<"Path does not exist"<<endl;
  
        }
        else{
           visited[srcx][srcy]=true;
         
           printPath(maze,row,col,output,srcx,srcy,visited);
          
        }


}