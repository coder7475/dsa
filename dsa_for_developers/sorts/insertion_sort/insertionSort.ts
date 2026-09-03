// Time Complexity:  O(n²) average/worst
// Space Complexity: O(1)
function insertionSort(arr: number[], order: "asc" | "desc" = "asc"): number[] {
  const n = arr.length;

  for (let i = 1; i < n; i++) {
    const current = arr[i];
    let j = i - 1;

    while (j >= 0 && (order === "asc" ? arr[j] > current : arr[j] < current)) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = current;
  }
  return arr;
}

const arr = [29, 10, 14, 37, 12];
console.log("Original:", [...arr]);
console.log("Ascending: ", insertionSort([...arr], "asc"));
console.log("Descending:", insertionSort([...arr], "desc"));



