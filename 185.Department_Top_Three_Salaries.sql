-- # 185. Problem Statement: Department Top Three Salaries
--                           A company's executives are interested in seeing who earns the most money in each of the company's departments. A high earner in a department is an employee who has a salary in the top three unique salaries for that department.
                          
--                           Write a solution to find the employees who are high earners in each of the departments.
                          
--                           Return the result table in any order.


SELECT t2.name AS Department, t1.name AS Employee, t1.salary AS Salary FROM Employee AS t1, Department AS t2, Employee AS t3 WHERE t1.departmentId = t2.id AND t1.departmentId = t3.departmentId AND t1.salary <= t3.salary group by t2.id, t1.name HAVING COUNT(DISTINCT t3.salary) <=3 ORDER BY t2.name, t1.salary DESC;
