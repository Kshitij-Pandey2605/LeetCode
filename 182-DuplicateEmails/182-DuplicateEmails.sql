-- Last updated: 9/28/2026, 3:17:50 PM
# Write your MySQL query statement below
select email as Email  from Person
group by email having count(email)>1

