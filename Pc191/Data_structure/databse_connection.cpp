#include <iostream>
#include <mysql/mysql.h>

int main() {
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

    const char *server = "localhost";
    const char *user = "your_mysql_user";
    const char *password = "your_mysql_password";
    const char *database = "your_database";

    // Initialize MySQL connection
    conn = mysql_init(NULL);
    if (!conn) {
        std::cerr << "MySQL initialization failed!" << std::endl;
        return 1;
    }

    // Connect to database
    if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        std::cerr << "MySQL connection failed: " << mysql_error(conn) << std::endl;
        return 1;
    }

    // Create table (if not exists)
    const char *createTableQuery = "CREATE TABLE IF NOT EXISTS users (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(100));";
    if (mysql_query(conn, createTableQuery)) {
        std::cerr << "Table creation failed: " << mysql_error(conn) << std::endl;
    }

    // Get user input
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Insert data
    std::string query = "INSERT INTO users (name) VALUES ('" + name + "');";
    if (mysql_query(conn, query.c_str())) {
        std::cerr << "Insert failed: " << mysql_error(conn) << std::endl;
    } else {
        std::cout << "Data inserted successfully!" << std::endl;
    }

    // Close connection
    mysql_close(conn);
    return 0;
}
