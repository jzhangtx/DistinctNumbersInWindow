package main

import "fmt"

func GetArrayFromInput(count int, prompt string) []int {
	if count == 0 {
		return []int{}
	}

	fmt.Print(prompt)

	v := make([]int, count)
	for i := 0; i < count; i++ {
		fmt.Scan(&v[i])
	}

	return v
}

func CountDistinct(vec []int, index, k int) int {
	m := make(map[int]struct{})
	count := 0
	for i := index; i < index+k; i++ {
		_, f := m[vec[i]]
		if !f {
			count++
			m[vec[i]] = struct{}{}
		}
	}

	return count
}

func DistinctNumbersInWindow(A []int, k int) []int {
	result := make([]int, len(A)-k+1)

	for i := 0; i < len(A)-k+1; i++ {
		result[i] = CountDistinct(A, i, k)
	}

	return result
}

func main() {
	for {
		fmt.Print("Number of elements: ")
		var count int
		fmt.Scan(&count)
		if count == 0 {
			break
		}

		vec := GetArrayFromInput(count, "Please enter the array: ")

		fmt.Print("The window size: ")
		var k int
		fmt.Scan(&k)

		v := DistinctNumbersInWindow(vec, k)

		fmt.Println("The distinct numbers in windows is ", v)
	}
}
