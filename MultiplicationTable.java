
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;


public class MultiplicationTable {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("enter the value of N");

        int N = Integer.parseInt(bufferedReader.readLine().trim());

        bufferedReader.close();
    
    for(int i=1;i<=10;i++)
     {
    System.out.printf("%d x %d = %d",N,i,N*i);
    System.out.println();
      }
}
}
