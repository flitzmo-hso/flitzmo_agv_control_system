import requests
res = requests.post('http://192.168.178.109:8080/postOrders', 
json=[{"BU_NR": 2, "BU_PRIO": 1, "BU_LGP_NRVON": "2", "BU_LGP_NRNACH": "1" }, {"BU_NR": 3, "BU_PRIO": 1, "BU_LGP_NRVON": "3", "BU_LGP_NRNACH": "3" }])
