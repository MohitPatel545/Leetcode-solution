# Check if Array is Sorted

## 📌 Problem Statement

Given an array of `n` integers, check whether the array is sorted in **ascending order**.

If the array is sorted, print:

```text
Array is sorted
```

Otherwise, print:

```text
Array is not sorted
```

## 📥 Input

The input consists of:

* First line: An integer `n`, representing the size of the array.
* Second line: `n` space-separated integers representing the array elements.

## 📤 Output

Print:

* `Array is sorted` if the array is sorted in ascending order.
* `Array is not sorted` if the array is not sorted.

## 🧪 Example 1

### Input

```text
5
10 20 30 40 50
```

### Output

```text
Array is sorted
```

## 🧪 Example 2

### Input

```text
5
10 30 20 40 50
```

### Output

```text
Array is not sorted
```

## 💡 Approach

1. Read the size of the array.
2. Store the array elements.
3. Compare each element with the next element.
4. If any element is greater than the next element, the array is **not sorted**.
5. If
