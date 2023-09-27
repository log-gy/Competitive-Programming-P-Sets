n = int(input()) # Number of attendees
attenance_sum = [0, 0, 0, 0, 0] # Sum of avalibilty of attendees

for i in range(n):
    attendee = input() # Ex: str "Y..Y."
    # Following finds which days attendees are able to come
    # 1++ on index of attendance_sum if they can
    for j in range(len(attendee)):
        if attendee[j] == "Y": 
            attenance_sum[j] += 1

itr_counter = 0
greatest_days = [] # list of days with highest attendence
# Following finds all days with the largest sum
for day in attenance_sum:
    itr_counter += 1
    if day == max(attenance_sum):
        greatest_days.append(itr_counter) # because zero index
    
if len(greatest_days) == 1: # Following prints output
    print(greatest_days[0])

else: # Comma seperated list if more than one greatest day
    out_string = ""
    for day in greatest_days:
        out_string += f"{day},"
    
    print(out_string[:-1]) 
    # Get rid of last character because of dragging comma

# This is a very dumb way to do this all but who cares