//implementation of Adjacency Matrix for undirected graph and directed graph


   /*
      This code is for constructing adjacency matrix for undirected graph, with minor change it will also work for directed graph.
   */
   #include <bits/stdc++.h>
   using namespace std;
   int main()
   {
       // where n is number of vertices and m is number of edges
   int n, u, v, m;
   cin>> n>> m;
   int A[n][n];
   for(int i=0; i<n; i++)
   {
        for(int j=0; i<n; j++)
            A[i][j]=0;
   } 
   for(int i=0; i< m; i++)
   {
       cin>> u>> v;
       A[u][v]=1;
       A[v][u]=1; // In case of directed graph this statement is removed. 
   }
   // After above loop Adjcency matrix is ready.
    for(int i=0; i<n; i++)
   {
        for(int j=0; j<n; j++)
            cout<<A[i][j]<<" ";
        cout << "\n";
   } 
   return 0;
 }

