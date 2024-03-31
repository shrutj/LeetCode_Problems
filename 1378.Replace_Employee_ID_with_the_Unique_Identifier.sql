-- # 1378. Problem Statement: Replace Employee ID with the Unique Identifier
--                            Write a solution to show the unique ID of each user, If a user does not have a unique ID replace just show null.
                          
--                            Return the result table in any order.



SELECT t2.unique_id, t1.name FROM Employees AS t1 LEFT JOIN EmployeeUNI AS t2 ON t1.id = t2.id;
