pipeline {
    agent any
    
    stages {
        stage('Pribavljanje') {
            steps {
                // Checkout the repository
                checkout scm
            }
        }
        
        stage('Kompajliranje') {
            steps {
                // Build the C++ program
                sh 'g++ -o myprogram main.cpp'
            }
        }
        
        stage('Testiranje') {
            steps {
                // Run tests
                sh './myprogram --test'
                
                // Check if the program has "using namespace std;"
                sh 'grep -q "using namespace std;" main.cpp || { echo "Testiranje neuspjesno, nema \"using namespace std;\""; exit 1; }'
            }
        }
    }
}
