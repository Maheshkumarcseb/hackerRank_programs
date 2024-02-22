// import java.util.*;
// import java.io.*;
// import java.util.HashMap;

// class Map_{
//     public static void main(String []argh)
//     {
//         Scanner in = new Scanner(System.in);
//         System.out.println("enter the number of entries in the phone book");
//         int n = in.nextInt();
//         in.nextLine();

//         Map<String, Integer> phoneBook = new HashMap<>();

//         // Input names and corresponding phone numbers
//         for(int i = 0; i < n; i++)
//         {
//             System.out.println("enter the name");
//             String name = in.nextLine();
//             System.out.println("enter the phone number");
//             int phone = in.nextInt();
//             in.nextLine();
//             System.out.println("enter the name to print their information");
//             phoneBook.put(name, phone);
//         }

//         // Process queries
//         while(in.hasNext())
//         {
//             String s = in.nextLine();
//             if (phoneBook.containsKey(s)) {
//                 System.out.println(s + "=" + phoneBook.get(s));
//             } else {
//                 System.out.println("Not found");
//             }
//         }
//     }
// }







//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Map_ {
    public static void main(String [] args) throws Exception {
        /* Read input and save as entries in a HashMap */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("enter the no of entities");
        int n = Integer.valueOf(br.readLine());
        HashMap<String, Integer> map = new HashMap<>();
        while (n-- > 0) {
            System.out.println("enter name");
            String name = br.readLine();
            System.out.println("enter 8 digit ph no");
            int phone   = Integer.valueOf(br.readLine());
            System.out.println("enter name to be display");
            map.put(name, phone);
        }
        
        /* Read each query and check if its in our HashMap */
        String s;
        while((s = br.readLine()) != null) {
            if (map.containsKey(s)) {
                System.out.println(s + "=" + map.get(s));
            } else {
                System.out.println("Not found");
            }
        }
        
        br.close();
    }
}
