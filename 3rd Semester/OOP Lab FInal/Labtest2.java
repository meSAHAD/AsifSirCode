import java.util.Scanner;
 class Course {
    private String name;
    private int id;

    public Course(String name, int id) {
        this.name = name;
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }
}


class Department {
    private String deptName;
    private List<Course> courses;

    public Department(String deptName) {
        this.deptName = deptName;
        this.courses = new ArrayList<>();
    }

    public boolean exists(int id) {
        for (Course course : courses) {
            if (course.getId() == id) {
                return true;
            }
        }
        return false;
    }

    public boolean insert(int id, String name) {
        if (!exists(id)) {
            courses.add(new Course(name, id));
            return true;
        }
        return false;
    }

    public boolean remove(int id) {
        for (Course course : courses) {
            if (course.getId() == id) {
                courses.remove(course);
                return true;
            }
        }
        return false;
    }

    public String findCourse(int id) {
        for (Course course : courses) {
            if (course.getId() == id) {
                return course.getName();
            }
        }
        return "Course not found";
    }

    public void print() {
        System.out.println("Department: " + deptName);
        for (Course course : courses) {
            System.out.println("ID: " + course.getId() + ", Name: " + course.getName());
        }
    }
}



public class LabTest2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter department name: ");
        String deptName = scanner.nextLine();
        Department department = new Department(deptName);

        while (true) {
            System.out.println("\nMenu:");
            System.out.println("1. Insert course");
            System.out.println("2. Remove course");
            System.out.println("3. Search for a course");
            System.out.println("4. Print courses");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    System.out.print("Enter course name: ");
                    String courseName = scanner.nextLine();
                    System.out.print("Enter course ID: ");
                    int courseId = scanner.nextInt();
                    if (department.insert(courseId, courseName)) {
                        System.out.println("Course inserted successfully.");
                    } else {
                        System.out.println("Course with the same ID already exists.");
                    }
                    break;
                case 2:
                    System.out.print("Enter course ID to remove: ");
                    int idToRemove = scanner.nextInt();
                    if (department.remove(idToRemove)) {
                        System.out.println("Course removed successfully.");
                    } else {
                        System.out.println("Course not found.");
                    }
                    break;
                case 3:
                    System.out.print("Enter course ID to search: ");
                    int idToSearch = scanner.nextInt();
                    System.out.println("Course: " + department.findCourse(idToSearch));
                    break;
                case 4:
                    department.print();
                    break;
                case 5:
                    System.out.println("Exiting program...");
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice. Please enter a number between 1 and 5.");
            }
        }
    }
}
