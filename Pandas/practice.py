import pandas as pd
import matplotlib.pyplot as plt
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
print(order.head(10))

ufo = pd.read_csv('http://bit.ly/uforeports')
type(ufo)
print(ufo.head())
print(ufo.city())
ufo.rename(columns = {'City':'city'}, inplace=True) 
print(ufo.drop('Colors Reported', axis=1, inplace = True))
print(ufo.columns)
print(ufo.drop(ufo.index[3], axis=0, inplace = True))
print(ufo.head())

movies = pd.read_csv(
    "https://raw.githubusercontent.com/justmarkham/DAT8/master/data/imdb_1000.csv"
)
booleans = []
for length in movies.duration:
    if length > 120:
        booleans.append(True)
    else:
        booleans.append(False)
print(booleans[0:5])
is_long = pd.Series(booleans)
print(is_long.head())
movies[(movies.duration>=200) & (movies.genre == 'Drama')]
print(movies.head())

drinks = pd.read_csv('http://bit.ly/drinksbycountry')
print(drinks.columns)
print(drinks.mean(numeric_only = True))

order = pd.read_csv('http://bit.ly/chiporders', sep = '\t')
order.groupby('item_name')['quantity'].mean().plot(kind='bar')
plt.show()

drinks = pd.read_csv('http://bit.ly/drinksbycountry')
print(drinks.columns)
print(drinks.mean(numeric_only = True))
### graph options......hist, line, bar, pie, barh, box, hexbin
drinks.groupby('continent')['beer_servings'].mean().plot(kind='bar') 
plt.show()
print(drinks.continent.value_counts(normalize=True))'''

ufo = pd.read_csv('http://bit.ly/uforeports')
print(ufo.tail())