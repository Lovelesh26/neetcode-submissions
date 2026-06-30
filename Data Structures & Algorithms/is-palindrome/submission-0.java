class Solution {
    public boolean isPalindrome(String s) {
        int i =0, j = s.length()-1;

        while(i<j){
          int asci1 = -1, asci2 = -1;
          if(s.charAt(i)>='A' && s.charAt(i)<='Z') asci1 = s.charAt(i)-'A';
          else if(s.charAt(i)>='a' && s.charAt(i)<='z') asci1 = s.charAt(i)-'a';
          else if(s.charAt(i)>='0' && s.charAt(i)<='9') asci1 = s.charAt(i)-'0';

          if(s.charAt(j)>='A' && s.charAt(j)<='Z') asci2 = s.charAt(j)-'A';
          else if(s.charAt(j)>='a' && s.charAt(j)<='z') asci2 = s.charAt(j)-'a';
          else if(s.charAt(j)>='0' && s.charAt(j)<='9') asci2 = s.charAt(j)-'0'; 


            // Skip non-alphanumeric characters
            if (asci1 == -1) {
                i++;
                continue;
            }

            if (asci2 == -1) {
                j--;
                continue;
            }
            
          if(asci1 != asci2) return false;
          i++;
          j--;
 
        }
    return true;
    }
}
