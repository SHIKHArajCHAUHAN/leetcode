# Write your MySQL query statement below
select sell_date,
count(distinct product) as num_sold, 
GROUP_CONCAT(distinct product) as products#by default separator is ',' here if u want to add another separeter u can use separatoer 'value'
from Activities
group by sell_date;