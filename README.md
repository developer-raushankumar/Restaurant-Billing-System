# Raunak Family Restaurant - Billing System 🍽️

A simple, terminal-based restaurant billing application written in C. It provides a digital menu card, accepts user selections, calculates total prices based on item quantity, and generates instant digital receipts. 

## 🚀 Features
- **Interactive Terminal Menu:** Clean visual interface for restaurant ordering.
- **Dynamic Receipt Generation:** Calculates and prints structured bill receipts with item name, quantity, and total price.
- **Continuous Ordering Loop:** The program automatically refreshes to take new orders without crashing or exiting.
- **Legacy Compiler Ready:** Fully compatible with Turbo C++ and older DOS environments using `<conio.h>`.

---

## 📋 Menu Card & Pricing

| Item No. | Item Name | Price (INR) |
| :---: | :--- | :---: |
| 1 | Chai | ₹10 |
| 2 | Coffee | ₹20 |
| 3 | Cold Coffee | ₹50 |
| 4 | Lassi | ₹50 |
| 5 | Nimbu Pani | ₹20 |

---

## 🛠️ How to Run the Program

### Method 1: Using Turbo C++ (Legacy)
1. Download and open **Turbo C++**.
2. Create a new file named `billing.c`.
3. Paste the code into the editor.
4. Press `Ctrl + F9` to Compile and Run the application.

### Method 2: Using Modern Compilers (GCC / VS Code / Clang)
If you are running this code on a modern operating system (Windows 10/11, macOS, Linux), you may need to remove or replace the legacy `<conio.h>`, `getch()`, and `clrscr()` functions as they are outdated. 

1. Install a C compiler like **GCC**.
2. Compile the code using your terminal:
   ```bash
   gcc billing.c -o billing
   ```
3. Run the compiled executable:
   ```bash
   ./billing
   ```

---

## 💻 Sample Code Output

```text
--------------------------------
::::Raunak Family Restaurant::::
--------------------------------
         ::Menu Card::
--------------------------------
1.Chai                      10Rs
2.Cofee                     20Rs
3.Cold Cofee                50Rs
4.Lassi                     50Rs
5.NimbuPani                 20Rs
6.Exit
---------------------------------
Please select your item (1-6): 1
---------------------------------
Enter Quantity: 3

-----------------------
   ::Bill Receipt::
-----------------------
Items    Quantity  Amount
-----------------------
Chai       3        30Rs
-----------------------
Total Amount:     30Rs
-----------------------

Press any key to open the menu again...
```

---

## 🤝 Contributing
Contributions, issues, and feature requests are welcome! Feel free to check the [issues page](issues/). You can also fork this repository to add new features like multi-item billing or discount systems.
