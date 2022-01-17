void rotate(vector<vector<int>>& matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    
   for(int i=0;i<n;i++)
   {
     for(int j=i;j<n;j++)
     {
         swap(matrix[i][j],matrix[j][i]);
     }
   }
   
   for(int j=0;j<n;j++)
   {
       for(int i=0;i<n/2;i++)
       {
           swap(matrix[i][j],matrix[n-i-1][j]);
       }
   }
}