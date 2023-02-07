# Write your MySQL query statement below
select employee_id from Employees where employee_id NOT IN (SELECT employee_id FROM Salaries)
union select employee_id from Salaries where employee_id NOT IN (SELECT employee_id FROM Employees)
order by employee_id