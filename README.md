# Buying-a-smartphone

challenge: A mobile device review site wants to make an application to allow its visitors to find the smartphones they want more easily. The application must allow registering smartphones and searching for those that meet the minimum hardware requirements. Write a C program to help with this task. To do this, define a Smartphone structure with the fields:

char model[40];
int memory;
float processor;
float camera;
float battery;
Implement the function int cadastraSmartphone(int qnt_cadastrada, Smartphone phones[]), which should add a smartphone to the registry at the end of the list, request data from the user to fill in the structure and return the number of smartphones in the list.
Implement the function int PesquisaSmartphones(int qnt_cadastrada, Smartphone phones[], Smartphone reqMin), which should display on the screen the data of all smartphones that meet the minimum requirements (reqMin) and return the number of smartphones found using this criterion.

In the main() function, in a loop, the program will receive from the user the response related to the registration of a smartphone, as long as it is 'y' (for yes), the cadastraSmartphone function must be called. Otherwise, the program must stop registering new smartphones.  After the end of the registration loop, the program must request a Smartphone structure with the minimum requirements (reqMin) to be passed to the Smartphones search function, so that it searches the registration list for compatible smartphones. Finally, the program must print the number of smartphones found by the Smartphones search function. Note that, for the Smartphone structure with the minimum requirements, the model field (device name) must not be filled in, as it is not an evaluation criterion.

Tip: Use scanf(" %[^\n]s", model) to read the model and scanf(" %d %f %f %f", memory, ...) to read the other smartphone data.
