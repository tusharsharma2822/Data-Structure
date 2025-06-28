import java.util.*;

class SingleNumber {
    static int singleNumber(int[] nums, int size){
        int result = 0;
        for (int i = 0; i < size; i++) {
            result ^= nums[i];
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int size;
        System.out.print("Enter the size of an array: ");
        size = sc.nextInt();

        int[] nums = new int[size];
        for (int i = 0; i < size; i++){
            nums[i] = sc.nextInt();
        }

        int result = singleNumber(nums, size);

        System.out.println("The single number present in an array: " + result);

        sc.close();
    }
}