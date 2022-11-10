import java.util.Scanner;
public class salary
{
public static void main(String args[])
{
double basic,da,hra,gross;
System.out.println("Enter Basic salary of the employee\n");
Scanner obj1=new Scanner(System.in);
basic=obj1.nextDouble();
da=40*basic/100;
hra=20*basic/100;
gross= basic+da+hra;
System.out.println("The D.A of the basic salary of the employee is:" +da);
System.out.println("The H.R.A of the basic salary of the employee is:" +hra);
System.out.println("The Gross salary of the employee is:" +gross);
}
}
