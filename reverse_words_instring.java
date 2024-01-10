Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
  class Solution {
    public String reverseWords(String s) {
         s=s.trim();
        StringBuilder sb = new StringBuilder();
        for(int i=s.length()-1; i>=0; i--){
            int sub = i;
            while(i>=0 && s.charAt(i)!=' '){
                i--;
            }
            String word = s.substring(i+1,sub+1);
            if(word.equals(""))
            {
            continue;
            }
            else{
            sb.append(word).append(" ");
            }
        }
        return sb.toString().trim();
    }
}
