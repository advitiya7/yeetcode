-- Last updated: 1/22/2026, 7:54:06 PM
# Write your MySQL query statement below
select DATE_FORMAT(trans_date,'%Y-%m') as month, country,count(state) as trans_count, sum(state='approved') as approved_count,sum(amount) as trans_total_amount, sum(if(state='declined',0,amount)) as approved_total_amount from transactions group by month,country