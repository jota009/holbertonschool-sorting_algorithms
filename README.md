Sorting Algorithms and Their Time Complexities

Sorting algorithms are fundamental techniques used to arrange elements in a specific order, typically in ascending or descending order. Understanding their time complexities is crucial for selecting the appropriate algorithm based on the size of the dataset and the specific requirements of the application. Below is a brief overview of some common sorting algorithms and their average-case time complexities:

    Bubble Sort
        Description: A simple comparison-based algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
        Time Complexity:
            Average: O(n²)
            Best: O(n) (when the list is already sorted)

    Selection Sort
        Description: This algorithm divides the input list into two parts: a sorted and an unsorted region. It repeatedly selects the smallest (or largest) element from the unsorted region and moves it to the end of the sorted region.
        Time Complexity:
            Average: O(n²)
            Best: O(n²)

    Insertion Sort
        Description: Builds a sorted array one element at a time by repeatedly taking the next element from the unsorted region and inserting it into the correct position in the sorted region.
        Time Complexity:
            Average: O(n²)
            Best: O(n) (when the list is nearly sorted)

    Merge Sort
        Description: A divide-and-conquer algorithm that divides the list into halves, recursively sorts each half, and then merges the sorted halves back together.
        Time Complexity:
            Average: O(n log n)
            Best: O(n log n)

    Quick Sort
        Description: Another divide-and-conquer algorithm that selects a 'pivot' element and partitions the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.
        Time Complexity:
            Average: O(n log n)
            Best: O(n log n)
            Worst: O(n²) (when the pivot is the smallest or largest element)

    Heap Sort
        Description: This algorithm uses a binary heap data structure to sort elements. It first builds a max heap from the input data and then repeatedly extracts the maximum element from the heap and rebuilds the heap.
        Time Complexity:
            Average: O(n log n)
            Best: O(n log n)

    Counting Sort
        Description: A non-comparison-based sorting algorithm that counts the occurrences of each unique element and uses this information to place elements in their correct position.
        Time Complexity:
            Average: O(n + k), where ( k ) is the range of the input values.

    Radix Sort
        Description: A non-comparison-based sorting algorithm that sorts numbers by processing individual digits. It uses counting sort as a subroutine to sort the numbers based on each digit.
        Time Complexity:
            Average: O(nk), where ( k ) is the number of digits in the largest number.

