# Integer Sign Segregation System

This project implements a data filtering algorithm in C designed to classify integers from a raw input stream into categorized datasets based on their algebraic sign.

## 📐 Mathematical Model

The algorithm takes a set of integers $S = \{x_1, x_2, \dots, x_n\}$ and partitions it into two disjoint subsets:

1.  **Positive Subset ($P$):**
    $$P = \{ x \in S \mid x > 0 \}$$

2.  **Negative Subset ($N$):**
    $$N = \{ x \in S \mid x < 0 \}$$

*(Note: Elements where $x=0$ are excluded from both subsets in this specific implementation.)*

## ⚙️ Technical Logic

1.  **Dynamic Input Handling:** The program accepts a user-defined size $n$ to establish the bounds of the data stream.
2.  **Memory Allocation:** Utilizes arrays to store the classified data.
3.  **Conditional Filtering:**
    * Iterates through the input stream.
    * Applies `if (x > 0)` logic to populate the Positive Buffer.
    * Applies `if (x < 0)` logic to populate the Negative Buffer.
4.  **Indexed Storage:** Maintains separate index counters (`pindex`, `nindex`) to ensure data integrity within the target arrays.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o segregator
    ```
2.  Run the executable:
    ```bash
    ./segregator
    ```
3.  Enter the count ($n$) and then the integers to view the separated lists.

### Example Output
```text
Input:  1, -24, -2, 5, -5, 2
Output:
Positive: 1, 5, 2
Negative: -24, -2, -5
