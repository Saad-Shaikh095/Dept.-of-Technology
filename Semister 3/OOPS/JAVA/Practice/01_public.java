class Student {
    public string name;
    public int rollNo;

    public void displayInfo(){
        system.out.println("Name: " +name);
        system.out.println("Roll No: "+rollNo);
    }
}

public class Main {
    public static void main (string[] args){
        Student s = new Student ();
        s.name = "Rahul";
        s.rollNo = 101;
        s.displayInfo();
    }
}