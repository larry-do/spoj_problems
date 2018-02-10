import java.util.Arrays;
import java.util.Scanner;
import java.lang.StringBuilder;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
	
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		StringBuilder[] str = new StringBuilder[n];
		for(int i = 0; i < n; i++) {
			str[i] = new StringBuilder(scan.next());
		}
		for(int j = 0; j < str.length; j++) {
			int[] a = new int[26];
			for(int i = 0; i < 26; i++) {
				a[i] = i + 1;
			}
			System.out.println("Expression: " + str[j]);
			//Loại bỏ ++ hoặc -- tiền vị
			Pattern pattun = Pattern.compile("(\\+{2}|-{2})[a-z]");
			Matcher match = pattun.matcher(str[j]);
			while(match.find(0)) {
				if(str[j].charAt(match.start()) == '+') a[str[j].charAt(match.end() - 1) - 'a']++;
				else a[str[j].charAt(match.end() - 1) - 'a']--;
				str[j].delete(match.start(), match.end() - 1);
			}
			//Loại bỏ ++ hoặc -- hậu vị trên clone epression
			StringBuilder clone = new StringBuilder(str[j]);
			pattun = Pattern.compile("[a-z](\\+{2}|-{2})");
			match = pattun.matcher(clone);
			while(match.find(0)) {
				clone.delete(match.start()+1, match.end());
			}
			// tính result
			int result = a[clone.charAt(0) - 'a'];
			for(int i = 2; i < clone.length(); i++) {
				if(Character.isAlphabetic(clone.charAt(i))) {
					if(clone.charAt(i-1) == '+') 
						result+=a[clone.charAt(i) - 'a'];
					else if(clone.charAt(i-1) == '-') 
						result-=a[clone.charAt(i) - 'a'];
				}
			}
			System.out.println("value = " + result);
			//trên expression, tính giá trị sau của nhưng biến có -- hoặc ++ hậu vị
			pattun = Pattern.compile("[a-z](\\+{2}|-{2})");
			match = pattun.matcher(str[j]);
			while(match.find()) {
				if(str[j].charAt(match.start() + 1) == '+') a[str[j].charAt(match.start()) - 'a']++;
				else a[str[j].charAt(match.start()) - 'a']--;
			}
			//Tiện sắp xếp expression theo alphabet, in giá trị biến sau khi kết thúc expression theo alphabet đó
			char[] kitu = clone.toString().toCharArray();
			Arrays.sort(kitu);
			for(int i = 0; i < kitu.length; i++) {
				if(Character.isAlphabetic(kitu[i])) {
					System.out.println(kitu[i] + " = " + a[kitu[i] - 'a']);
				}
			}
		}
		
	}
	
}