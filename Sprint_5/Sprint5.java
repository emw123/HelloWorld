import java.util.Scanner;
import java.util.HashSet;

//Classes
public class Sprint5 {

    //Variables
    static void variables(){
        String FirstName = "Emma";
        System.out.println(FirstName);
        String LastName = "Ward";
        System.out.println(LastName);
        System.out.println("");
    }

    //Expressions
    static void expressions(){
        int score; 
        score = 90 + 27 - 19;
        int newscore;
        newscore = score + 37;
        System.out.println(score);
        System.out.println("");
        System.out.println(newscore);
        System.out.println("");
    }

    //Conditionals
    static void conditionals(){
        Scanner x = new Scanner(System.in);
        System.out.println("Please enter a number: ");
        Scanner y = new Scanner(System.in);
        System.out.println("Please enter another number: ");

        int FirstNumber = x.nextInt();
        int LastNumber = y.nextInt();
        if (FirstNumber > LastNumber) {
            System.out.println("The first number is greater than the second number");
            System.out.println("");
        }else {
            System.out.println("The second number is greater than the first number.");
            System.out.println("");
        }
    }

    //Loops
    static void loops(){
        int i = 0;
        do {
            System.out.println(i);
            i++;
        }
        while (i < 10);

        for (int x = 0; x < 20; x = x + 2) {
            System.out.println("");
            System.out.println(x);
        }

    }
    
    //Data Structures
    static void datastructures() {
        HashSet<String> languages = new HashSet<String>();
        languages.add("Python");
        languages.add("Java");
        languages.add("C and C++");
        languages.add("C#");
        languages.add("JavaScript");
        languages.add("SQL");
        languages.add("PHP");
        languages.add("Go");
        languages.add("Kotlin");
        languages.add("MATLAB");
        languages.add("R");
        languages.add("Swift");
        languages.add("Rust");
        System.out.println(languages);
    } 

    //Functions
    public static void main(String[] args) {
        //variables();
        //expressions();
        //conditionals();
        //loops();
        datastructures();
  }
}