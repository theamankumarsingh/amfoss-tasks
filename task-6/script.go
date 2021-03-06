package main

import (
	"context"
	"strings"

	"github.com/vartanbeno/go-reddit/reddit"
)

//Change Settings Here
var id = "v5d2QYcCrWttLA"
var secret = "" //due to security reasons, not given
var username = "rarcane"
var password = "" //due to security reasons, not givem
var search = "memes"
var time = "week"
var upvotes = 100 //min 1, max 100

func main() {
	//log bot
	withCredentials := reddit.WithCredentials(id, secret, username, password)
	client, _ := reddit.NewClient(withCredentials)

	//perform search and get subreddit
	sub, _, err := client.Subreddit.Search(context.Background(), search, &reddit.ListSubredditOptions{
		ListOptions: reddit.ListOptions{
			Limit: 1, //we only want 1 result
		},
	})
	if err != nil { //we will be checking for errors at each step
		return
	}
	var ss string
	var subred string
	for _, x := range sub {
		ss = x.NamePrefixed
	}
	s := strings.SplitN(ss, "/", -1) //split r/name by / token
	subred = s[1]                    //get only the subreddit name

	//making sure upvotes is in the limit [1,100]
	upvotes = upvotes % 101
	if upvotes <= 0 {
		upvotes = 1
	}

	//got the subreddit, now search for top posts and upvote them
	posts, _, err := client.Subreddit.TopPosts(context.Background(), subred, &reddit.ListPostOptions{ListOptions: reddit.ListOptions{Limit: upvotes}, Time: time})
	for _, y := range posts {
		_, err := client.Post.Upvote(context.Background(), y.FullID)
		if err != nil {
			return
		}
	}

	//The process is done, check your account (Reddit App> History> Upvoted)
	return
}
