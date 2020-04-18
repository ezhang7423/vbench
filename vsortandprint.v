var c := []int
size := 10000
var smallest := 0
var index := 0
var tmp := 0

for i := 0; i < size; i++ {	
	c << size - i
}

for i, num in c {
	smallest = num
	index = i
	for j := i; j < c.len; j++ {
		if c[j] < smallest{
			smallest = c[j]
			index = j
		}
	}
	tmp = c[i]
	c[i] = smallest
	c[index] = tmp
}


for j in c {
	println(j)
}