# .sh file
#!/bin/bash
# steps to follow
# ACCESS PI


#

#NOTE: YOU MUST GENERATE A KEY BEFORE RUNNING THIS SCRIPT
    #ssh-keygen -t rsa
    #cat .ssh/id_rsa.pub | ssh pi@192.168.1.11 'cat >> .ssh/authorized_keys'
    #then enter the password to the pi and you'll be good to go
#	

#PULL FROM PI NO. 1, MOVE FILE TO TDOA DIRECTORY
scp hat1@192.168.1.10:~/hat/gps/data.txt .
mv data.txt data1.txt
#mv data1.txt ~/tdoa/


scp hat2@192.168.1.11:~/hat/gps/data.txt .
mv data.txt data2.txt
#mv data2.txt ~/tdoa/


scp hat3@192.168.1.12:~/hat/gps/data.txt .
mv data.txt data3.txt
#mv data3.txt ~/tdoa/
# NOTE: MOVING FILE TO DIRECTORY CONTAINING FILE W/SAME NAME
# WILL OVERWRITE WHATEVER'S WRITTEN IN THAT FILE




