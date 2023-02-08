# Write your MySQL query statement below
select v.customer_id, count(v.visit_id) as count_no_trans 
from visits v
left join transactions t on t.visit_id = v.visit_id 
where v.visit_id not in(select visit_id from transactions)
group by customer_id order by count_no_trans desc 