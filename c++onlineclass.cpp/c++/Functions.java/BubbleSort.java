public class BubbleSort {
    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        // Outer loop for each pass
        for (int i = 0; i < n-1; i++) {
            // Inner loop for comparing adjacent elements
            for (int j = 0; j < n-i-1; j++) {
                // Swap if current element is greater than the next
                if (arr[j] > arr[j+1]) {
                    // Swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        System.out.println("Array before sorting:");
        printArray(arr);
        
        bubbleSort(arr);
        
        System.out.println("Array after Bubble Sort:");
        printArray(arr);
    }
    
    private static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
