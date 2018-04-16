////////////////////////////////////////////
import java.util.Scanner;

public class Main {
	static Scanner sc = new Scanner(System.in);
	static char[] str;
	static boolean hasL = false;
	static int count = 1, res = 0;
	public static void main(String[] args) {
		String s = sc.next();
		str = s.toCharArray();
		for(int i = 0; i < str.length; i++) {
			if(str[i] == 'L') {
				hasL = true; break;
			}
		}
		Try(0);
		System.out.print(res);
	}
	public static void Try(int i) {
		if(i == str.length) {
			if(hasL) {
				res+=count;
			}
			return;
		}
		if(str[i] != '_') Try(i+1);
		else {
			if(!hasL) {
				hasL = true;
				str[i] = 'L';
				if(!check(i)) Try(i+1);
				hasL = false;
				str[i] = '_';
			}
			for(int j = 0; j <= 1; j++) {
				if(j == 0) {
					 str[i] = 'A';
					 if(!check(i)) {count*=5; Try(i+1); count/=5;}
					 str[i] = '_';
				}
				else {
					str[i] = 'B';
					if(!check(i)) {count*=21; Try(i+1); count/=21;}
					str[i] = '_';
				}
			}
		}
	}
	public static boolean check(int i) {
		return (isConsonant(i-1) == -1 && isConsonant(i) == -1 && isConsonant(i+1) == -1)
				|| (isConsonant(i-1) == 1 && isConsonant(i) == 1 && isConsonant(i+1) == 1)
				|| (isConsonant(i-2) == -1 && isConsonant(i-1) == -1 && isConsonant(i) == -1)
				|| (isConsonant(i-2) == 1 && isConsonant(i-1) == 1 && isConsonant(i) == 1)
				|| (isConsonant(i) == -1 && isConsonant(i+1) == -1 && isConsonant(i+2) == -1)
				|| (isConsonant(i) == 1 && isConsonant(i+1) == 1 && isConsonant(i+2) == 1);
	}
	public static int isConsonant(int i) {
		if(i<0 || i >= str.length || !Character.isAlphabetic(str[i])) return 0;
		if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'U' || str[i] == 'O') return 1;
		else return -1;
	}
}
