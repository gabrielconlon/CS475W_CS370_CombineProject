NOW=(date +"%H")
if [ $NOW < 12 ]
then
	echo "Good Morning"
	let i=5
elif [ $NOW > 12 ]; then
	echo "Good Afternoon"
	let i=5
fi

while [ $i != 0 ]
do
	echo "Countdown from $i"
	let i = i - 1
done

x = 0
until [ $x == 5 ]
do
	echo "Countup from $x"
	let x = x + 1
done