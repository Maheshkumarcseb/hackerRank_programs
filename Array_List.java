import java.io.*;
import java.util.*;

public class Array_List {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the no of element");
        int n = sc.nextInt();
        String s = sc.nextLine();//it will consume the newline character left in the input buffer after reading the integer n
        ArrayList<ArrayList<String>> a = new ArrayList<ArrayList<String>>(n);
        System.out.println("enter the "+n+" line element");
        for (int i = 0; i < n; i++) {
            s = sc.nextLine();
            a.add(i, new ArrayList<String>(Arrays.asList(s.split("\\s"))));
        }
        System.out.println("enter the no of queries");
        int m = sc.nextInt();
        for (int i = 0; i < m; i++) {
            System.out.println("enter the line no in which we have to search");
            int x = sc.nextInt();
            System.out.println("enter the index of element");
            int y = sc.nextInt();
            if (x <= a.size() && y < a.get(x-1).size() && y >= 0) {
                System.out.println(a.get(x-1).get(y));
            } else {
                System.out.println("ERROR!");
            }
        }
    }
}