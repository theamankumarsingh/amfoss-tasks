My submission for task-6 Geddit

It was moderate task. I had to go though documentation of Go language to figure out how the syntaxes, expressions work.
I spent some time just reading source code (post.go, reddit.go, subreddit.go etc) in the go-reddit repository. I discovered functions of my use and by looking at the examples folder, I was able to decipher how I should use them in my script.

Overall, myscript uses Reddit app(bot) to surf the reddit. It uses the keyword in **search** variable to search the reddit, then takes first search result (subreddit). Then it upvotes the top posts posted in the last week (number of posts upvoted = number in **upvotes** variable within limit 1 to 100, else it defaults to 1). Time can be changed via **time** variable.

I removed client SecretID and user password for privacy purposes.
