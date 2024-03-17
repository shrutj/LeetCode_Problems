-- # 1204. Problem Statement: Last Person to Fit in the Bus
--                            There is a queue of people waiting to board a bus. However, the bus has a weight limit of 1000 kilograms, so there may be some people who cannot board.

--                            Write a solution to find the person_name of the last person that can fit on the bus without exceeding the weight limit. The test cases are generated such that the first person does not exceed the weight limit.


SELECT t1.person_name FROM Queue AS t1 JOIN Queue AS t2 ON t1.turn >= t2.turn GROUP BY t1.turn HAVING SUM(t2.weight) <= 1000 ORDER BY t1.turn DESC LIMIT 1;
