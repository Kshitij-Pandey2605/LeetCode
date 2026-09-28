-- Last updated: 9/28/2026, 3:17:53 PM
# Write your MySQL query statement below
select e.name as Employee from Employee e
inner join Employee m
on e.managerid=m.id
where e.salary>m.salary
