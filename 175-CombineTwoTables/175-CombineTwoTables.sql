-- Last updated: 9/28/2026, 3:17:55 PM
# Write your MySQL query statement below
select firstName,lastName,city,state from Person left join Address on Person.personId = Address.personId