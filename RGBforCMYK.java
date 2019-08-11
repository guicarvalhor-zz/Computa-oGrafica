import java.util.Scanner;
import java.lang.Math;

public class MyClass {
    public static void main(String args[]) {
   
    double red, green, blue;
    
    Scanner ler = new Scanner(System.in);
    
    System.out.println("Transformar RGB em CMYK");
   
    System.out.println("Entre com o valor do Red:");
    red = ler.nextDouble();
    System.out.println("Entre com o valor do Green:");
    green = ler.nextDouble();
    System.out.println("Entre com o valor do Blue:");
    blue = ler.nextDouble();
    
    double red1 = red / 255;
    double green1 = green / 255;
    double blue1 = blue / 255;
    
    double max = (Math.max(Math.max(red1, green1), blue1));
    double K = 1 - max;
    double C = (1 - red1 - K) / (1 - K);
    double M = (1 - green1 - K) / (1 - K);
    double Y = (1 - blue1 - K) / (1 - K);

    double CMYK[] = {C, M, Y, K};
    
    String cmyk = "CMYK = (" + Math.round(C * 100) + " , " + Math.round(M * 100) + " , " + Math.round(Y * 100) + " , " + Math.round(K * 100) + ")";
    System.out.println(cmyk);
}
}