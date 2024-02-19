import java.util.Scanner;
import java.lang.* ;
import java.util.LinkedList;

public class List {
    public static void main(String[] args) {
        /* Create and fill Linked List of Integers */
        Scanner scan = new Scanner(System.in);
        System.out.println("enter the number of element");
        int N = scan.nextInt();
        LinkedList<Integer> list = new LinkedList<>();
        System.out.println("enter "+N+" values");
        for (int i = 0; i < N; i++) {
            int value = scan.nextInt();
            list.add(value);
        }
        
        /* Perfrom queries on Linked List */
        System.out.println("enter no of queries");
        int Q = scan.nextInt();
        System.out.println("enter queries");
        for (int i = 0; i < Q; i++) {
            java.lang.String action = scan.next();
            if (action.equals("Insert")) {
                System.out.println("enter index at which element to be inserted and value of element");
                int index = scan.nextInt();
                
                int value = scan.nextInt();
                list.add(index, value);
            } else { // "Delete"
                System.out.println("enter the index from which element will be deleted");
                int index = scan.nextInt();
                list.remove(index);
            }
        }
        scan.close();
        
        /* Print our updated Linked List */
        for (Integer num : list) {
            System.out.print(num + " ");
        }
    }
}