TechNova IT Solutions — Employee Payroll System

Project description
This C++ console program processes employee payroll information. It assigns a default monthly salary based on the selected job title and department, calculates a bonus based on performance and attendance, and displays total pay.

Bonus rules
- 30% bonus:performance rating is at least 90 and attendance rate is at least 80.
- 15% bonus:otherwise, performance rating is at least 75 and attendance rate is at least 60.
- 0% bonus:if neither condition is met.

Formulae
- Bonus amount = basic salary × bonus rate
- Total pay = basic salary + bonus amount

Job titles and departments
- Software Developer: Web Development, Mobile App Development, Software Testing
- IT Support Technician: Hardware Support, Technical Help Desk, Network Support
- Database Administrator: Database Security, Database Development, Database Backup and Recovery

The program uses a nested "switch" statement to select the job title and department. A "for" loop processes the number of employees entered by the user.

How to compile and run
From a terminal in the folder containing `main.cpp`, compile with g++:

```bash
g++ -std=c++11 main.cpp -o payroll
```

On Windows Command Prompt, run:

```bash
payroll.exe
```

On Linux or macOS, run:

```bash
./payroll
```

Alternatively, open the `.cpp` file in Code::Blocks and select Build and Run.

Example test
Example: Software Developer → Web Development; performance 95; attendance 90.
- Basic salary: R25,000
- Bonus rate: 30%
- Bonus amount: R7,500
- Total pay: R32,500

Run the program and capture screenshots of its actual output for your report.

Student details
- Student name: Nsimba Bernice Feti
- Student number: JHBCOD000111009
- College: Gauteng City College
- LinkedIn profile: https://www.linkedin.com/in/bernice-feti-90a136444?utm_source=share_via&utm_content=profile&utm_medium=member_android

References
- OpenAI ChatGPT (2026),https://chatgpt.com/share/6ac8e5ad-1ea0-83ea-ab5b-15e1f6d91479?ogimg=plain
- https://youtu.be/qUPXsPtWGoY?si=ofWA2Bga3n7zjzcl
- Mr Owami notes
