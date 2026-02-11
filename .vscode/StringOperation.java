public class StringOperation {
    public static void main(String[] args) {
        String original = "------------- in need a ----------\n-- in deed";
        
        // 1) Insert "FRIEND" in blank spaces
        String withFriend = original.replaceAll("-+", "FRIEND ");
        
        // 2) Capitalize all string
        String capitalized = withFriend.toUpperCase();
        
        // 3) Lower case all string
        String lowerCase = withFriend.toLowerCase();
        
        // 4) Revert the string (reverse order)
        String reverted = new StringBuilder(withFriend).reverse().toString();
        
        // Print results
        System.out.println("Original string:\n" + original + "\n");
        System.out.println("1) After inserting FRIEND:\n" + withFriend + "\n");
        System.out.println("2) Capitalized version:\n" + capitalized + "\n");
        System.out.println("3) Lower case version:\n" + lowerCase + "\n");
        System.out.println("4) Reverted string:\n" + reverted);
    }
}