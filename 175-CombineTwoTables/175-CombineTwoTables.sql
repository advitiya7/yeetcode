-- Last updated: 1/22/2026, 7:56:30 PM
# Write your MySQL query statement below
select p.firstName,p.lastName,a.city,a.state from person p left join address a on p.personId=a.personId