#include <iostream>

void fibonacci() {
    int pesq, fib[10] = {1};
    bool encontrado = false;
    char continuar = 's';
    
    std::cout << "Digite um numero para saber se ele pertence a sequencia de Fibonacci:";
    std::cin >> pesq;
     
    for(int i=0;i<10 && !encontrado;i++) {
        fib[i+2]=fib[i]+fib[i+1];
        
        if(fib[i+2]==pesq) {
            std::cout << "O valor " << pesq << " pesquisado esta localizado na casa numero " << i+1 << " da sequencia de Fibonacci." << std::endl;
            encontrado = true;
        }
    }
     
    if(!encontrado) {
        std::cout << "O valor " << pesq << " nao existe na sequencia de Fibonacci." << std::endl;
    }
     
    std::cout << "Deseja continuar pesquisando valores? (s/n): ";
    std::cin >> continuar;
    
    if(continuar=='s') {
        fibonacci();
    }
    
    if(continuar=='n'){
    	std::cout << "Okay, adeus ;D";
	}
}

int main(){
	 
	 int pesq, fib[10] = {1};
	 bool encontrado = false;
	 char continuar='s';
	 
	 std::cout << "Digite um numero para saber se ele pertence a sequencia de Fibonacci:";
	 std::cin >> pesq;
	 
	 for(int i=0;i<10 && !encontrado;i++){
	 	fib[i+2]=fib[i]+fib[i+1];
	 	
	 	if(fib[i+2]==pesq){
	 		std::cout << "O valor " << pesq << " pesquisado esta localizado na casa numero " << i+1 << " da sequencia de Fibonacci." << std::endl;
	 		encontrado = true;
		 }
	 }
	 
	 if(!encontrado){
	 	std::cout << "O valor " << pesq << " nao existe na sequencia de Fibonacci." << std::endl;
	 }
	 
	 std::cout << "Deseja continuar pesquisando valores? (s/n): ";
	 std::cin >> continuar;
	 
	 if(continuar=='s'){
	 	fibonacci();
	 }
	 
	 if(continuar=='n'){
    	std::cout << "Okay, adeus ;D";
	 }
	 
	 return 0;
}






