Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".

  class Solution {
    public String removeOuterParentheses(String s) {
        StringBuilder res= new StringBuilder();
        int c=0;
        for(int i=0;i<s.length()-1;i++){
            if(s.charAt(i)=='(')
            {
                if(c>0){
                    res.append('(');
                }
                c+=1;
            }
            else
            {
                c--;
                if(c>0){
                    res.append(')');
                }
            }
        }
        return res.toString();
    }
}
