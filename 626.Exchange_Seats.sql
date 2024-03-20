-- // # 626. Problem Statement: Exchange Seats
-- //                           Write a solution to swap the seat id of every two consecutive students. If the number of students is odd, the id of the last student is not swapped.
                          
-- //                           Return the result table ordered by id in ascending order.

SELECT CASE WHEN MOD(id, 2) = 0 THEN id-1 WHEN MOD(id, 2) = 1 AND id+1 NOT IN (SELECT id FROM Seat) THEN id ELSE id+1 END AS id, student FROM Seat ORDER BY id ASC;
