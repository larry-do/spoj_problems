import java.util.Scanner;

public class Main {
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		String result = "";
		int problems = 0, sc = 0;
		for(int i = 0; i < n; i++) {
			String name = scan.next();
			int p = 0, s = 0;
			for(int j = 0; j < 4; j++) {
				int a = scan.nextInt();
				int b = scan.nextInt();
				if(b != 0) {
					p++;
					s+=((a-1)*20+b);
				}
			}
			if((p > problems) || (p == problems && s < sc)) {
				result = name;
				problems = p;
				sc = s;
			}
		}
		System.out.print(result + " " + problems + " " + sc);
	}
	
}