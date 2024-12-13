# Student-List-Management
This is a simple Student management Written in C programming language.The names are one word for use or separaated with an underscore.
A simple C program to manage student records, including adding, displaying, and deleting student information. The program stores the records in a text file for persistence.

Requirements
GCC (GNU Compiler Collection) or any other C compiler
Visual Studio Code (VS Code) or any other code editor
Steps to Run the Program
1. Install a C Compiler
Make sure you have a C compiler installed. You can use GCC, which is part of the MinGW (Minimalist GNU for Windows) package.

For Windows:
Download MinGW from the MinGW website.
Run the installer and select the following packages to install:
```
mingw32-base
mingw32-gcc-g++
```
Add the bin directory of your MinGW installation to your system's PATH environment variable. For example, C:\MinGW\bin.
To check if GCC is installed correctly, open a command prompt and type:
```
gcc --version
```
You should see the version information of GCC.

2. Install Visual Studio Code
Download Visual Studio Code from the official website.
Install the C/C++ extension by Microsoft:
Open VS Code.
Go to the Extensions view by clicking on the Extensions icon in the Activity Bar on the side of the window.
Search for "C/C++" and install the extension by Microsoft.
3. Clone the Repository
Clone this repository to your local machine using the following command:
```
git clone https://github.com/yourusername/student-record-system.git
```
5. Open the Project in Visual Studio Code
Open Visual Studio Code.
Click on File > Open Folder and select the cloned repository folder.
6. Compile and Run the Program
Open the integrated terminal in VS Code by clicking on Terminal > New Terminal.
Compile the program using GCC:
```
gcc -o student_record_system main.c
```

Run the compiled program:

```
./student_record_system
```

7. Using the Program
You can now use the program to manage student records. The following options are available in the menu:

Add Student: Add a new student record.
Display Students: Display all student records.
Delete Student: Delete a student record by ID.
Exit: Exit the program.
7. Student Records Persistence
The student records are saved in a file named students.txt in the same directory as the program. The records are loaded from this file when the program starts and saved to the file when changes are made.

Example Usage
sh
Copy code
Student Record System
1. Add Student
2. Display Students
3. Delete Student
4. Exit
Enter your choice: 1
Enter student ID: 1
Enter student name: John Doe
Enter student age: 20
Enter student grade: A
Student added successfully.

Student Record System
1. Add Student
2. Display Students
3. Delete Student
4. Exit
Enter your choice: 2

Student Records:
ID    Name            Age   Grade
1     John Doe        20    A
Replace yourusername in the clone command with your actual GitHub username.
