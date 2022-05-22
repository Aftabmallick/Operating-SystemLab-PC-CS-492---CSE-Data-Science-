#                             Online Bash Shell.
#                 Code, Compile, Run and Debug Bash script online.
# Write your code in this editor and press "Run" button to execute it.


function insertion()
{   
    echo sorted array using Insertion Sort:
	for((i=1;i<n;i++))
	do
		j=$i-1
		temp=${a[i]}
		while((j>=0 && a[$j]>temp))
		do
			a[$j+1]=${a[$j]}
			j=$j-1
		done
		a[$((j+1))]=$temp
	done

}
function bubble()
{
	echo sorted array using Bubble Sort:
	for((i=0;i<$n;i++))
	do
		for((j=0;j<$n-$i-1;j++))
		do
			if [ ${a[j]} -gt ${a[$((j+1))]} ]
			then
				temp=${a[j]}
				a[$j]=${a[$((j+1))]}
				a[$((j+1))]=$temp
			fi
		done
	done

}




echo enter the no of terms 
read n
echo enter $n numbers
for((i=0;i<$n;i++))
do
	read a[i]
done
echo choose bubble or insertion sort: 
read ch
case $ch in
	bubble|BUBBLE)
		bubble;;
	insertion|INSERTION)
		insertion;;
	*)echo Wrong choice;;
esac
for((i=0;i<=$n;i++))
do
	echo ${a[i]}    
done
