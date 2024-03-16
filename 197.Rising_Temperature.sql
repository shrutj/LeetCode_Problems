-- # 197. Problem Statement: Rising Temperature
--                           Write a solution to find all dates' Id with higher temperatures compared to its previous dates (yesterday).

--                           Return the result table in any order.

SELECT DISTINCT t1.id AS Id FROM Weather AS t1 INNER JOIN Weather AS t2 ON  DATEDIFF(t1.recordDate, t2.recordDate) = 1 WHERE t1.temperature >  t2.temperature;

