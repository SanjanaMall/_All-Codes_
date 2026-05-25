import pandas as pd
import ssl
import certifi
### csv file has been downloaded
'''df = pd.read_csv('adult.data')
print(df.head())
### takes any random csv file directly online
orders = pd.read_table('http://bit.ly/chiporders')
print(orders.head())

ssl._create_default_https_context = lambda: ssl.create_default_context(
    cafile=certifi.where()
)
user_cols = ['user_id','age','gender','occupation','zip_code']
order = pd.read_table('https://bit.ly/movieusers', sep = '|', header = None, names = user_cols)
print(order.head(10))'''

ufo = pd.read_csv('http://bit.ly/uforeports')
#type(ufo)
#print(ufo.head())
#print(ufo.city())
ufo.rename(columns = {'City':'city'}, inplace=True) 
print(ufo.columns)
