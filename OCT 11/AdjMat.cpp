//An adjacency matrix is a 2D array of V x V vertices. Each row and column represent a vertex.

//If the value of any element a[i][j] is 1, it represents that there is an edge connecting vertex i and vertex j.


#include <iostream>
using namespace std;

struct Graph {
   
  int** adjMat;
  int numVert;

void  CGraph(int num) {
    numVert = num;
    adjMat = new int*[numVert];
    for (int i = 0; i < numVert; i++) {
      adjMat[i] = new int[numVert];
      for (int j = 0; j < numVert; j++)
        adjMat[i][j] = 0;
    }
  }

  void addEdge(int i, int j) {
    adjMat[i][j] = 1;
   
  }

 
  void display() {
    for (int i = 0; i < numVert; i++) {

      cout << i << " : ";
      for (int j = 0; j < numVert; j++)
        cout << adjMat[i][j] << " ";
      cout << "\n";
    }
  }

  
};

int main() {

int temp;
cout<<"enter dimension of matrix:\t";
cin>>temp;
Graph p;

 p.CGraph(temp);
 cout<<endl;

 int na;
 cout<<"enter number of edges:\t";
 cin>>na;
 while (na--){
 int i,j;
 cout<<"enter value of vertices:\t";
 cin>>i>>j;
 p.addEdge(i,j);

 }


p.display();

}