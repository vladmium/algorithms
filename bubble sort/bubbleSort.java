import java.util.Scanner;
import java.util.ArrayList;

class bubbleSort {
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
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (arr.get(j) > arr.get(j + 1)) {
                    int temp = arr.get(j);
                    arr.set(j, arr.get(j + 1));
                    arr.set(j + 1, temp);
                }
            }
        }
        System.out.println("Sorted array: " + arr);
    }

}
