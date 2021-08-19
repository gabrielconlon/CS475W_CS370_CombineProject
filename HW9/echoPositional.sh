echo "You have entered $# variables, default is to use variable 1"
case $1 in
Saturday | Sunday ) echo "WOO! Its the weekend";;
Monday | Tuesday ) echo "Ouch, beginning of the week";;
Wednesday ) echo "Hump day, almost there";;
Thursday | Friday ) echo "The weekend is just aroudn the corner...";;
esac
