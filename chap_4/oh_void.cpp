#include <iostream>
void displayUbuntuASCII() {
  std::cout << R"(            .-/+oossssoo+/-.      
        `:+ssssssssssssssssss+:`         
      -+ssssssssssssssssssyyssss+-   
    .ossssssssssssssssssdMMMNysssso.        
   /ssssssssssshdmmNNmmyNMMMMhssssss/      
  +ssssssssshmydMMMMMMMNddddyssssssss+    
 /sssssssshNMMMyhhyyyyhmNMMMNhssssssss/    
.ssssssssdMMMNhsssssssssshNMMMdssssssss.   
+sssshhhyNMMNyssssssssssssyNMMMysssssss+   
ossyNMMMNyMMhsssssssssssssshmmmhssssssso   
ossyNMMMNyMMhsssssssssssssshmmmhssssssso   
+sssshhhyNMMNyssssssssssssyNMMMysssssss+  
.ssssssssdMMMNhsssssssssshNMMMdssssssss.   
 /sssssssshNMMMyhhyyyyhdNMMMNhssssssss/    
  +sssssssssdmydMMMMMMMMddddyssssssss+     
   /ssssssssssshdmNNNNmyNMMMMhssssss/      
    .ossssssssssssssssssdMMMNysssso.        
      -+sssssssssssssssssyyyssss+-          
        `:+ssssssssssssssssss+:`           
            .-/+oossssoo+/-.)";
  std::cout << '\n';
}

int main() {
  displayUbuntuASCII();
  return 0;
}
