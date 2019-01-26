print("Hello Github!")
file_squestns = open('StudentQuestions.txt', 'r')
file_sanswers = open('StudentAnswers.txt', 'w')
for line in file_squestns:
  ans = input(line)
  file_sanswers.write(ans + '\n') 
print("Goodbye Github!")
file_squestns.close()
file_sanswers.close()



