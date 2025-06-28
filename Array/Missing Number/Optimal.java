import java.util.*;

class Optimal{
    static int missingNumber(int[] nums){
        int n = nums.length;
        int totalSum = (n*(n+1))/2;
        int sum = 0;
        for (int i=0;i<n;i++) {
            sum += nums[i];
        }
        return totalSum - sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int size;
        System.out.print("Enter the size of an array: ");
        size = sc.nextInt();

        int[] nums = new int[size];
        for (int i = 0; i < size; i++) {
            nums[i] = sc.nextInt();
        }

        int result = missingNumber(nums);

        System.out.println("The missing number in an array is: " + result);

        sc.close();
    }
}