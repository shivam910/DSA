<script>
// Program to implement iterative Binary Search

function binarySearch(arr, ele)
{
	let l = 0;
	let r = arr.length - 1;
	let mid;
	while (r >= l) {
		mid = l + Math.floor((r - l) / 2);

		if (arr[mid] == ele)
			return mid;

		if (arr[mid] > ele)
			r = mid - 1;
			
		else
			l = mid + 1;
	}

	return -1;
}

	arr =new Array(2, 3, 4, 10, 40);
	ele = 10;
	n = arr.length;
	result = binarySearch(arr, ele);
	
(result == -1) ? document.write("Element is not present in array")
			: document.write ("Element is present at index " + result);
				
</script>
