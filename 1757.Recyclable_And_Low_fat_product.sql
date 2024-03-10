-- 1757. Problem Statement: Recyclable and Low fat products
--                          Write a solution to find the ids of products that are both low fat and recyclable.
--                          Return the result table in any order.

SELECT product_id FROM Products WHERE low_fats = 'Y' AND recyclable = 'Y';
