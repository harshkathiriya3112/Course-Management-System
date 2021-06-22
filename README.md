# Course-Management-System


# Problem statement:
• In schools and colleges, it is hard to store student’s data manually. When the 
number of students is very high at that time It becomes more complex. 

• When the professor wants some data of students, he has to scan through the 
whole list, and also, there is the main problem of the security of data. Anyone 
can read that data, anyone can see a student’s ID, password, his enrolled 
subjects, even anyone can make changes in the data. In each year, there are 
different courses and professors, so, time table management becomes also 
difficult. 

• These all problems and difficulties can be easily solved by technical
programme so which makes these all problems very easy.


# approach of problem:
• As mentioned above, problems these all can be solved by technical 
programme. So, there are multiple ways to make any technical programme. We 
can make any simple program in C/C++ language that will handle these all 
things — it will make things easier for students and professors. But when the 
code grows as the project size grows, it becomes difficult to manage the code.

• We choose Object-Oriented Programming which makes maintenance easier. 
An object-Oriented Programming language provides data hiding whereas in a 
procedure-Oriented Programming language (C/C++) a global data can be 
accessed from anywhere. OOPs, provide the ability to simulate real-world 
events much more effectively. That’s why we choose OOPs.

• First: we made a rough list of functionalities that we were going to give to 
students, professors, and admin. Then We started implementation in the 
program. We made a platform on which students, professors, and admin can 
do their work. First, whoever will come, he will be asked about his current 
course year, which means if the student will come, he will be asked that in 
which year he is studying similarly, if the professor will come, he will be also 
asked that in which year he is teaching.


# How to use a code:
• Our code can be easily run in the different IDEs like Visual Studio Code, 
Codeblocks, etc.

• We have created a login system.

• If a regular student wants to log in, then he/she will be asked to enter his 
student ID and password, till they enter right details . After signing in, the 
student will have three options:\
[i] His/her timetable\
[ii] Course material, he/she will be asked to enter the course name of which 
material he/she wants.\
[iii] His/her enrolled courses’ name and the professors’ name• If the new student will come, then he will be asked to enter his details — his 
surname, father’s name, etc. After entering the details, he will be asked to 
generate a password. And, He will be assigned a student ID and He will be 
given a list of courses from which he can choose courses in which he wants 
to enroll. Then, the process of a new student will be completed and he can 
simply log in like a regular student.

• If the professor will come, then the login procedure will be the same. After 
signing in, he will be shown his lecture timing and the number of students 
enrolled in his course. Then he will have three options:\
[i] Student enrollment list of his course\
[ii] Material: by choosing this option, the professor can post study material.\
[iii] Search: professor can search the student’s name and he will be shown 
that student’s enrollment list.\

• If Admin will come, the log-in procedure will be the same. After signing in, he 
will have six options:\
[i] Student details: admin can see all details of the students of each year.\
[ii] Change student’s name: sometimes the student has made any mistake in 
writing his name, then, based on the student’s request, Admin can change the 
student’s name.\
[iii]Change student’s password: if a student forgets his password, in this case, 
only the admin can reset the student’s password.\
[iv] Change student’s enrollment list: admin can make changes in the 
enrollment list of students based on their request.\
[v] Change professor’s password\
[vi] Change his password

• We have made separate files to store student’s names, passwords, enrolled 
subjects, course material, etc. And we have stored all this data encrypted. So, 
no one can read the file data easily.
• So by using encryption, we have also taken care of the security of data.
• We have used file handling in the program. So, once all the data is added. And, 
afterward, any new student comes, then his details will also be added to the 
file.Things that we learned during the project:

# Limitations of our project:
• The encryption that we have implemented to secure the data is not so strong. 
It is also right that decoding data is not so easy. But I think we could make a 
stronger encryption algorithm.\
• We can attached a database to our programme for better data handling and 
easy combability.\
• We can use “.csv” file rather than “.txt” to store more data in small number of 
file.\
• If we could make programme of graphical user interface [GUI] it can be more 
better and easy to use.
