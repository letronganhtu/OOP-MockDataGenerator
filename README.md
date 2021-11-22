# Project 1: Mock data generator

## Full name: Lê Trọng Anh Tú - ID: 20127091

All things I listed below are what I have done in this project:

**1. Generate randomly a number**

- I created class `RandomIntegerGenerator` in `RandomIntegerGenerator.cpp` & `RandomIntegerGenerator.h` files to do this task with 3 random versions.

- In `main.cpp`, I use `int n = rng.next(5, 10)` to randomize a number in the range of [5, 10] - which is the last version of a class.

**2. Generate student randomly**

- To do this task, I created and used class `RandomStudentGenerator`

- Firstly, I have to add class `Student` in `Student.h` and `Student.cpp` to know what is **a student**. **A student** consists of *student's ID, name, GPA, phone number, email, day of birth and address*.

    - I created class `Date` in `Date.cpp` & `Date.h` which includes *day, month and year* to store day of birth of a student.

    - Also I created class `Address` in `Address.h` & `Address.cpp` to store address. `Address` includes *number of address, name of street, ward, district and city* where student lives.

- As we have created `RandomIntegerGenerator` before, we use it to random *student's ID* in the range of **[2127000, 2127999]**. 

    - Two first digits represent for students who study in first year of this school. 
    
    - Two next digits represent what major you study. 
    
    - And the last 3 digit represent each student in this class.

- 