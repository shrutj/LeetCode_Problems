-- # 1965. Problem Statement: Employees with Missing Information
--                            Write a solution to report the IDs of all the employees with missing information. The information of an employee is missing if:
                          
--                            The employee's name is missing, or
--                            The employee's salary is missing.
--                            Return the result table ordered by employee_id in ascending order.

SELECT * FROM (SELECT employee_id FROM Employees WHERE employee_id NOT IN (SELECT e.employee_id FROM Employees AS e JOIN Salaries AS s ON e.employee_id = s.employee_id)
UNION
SELECT employee_id FROM Salaries WHERE employee_id NOT IN (SELECT s.employee_id FROM Employees AS e JOIN Salaries AS s ON e.employee_id = s.employee_id)) AS A ORDER BY employee_id ASC;
