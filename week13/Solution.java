package week13;

class Solution {
    public int solution(String s) {
        int answer = Integer.MAX_VALUE;
        if(s.length() < 2){
            return s.length();
        }
        for(int i = 1; i <= s.length()/2; i++) {
            String subStr = s.substring(0, i);
            String output = "";
            int count = 1;
            int lastIndex = 0;
                
            for(int j = i ; j + i <= s.length(); j += i) {
                // 비교
                String strToCompare = s.substring(j, j + i);
                //문자열 저장하기

                if(subStr.equals(strToCompare)) {
                    count++; //문자열이 같으면 증가
                    } else {
                        if(count > 1) {
                            output += count;
                            count = 1;
                        }
                        output += subStr;
                        subStr = strToCompare;
                    }
                    lastIndex = j + i;
                }
                    if(count > 1) output += count;
                    output += subStr;

                    if(lastIndex < s.length()) {
                        output += s.substring(lastIndex);
                    } // 더 짧은 길이로
                    answer = Math.min(answer, output.length());
                }
                return answer;
            }
        }
