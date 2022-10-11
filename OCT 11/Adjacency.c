//An adjacency matrix is a 2D array of V x V vertices. Each row and column represent a vertex.

//If the value of any element a[i][j] is 1, it represents that there is an edge connecting vertex i and vertex j.

struct Adjacency
{

   int numVert;
    int **adjMat;
    
    Adjacency(int vert){
   numVert=vert;
   adjMat = new int *(numVert);
   for (int i = 0; i < numVert; i++)
   {
    adjMat[i]=new int (numVert);

   }
   

}
};

int main(){



    return 0;
}
