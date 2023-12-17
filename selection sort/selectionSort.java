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
            int val = scn.nextInt();
            arr.add(val);
        }
        System.out.println("Input array: " + arr);
        for (int i = 0; i < n; i++) {
            int small = 1000000000;
            int index = 0;
            for (int j = i; j < n; j++) {
                if (small > arr.get(j)) {
                    small = arr.get(j);
                    index = j;
                }
            }
            int temp = arr.get(i);
            arr.set(i, arr.get(index));
            arr.set(index, temp);
        }
        System.out.println("Sorted array: " + arr);
    }
}
