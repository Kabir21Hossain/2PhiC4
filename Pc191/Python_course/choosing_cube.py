from flask import Flask, request, jsonify
import mysql.connector

app = Flask(__name__)

# MySQL connection
conn = mysql.connector.connect(
    host="localhost",
    user="root",
    password="mysql",
    database="banking_system"
)
cursor = conn.cursor(dictionary=True)

# Get all customers
@app.route('/customers', methods=['GET'])
def get_customers():
    cursor.execute("SELECT * FROM customer")
    rows = cursor.fetchall()
    return jsonify(rows)

# Add a new customer
@app.route('/customers', methods=['POST'])
def add_customer():
    data = request.json
    query = "INSERT INTO customer (name, address, phone) VALUES (%s, %s, %s)"
    values = (data['name'], data['address'], data['phone'])
    cursor.execute(query, values)
    conn.commit()
    return jsonify({'message': 'Customer added successfully!'})

# Get all accounts
@app.route('/accounts', methods=['GET'])
def get_accounts():
    cursor.execute("SELECT * FROM account")
    rows = cursor.fetchall()
    return jsonify(rows)

if __name__ == '__main__':
    app.run(debug=True)
