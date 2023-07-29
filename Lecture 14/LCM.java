import java.util.*;

public class LCM {
    private static String lcm;
    private static int temp1;
    private static int rem;
    // private static int rem;

    /**
     * @param args
     */
    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            
            System.out.println("enter 2 num");
            int num1 = sc.nextInt();
            int num2 = sc.nextInt();
            temp1 = num1;
            var temp2 = num2;
            int divd, divs, lcm;
            divd = Math.max(num1, num2);
            divs = Math.min(num1, num2);
            while (divd % divs != 0) {

                rem = divd % divs;
                divd = divs;
                divs = rem;
            }
            lcm = (temp1 % temp2) / rem;
        }
        System.out.println("lcm of number = " + lcm);
    }
}