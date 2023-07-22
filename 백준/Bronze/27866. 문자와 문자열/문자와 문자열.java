import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String h = scanner.next();
		int i = scanner.nextInt();
		
		System.out.println(h.charAt(i-1));
	}
}