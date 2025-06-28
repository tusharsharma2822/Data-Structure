import java.util.*;

public class MaxConsecutive {
    static int maxConsecutiveOnes(int[] nums){
        int count = 0, result = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1) {
                count += 1;
                result = Math.max(result, count);
            }
            else{
                count = 0;
            }
        }


        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int size;
        System.out.print("Enter the size of an array: ");
        size = sc.nextInt();

        int[] nums = new int[size];
        for(int i=0;i<size;i++){
            nums[i] = sc.nextInt();
        }

        int result = maxConsecutiveOnes(nums);

        System.out.println("The number of maximum consecutive ones: " + result);

        sc.close();
    }
}
