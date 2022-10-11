import java.util.* ;
import java.io.*; 

public class Solution {
    
    public static int f(int i, int j,int arr[]){
        if(i==j) return 0;
        int mini= Integer.MAX_VALUE;
        for(int k=i;k<j; k++){
 int steps = arr[i-1] * arr[k] * arr[j] + f(i,k,arr) + f(k+1,j,arr);
            if(steps<mini) 
            mini = steps;          
        }
        return mini;
    } 
    
    
	public static int matrixMultiplication(int[] arr , int N) {
		// Write your code here   
        return f(1, N-1, arr);
	}
}
