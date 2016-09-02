import java.util.Scanner;

public class Q1011{

	public static void main(String[] args) {
		
		double pi = 3.14159;
		double volume;
		Integer raio;
		
		raio = extracted().nextInt();
		
		volume = ((4.0/3) * pi);
		volume = volume * Math.pow(raio, 3);
		
		System.out.printf("VOLUME = %.3f", volume);
		System.out.printf("\n");

	}

	private static Scanner extracted() {
		return new Scanner(System.in);
	}

}
