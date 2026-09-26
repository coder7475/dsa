function binarySearch(a: number[], target: number) {
  let lo = 0, hi = a.length - 1;

  while (lo <= hi) {
    const mid = lo + Math.floor((hi - lo) / 2);

    if (a[mid] === target)
      return mid;

    if (a[mid] < target)
      lo = mid + 1;
    else if (a[mid] > target)
      hi = mid - 1;
  }

  return -1;
}

const arr = [1, 2, 3, 4, 5];
const target = 4;

const res = binarySearch(arr, target); // 3

console.log(res);
