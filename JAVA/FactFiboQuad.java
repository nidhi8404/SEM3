import java.util.*;

public class FactFiboQuad{
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the value of n");
        int n = sc.nextInt();
        int fact=1;
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        System.out.println("fact="+fact);
        System.out.println("");

        System.out.println("Enter the value of f");
        int f=sc.nextInt();
        int n1= 0;
        int n2=1;
        for(int i=0;i<=f;i++){
            int temp = n1+n2;
            n1=n2;
            n2=temp;
            temp=n1;
            System.out.println(n1);
        }
        System.out.println("");

        double r1, r2;
        System.out.print("Enter value for a in Eqn : ");
        double a = sc.nextInt();
        System.out.println("");
        System.out.print("Enter value for b in Eqn : ");
        double b = sc.nextInt();
        System.out.println("");
        System.out.print("Enter value for c in Eqn : ");
        double c = sc.nextInt();
        System.out.println("");
        r1 = -b + Math.sqrt((b * b - 4 * a * c))/(2*a);
        r2 = -b - Math.sqrt((b * b - 4 * a * c))/(2*a);
        System.out.println("The algebraic roots of the equation are " + r1 + " and " + r2 + ".");


    }
}