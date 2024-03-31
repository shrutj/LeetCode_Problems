-- # 1661. Problem Statement: Average Time of Process Per Machine
--                            There is a factory website that has several machines each running the same number of processes. Write a solution to find the average time each machine takes to complete a process.
                          
--                            The time to complete a process is the 'end' timestamp minus the 'start' timestamp. The average time is calculated by the total time to complete every process on the machine divided by the number of processes that were run.
                          
--                            The resulting table should have the machine_id along with the average time as processing_time, which should be rounded to 3 decimal places.
                          
--                            Return the result table in any order.


SELECT a1.machine_id, ROUND(AVG(a1.timestamp - a2.timestamp), 3) AS processing_time FROM Activity AS a1 INNER JOIN Activity AS a2 ON a1.machine_id = a2.machine_id AND a1.process_id = a2.process_id WHERE a1.activity_type = 'end' AND a2.activity_type = 'start' GROUP BY machine_id;
