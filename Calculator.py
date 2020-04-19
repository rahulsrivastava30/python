def calculator(first_num,second_num,operation):
    if(operation=='add'):
        return first_num+second_num
    elif(operation=='subtract'):
        return first_num-second_num
    else:
        return "error"
first=(int)(input("Enter first num: "))
second=(int)(input("Enter second num: "))
symbol=input("Enter the operation-add or subtract: ")
answer=calculator(first,second,symbol)
if(answer=="error"):
    print("Please check the operation entered, as there seems to be invalid input, the symbol you entered is "+symbol+" ,it should be add or subtract")
else:
    print("Answer is "+str(answer))