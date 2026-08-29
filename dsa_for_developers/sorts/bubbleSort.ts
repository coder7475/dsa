function bubbleSort(arr: number[]) {
  console.log("-Buuble Sort: Ascending Order-");

  let n = arr.length;
  for (let i = 0; i < n - 1; i++) {
    let swapped = false;
    for (let j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        // SWAP
        // [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
        let temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;

        swapped = true
      }
    }
    if (!swapped) break;
  }
}

const arr = [29, 10, 14, 37, 12];
console.log(arr);
bubbleSort(arr);
console.log(arr)

