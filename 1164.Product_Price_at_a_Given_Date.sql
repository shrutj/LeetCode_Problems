-- # 1164. Problem Statement: Product Price at a Given Date
--                            Write a solution to find the prices of all products on 2019-08-16. Assume the price of all products before any change is 10.
                          
--                            Return the result table in any order.

select distinct product_id, 10 as price from Products where product_id not in(select distinct product_id from Products where change_date <='2019-08-16' )
union 
select product_id, new_price as price from Products where (product_id,change_date) in (select product_id , max(change_date) as date from Products where change_date <='2019-08-16' group by product_id)
