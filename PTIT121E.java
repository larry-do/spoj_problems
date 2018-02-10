import java.util.Scanner;
import java.util.Vector;
public class Main {
	
	
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		String str = scan.next();
		Vector<Integer> vect = new Vector<Integer>();
		for(int i = 0; i < str.length(); i++) {
			if(str.charAt(i) == '(') vect.add(0);
			if(str.charAt(i) == 'C') vect.add(12);
			if(str.charAt(i) == 'O') vect.add(16);
			if(str.charAt(i) == 'H') vect.add(1);
			if(str.charAt(i) == ')') {
				int j = vect.size() - 1;
				int sum = 0;
				while(vect.elementAt(j) != 0) {
					sum+=vect.elementAt(j);
					j--;
				}
				vect.subList(j, vect.size()).clear();
				vect.add(sum);
			}
			if(Character.isDigit(str.charAt(i))) {
				vect.setElementAt(vect.lastElement() * Character.getNumericValue(str.charAt(i)), vect.size() - 1);
			}
		}
		int result = 0;
		for(int i = 0; i < vect.size(); i++) {
			result+=vect.elementAt(i);
		}
		System.out.println(result);
	}
	
	
}