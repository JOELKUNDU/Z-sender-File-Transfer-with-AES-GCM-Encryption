# Z-sender
Secure File transfer utility over the internet using AES-GCM encryption

<h2>What it Does?</h2><br>
Z-Sender is a terminal utility to share files between 2 Computers and works on both WINDOWS and LINUX. The program allows user to send 1 file at a time without any size limits and is limited only by the internet speed. To send a file, the user enters the path to the file to be sent. The app then ask for a password to encrypt the file. Passwords can also be generated. The program generates a RECIEVE CODE. Share the RECIEVE CODE and the PASSWORD to the reciever. To RECIEVE a file, the program will ask for the RECIEVE CODE and PASSWORD. It will also ask for the output path where the decrypted file should be saved. <br>
<br>
Encrypted Files can also be decrypted using ZENC (https://github.com/JOELKUNDU/Zenc---command-line-file-encrypter-decryptor) by choosing AES-GCM 64K tables mode and the passcode sent by the sender.<br>
<br>
<h2>How to setup?</h2><br>
Make sure you have the latest libcurl and crypto++ libraries installed on your system. Also use c++ standard 17 and above.<br>
Then simply compile the files in the CODE dir using any compiler of your choice. In-case of issues contact me @ jdevcode@gmail.com<br>
<br>
TIP: Incase of LINUX systems drop the bin in BIN dir, incase of WINDOWS add the path to the exe to your PATH enviroment variables; doing this allows you to start the program simply by typing Zsender in the terminal instead of the entire path to the executable.<br>
<br>
<h2>Contact Information:</h2><br>
EMAIL: jdevcode2@gmail.com<br>
<br>
Refer to ISSUE TEMPLATES to raise issues.<br>
Refer to Code Of Conduct and License files for legal information<br>
The project is provided as OPEN SOURCE under GNU GPL v3.<br>






