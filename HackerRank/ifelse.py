i=int(input())
if(i%2==0):
    if(i>1 and i<6):
        print("Not Weird")
    elif(i>5 and i<21):
        print("Weird")
    else:
        print("Not Weird")
else:
    print("Weird")