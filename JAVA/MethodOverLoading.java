public class MethodOverLoading
{

static int Method1(int x, int y)

 {

  return x + y;

}



static double Method2(double x, double y)

 {

  return x + y;

}

 public static void main(String[] args) 

{

  int Num1 = Method1(8, 5);

  double Num2 = Method2(4.3, 6.26);

  System.out.println("int: " + Num1);

  System.out.println("double: " + Num2);

}

}
