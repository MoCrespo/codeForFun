def good(answer):
    print(f"Good your answer is {answer}")

def bad(result):
    print(f"Bad the right answer is {result}")

def sum(num1, num2):
    answer = int(input(f"{num1} + {num2} = "))
    result = num1 + num2
    if(answer == result):
        good(answer)
    else:
        bad(result)

def sub(num1, num2):
    answer = int(input(f"{num1} - {num2} = "))
    result = num1 - num2
    if(answer == result):
        good(answer)
    else:
        bad(result)

def mul(num1, num2):
    answer = int(input(f"{num1} * {num2} = "))
    result = num1 * num2
    if(answer == result):
        good(answer)
    else:
        bad(result)

def div(num1, num2):
    answer = float(input(f"{num1} / {num2} = "))
    result = num1 / num2
    if(answer == result):
        good(answer)
    else:
        bad(result)
again = "yes"
while(again == "yes"):
    numbers = []
    print("--- Enter two numbers ---")
    a = int(input("Enter number one: "))
    b = int(input("Enter number two: "))
    if(a < b):
        numbers.append(b)
        numbers.append(a)
    else:
        numbers.append(a)
        numbers.append(b)

    sum(numbers[0], numbers[1])
    sub(numbers[0], numbers[1])
    mul(numbers[0], numbers[1])
    div(numbers[0], numbers[1])
    again = input("Would you play again: ")