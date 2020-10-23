n = int(input("Enter number of elements in your array: ")) 
  
a = list(map(int,input("\nEnter the elements of array : ").strip().split()))[:n]

s = int(input("Enter the element you wish to search in the array: "))
found = 0

for i in a:
    if i == s:
        print(f"Element {s} found at index {a.index(s)}.")
        found = 1

if not found:
    print(f"Element {s} not found in the array.")   