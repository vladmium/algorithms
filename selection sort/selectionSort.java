import java.util.Scanner;
import java.util.ArrayList;

public class selectionSort {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        System.out.print("Enter size of your array: ");
        int n = scn.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 1; i < n + 1; i++) {
            if (i == 1) {
                System.out.print("Enter 1st element: ");
            } else if (i == 2) {
                System.out.print("Enter 2nd element: ");
            } else if (i == 3) {
                System.out.print("Enter 3rd element: ");
            } else {
                System.out.print("Enter " + i + "th element: ");
            }
            int ele = scn.nextInt();
            arr.add(ele);
        }
        System.out.println("Input array: " + arr);
        ArrayList<Integer> ans = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int mini = 1000000000;
            int mini_j = 0;
            for (int j = 0; j < n; j++) {
                if (mini > arr.get(j)) {
                    mini = arr.get(j);
                    mini_j = j;
                }
            }
            ans.add(mini);
            arr.set(mini_j, 1000000000);
        }
        System.out.println("Sorted array: " + ans);
    }
}
