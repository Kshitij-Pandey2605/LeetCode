-- Last updated: 9/28/2026, 3:17:40 PM
# Write your MySQL query statement below
select w.id from Weather w
inner join Weather w2
on w.recordDate=Date_add(w2.recordDate,interval 1 day)
where w.temperature>w2.temperature