#include "../includes/Iter.hpp"

int main(){
	char arr1[5] = {'a', 'b', 'c', 'd', 'e'};
	int arr[5] = {0, 1, 2, 3, 4};

	iter(arr1, 5, &add_1);
	iter(arr1, 5, &printer);
	iter(arr, 5, &add_1);
	iter(arr, 5, &printer);
	return (0);
}
