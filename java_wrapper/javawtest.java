/* javawtest.java */

public class javawtest {
    native int mult(int a, int b); /* (1a) */
    native int sum(int a, int b); /* (1b) */
    static public void main(String argv[]) {
            System.loadLibrary("jwtest");

            javawtest test = new javawtest(); /* (2) */

            int result = test.mult(5, 4);
            System.out.println("O resultado da multiplicação foi: " + result); 
            result = test.sum(5, 4);
            System.out.println("O resultado da soma foi: " + result);
    }
}

