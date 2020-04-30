public class Main{
    public static void main(String[]args){

         method1();

         try{
            method2();
         }catch(NullPointerException e){
             e.printStackTrace();
         }

         System.out.println();
         method3(-1);
    }

    // has it's own try-catch
    static void method1(){

        try {
            int [] x = {1,2,3,4,5};

            int y = x[6];

        } catch (ArrayIndexOutOfBoundsException e) {
            e.printStackTrace();
            //System.out.println(e.getMessage());
        }
    }

    // Throws the exception to where it was called
    static void method2() throws NullPointerException{
        Integer num = null;

        num.intValue();
    }

    // Uses the custom unchecked exception class
    static void method3(int num){
        try{
            if(num < 0) throw new CustomException(num);
        }catch(CustomException e){
            System.out.println(e.getMessage()  + " you can not use a number less than 0");
            e.printStackTrace();
        }
    }
}