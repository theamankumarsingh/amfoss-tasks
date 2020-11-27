import os
import requests

username = "amfoss"
request = requests.get('https://api.github.com/users/'+username+'/repos')
repo = request.json()

#get commits
for i in range(0,len(repo)):
    command="perceval git --json-line https://github.com/amfoss/"+repo[i]['name']+" >> commits.json"
    os.system(command)