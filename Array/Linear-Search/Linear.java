import java.util.*;

class Linear{
    static int linearSearch(int[] nums, int size ,int target){
        for(int i=0;i<size;i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int size;
        System.out.println("Enter the size of an array: ");
        size = sc.nextInt();

        int nums[] = new int[size];
        for (int i = 0; i < size; i++) {
            nums[i] = sc.nextInt();
        }

        int target;
        System.out.println("Enter the target value");
        target = sc.nextInt();

        int result = linearSearch(nums, size, target);

        System.out.println("The target value is located at index: " + result);

        sc.close();
    }
}