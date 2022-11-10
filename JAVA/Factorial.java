public class Main {
	public static void factorial (int n){
		if(n<0){
		System.out.print("Invalid");
		return;
	}
    int fact= 1;
    for(int i=n;i>=1;i--){
    	fact=fact*i;
    }
  System.out.print(fact);
    return ;
	}
	public static void main(String[] args) {
	int n= 5;
	factorial(n);
	
//    System.out.print(fact);
//	System.out.print(fact);	  
	}
}
