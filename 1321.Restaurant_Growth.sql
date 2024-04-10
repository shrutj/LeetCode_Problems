-- # 1321. Problem Statement: Restaurant Growth
--                            You are the restaurant owner and you want to analyze a possible expansion (there will be at least one customer every day).
                          
--                            Compute the moving average of how much the customer paid in a seven days window (i.e., current day + 6 days before). average_amount should be rounded to two decimal places.
                          
--                            Return the result table ordered by visited_on in ascending order.

SELECT 
    visits.visited_on AS visited_on,
    SUM(c.amount) AS amount, 
    ROUND(SUM(c.amount) / 7.0, 2) AS average_amount
FROM (
    SELECT DISTINCT visited_on 
    FROM Customer
    WHERE DATEDIFF(
        visited_on, 
        (SELECT MIN(visited_on) FROM Customer)
    ) >= 6
) visits 
LEFT JOIN Customer c 
ON DATEDIFF(visits.visited_on, c.visited_on) BETWEEN 0 and 6
GROUP BY visits.visited_on
ORDER BY visited_on;
