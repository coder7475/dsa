// Time Complexity:  O(n²) average/worst, O(n) best (already sorted)
// Space Complexity: O(1)
function bubbleSort(arr: number[], order: "asc" | "desc" = "asc"): number[] {
  const n = arr.length;
  if (n <= 1) return arr;

  for (let i = 0; i < n - 1; i++) {
    let swapped = false;
    for (let j = 0; j < n - 1 - i; j++) {
      const shouldSwap = order === "asc" ? arr[j] > arr[j + 1] : arr[j] < arr[j + 1];
      if (shouldSwap) {
        [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
        swapped = true;
      }
    }
    if (!swapped) break;
  }
  return arr;
}

const arr = [29, 10, 14, 37, 12];
console.log("Original:", [...arr]);
console.log("Ascending: ", bubbleSort([...arr], "asc"));
console.log("Descending:", bubbleSort([...arr], "desc"));



