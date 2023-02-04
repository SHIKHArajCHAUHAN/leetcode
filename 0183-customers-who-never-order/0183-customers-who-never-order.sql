# Write your MySQL query statement below
#SELECT name from Customers,Orders where Customers.id<>Orders.customerId
SELECT name as 'Customers' FROM Customers 
WHERE NOT Customers.id in (select customerId from Orders);