from cs50 import get_float

# Step 1 , get user input , with a check for it being a floating point postitive number
while True:
    cents = get_float("Change owed: ")
    if cents >= 0:
        break

cents = cents * 100  # convert dollar to cent equivalent

# Step 3 to calculate quarters, and remaining cents
quarters = int(cents/25)
cents = cents - quarters*25

# Repeat of step 3 for dimes
dimes = int(cents/10)
cents = cents - dimes*10

# Repeat of step 3 for nickels
nickels = int(cents/5)
cents = cents - nickels*5

# Repeat of step 3 for pennies
pennies = int(cents/1)
cents = cents - pennies*1

# Sum of all coins, which is the output
coins = quarters + dimes + nickels + pennies
print(coins)
