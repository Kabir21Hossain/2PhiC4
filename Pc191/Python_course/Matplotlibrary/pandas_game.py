import pandas as pd
import matplotlib.pyplot as knk
X=pd.read_csv('C:/Users/user/Downloads/data.csv')
# print(x)
# print(x.head())# 5 rows from top
# print(x.head(10))
# print(x.tail())
# print(x.tail(3))
# print(x.duplicated())
print(pd.options.display.max_rows)
dataframe={
    'person1':{
        'name':'kabir',
        'class':'11',
        'roll':100    },
    'person2':{
        'name':'abir',
        'class':'12',
        'roll':1
    }
}

y=pd.DataFrame(dataframe)
# print(y)

print(y.info)
# new_df=x.dropna()
# print(new_df)
# print(new_df.to_string())

# x.dropna(inplace=True)
# print(x)

# new_df=x.fillna('Nan')
# print(new_df.to_string())

# x.fillna('Nan',inplace=True)
# print(x.to_string())
# x.loc[10,'calories']=785.4
# print(x.loc[10,'calories'])
# print(x.corr())

# knk.plot(x)
# X.plot(kind='scatter',x='Duration',y='Calories')
# X.plot(kind='scatter',x='Duration',y='Maxpulse')
# X.plot(kind='hist')
X['Duration'].plot(kind='hist')
knk.grid()
knk.show()




