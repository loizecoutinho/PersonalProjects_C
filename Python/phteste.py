
ph = int(input("Please text the pH(value between 0 and 14)"))
if ph<0:
  print("Números negativos não são aceitos")
elif ph > 14:
  print("O valor de acidez vai até 14 apenas")
elif ph > 7:
  print("Basic")
elif ph < 7:
  print("Acidic")
else:
  print("Neutral")