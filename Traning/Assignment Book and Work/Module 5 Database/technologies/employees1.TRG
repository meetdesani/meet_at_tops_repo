TYPE=TRIGGERS
triggers='CREATE DEFINER=`root`@`localhost` TRIGGER before_employee_update\nbefore update on employees1\nfor EACH ROW\nINSERT INTO employees_audit\nset ACTION = \'update\',\nemployeeNumber = old.employeenumber,\nlastname = old.lname,\nCHANGedate = now()' 'CREATE DEFINER=`root`@`localhost` TRIGGER trigger1\nBEFORE UPDATE on employees1\nfor EACH row \nINSERT INTO employee_audit\nset ACTION=\'UPDATE\', employeeNumber= old.employeeNumber, lname=old.lname, changedate= now()'
sql_modes=1098907648 1098907648
definers='root@localhost' 'root@localhost'
client_cs_names='utf8mb4' 'utf8mb4'
connection_cl_names='utf8mb4_unicode_ci' 'utf8mb4_unicode_ci'
db_cl_names='utf8mb4_general_ci' 'utf8mb4_general_ci'
created=1701854103336515 1701856259775615
