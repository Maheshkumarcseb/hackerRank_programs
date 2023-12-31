import java.util.Scanner;

public class Formatted {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                // System.out.println("input a string value");
                String s1=sc.next();
                // System.out.println("enter an integer value");
                int x=sc.nextInt();
               System.out.printf("%-15s%03d%n", s1, x);  
               //"%-15s" means that within 15 blank space, the String "s1" will be filled in the left.
                //%03d" means that within 3 0s, the integer"x" will be filled in the right.
            }
            System.out.println("================================");

    }
}



