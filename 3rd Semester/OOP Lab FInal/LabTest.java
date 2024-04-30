
//Problem no 3

import java.util.*;


class Course {
    private String name_of_the_functioning_course;
    private int course_id;

    
    public Course(int course_id, String name_of_the_functioning_course) {
        this.course_id = course_id;
        this.name_of_the_functioning_course = name_of_the_functioning_course;
    }

    public int willGetCourseIdentification() {
        return course_id;
    }

    
    public void setCourseIdentification(int course_id) {
        this.course_id = course_id;
    }

   
    public String getNameOfTheFunctioningCourse() {
        return name_of_the_functioning_course;
    }

    
    public void setNameOfTheFunctioningCourse(String name_of_the_functioning_course) {
        this.name_of_the_functioning_course = name_of_the_functioning_course;
    }
}


class Department {
    private String dept_name;
    private List<Course> courses;

    
    public Department(String dept_name) {
        this.dept_name = dept_name;
        this.courses = new ArrayList<>();
    }

    
    public boolean exist(int course_id) {
        for (Course course : courses) {
            if (course.willGetCourseIdentification() == course_id) {
                return true;
            }
        }
        return false;
    }

    
    public boolean insert(int course_id, String name_of_the_functioning_course) {
        if (exist(course_id)) {
            return false;
        }

        Course newCourse = new Course(course_id, name_of_the_functioning_course);
        courses.add(newCourse);
        return true;
    }

    
    public boolean remove(int course_id) {
        for (Course course : courses) {
            if (course.willGetCourseIdentification() == course_id) {
                courses.remove(course);
                return true;
            }
        }
        return false;
    }

    
    public String findCourse(int course_id) {
        for (Course course : courses) {
            if (course.willGetCourseIdentification() == course_id) {
                return course.getNameOfTheFunctioningCourse();
            }
        }
        return null;
    }

    
    public void print() {
        System.out.println("Department: " + dept_name);
        for (Course course : courses) {
            System.out.println("ID: " + course.willGetCourseIdentification() + ", Name: "
                    + course.getNameOfTheFunctioningCourse());
        }
    }
}


public class LabTest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        System.out.print("Enter the department name: ");
        String dept_name = scanner.nextLine();

       
        Department department = new Department(dept_name);

        int choice;
        do {
            
            System.out.println("\nThe program can perform the following:");
            System.out.println("1- Insert a course");
            System.out.println("2- Remove a course");
            System.out.println("3- Search for a course");
            System.out.println("4- Print courses");
            System.out.println("5- Exit");
            System.out.print("Please enter your selection: ");

           
            choice = scanner.nextInt();
            scanner.nextLine(); 

            switch (choice) {
                case 1:
                    // Insert a new course
                    System.out.print("Enter course ID: ");
                    int course_id = scanner.nextInt();
                    scanner.nextLine(); 
                    System.out.print("Enter course name: ");
                    String name_of_the_functioning_course = scanner.nextLine();
                    if (department.insert(course_id, name_of_the_functioning_course)) {
                        System.out.println("Course inserted successfully.");
                    } else {
                        System.out.println("Course with the same ID already exists.");
                    }
                    break;
                case 2:
                   
                    System.out.print("Enter course ID to remove: ");
                    int courseIdToRemove = scanner.nextInt();
                    scanner.nextLine(); // Consume newline
                    if (department.remove(courseIdToRemove)) {
                        System.out.println("Course removed successfully.");
                    } else {
                        System.out.println("Course with the specified ID does not exist.");
                    }
                    break;
                case 3:
                    // Search for a course
                    System.out.print("Enter course ID to search: ");
                    int courseIdToSearch = scanner.nextInt();
                    scanner.nextLine(); // Consume newline
                    String courseName = department.findCourse(courseIdToSearch);
                    if (courseName != null) {
                        System.out.println("Course found: " + courseName);
                    } else {
                        System.out.println("No course found with the specified ID.");
                    }
                    break;
                case 4:
                    
                    department.print();
                    break;
                case 5:
                  
                    System.out.println("Exiting the program...");
                    break;
                default:
                    System.out.println("Invalid choice. Please enter a number between 1 and 5.");
                    break;
            }
        } while (choice != 5);

       
        scanner.close();
    }
}
