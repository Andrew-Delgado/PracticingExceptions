public class CustomException extends Exception{

    private int message;

    public CustomException(int e){
        message = e;
    }

    public String getMessage(){
        return message + " is not valid";
    }

}