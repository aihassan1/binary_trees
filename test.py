def countdown(n):
    # Base Case
    if n <= 0:
        print("Blastoff!")
        return
    else:
        print(n)
        # Recursive Call
        countdown(n -1 )
    
# Calling the function
countdown(500)
