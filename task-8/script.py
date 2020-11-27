import os
import requests

username = "amfoss"
file="commits.json"

#get repository list
req = requests.get("https://api.github.com/users/"+username+"/repos")
repo = req.json()

#get commits
for i in range(0,len(repo)):
    command="perceval git --json-line https://github.com/amfoss/"+repo[i]["name"]+" >> commits.json"
    os.system(command)

#make life of our seniors easier
command="cat "+file
os.system(command)