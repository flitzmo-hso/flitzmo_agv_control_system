from flask import Flask, jsonify, request
from flask_mysqldb import MySQL

#Setting app and MySQL User and Database → Watch DB!
app = Flask(__name__)
app.config['MYSQL_USER'] = 'testuser'
app.config['MYSQL_HOST'] = 'localhost'
app.config['MYSQL_PASSWORD'] = 'testpw'
mysql = MySQL(app)


#Test on MainPage for check if Gateway is online
@app.route('/', methods=['GET'])
def index():
    return jsonify({'msg': "Welcome"})

#First Get Request with  Select on AGV Table
@app.route('/getAGV', methods=['GET'])
def getAGV():
    conn = mysql.connection
    cur = conn.cursor()
    cur.execute('select * from AGV.AGV')
    columns = [x[0] for x in cur.description]
    data = cur.fetchall()
    json_data=[]
    for result in data:
        json_data.append(dict(zip(columns, result))) 

    return jsonify(json_data)

#First Get Request with  Select on AGV Table
@app.route('/postOrders', methods=['POST'])
def insertOrder():
    res = request.json
    print(res)

    cursor = mysql.connection.cursor()

    for i in res:
     
        #conn = mysql.connect()
        sqlInsert = "INSERT INTO `ORDER`.`ORDER` (O_FT_IDREQUIREMENT, O_ID, O_OS_ID, O_PRIO, O_WH_IDFROM, O_WH_IDTO) VALUES( 1 ,"+ str(i['BU_NR']) +", 1 ,"+ str(i['BU_PRIO']) +",'"+ str(i['BU_LGP_NRVON']) +"','"+ str(i['BU_LGP_NRNACH'])+"')"
        cursor.execute(sqlInsert)
        mysql.connection.commit()
     

    cursor.close()
    return "Done"



#Setting API-Port and host
if __name__ == '__main__':

    app.run(host='192.168.178.109', port=8080, debug=True) 