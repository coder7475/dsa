// Time Complexity:  O(n²) average/worst
// Space Complexity: O(1)
function selectionSort(arr: number[], order: "asc" | "desc" = "asc"): number[] {
  const n = arr.length;
  if (n <= 1) return arr;

  for (let i = 0; i < n - 1; i++) {
    let targetIndex = i;
    for (let j = i + 1; j < n; j++) {
      if (order === "asc" ? arr[j] < arr[targetIndex] : arr[j] > arr[targetIndex])
        targetIndex = j;
    }

    if (i !== targetIndex)
      [arr[i], arr[targetIndex]] = [arr[targetIndex], arr[i]];
  }
  return arr;
}

const arr = [29, 10, 14, 37, 12];
console.log("Original:", [...arr]);
console.log("Ascending: ", selectionSort([...arr], "asc"));
console.log("Descending:", selectionSort([...arr], "desc"));



