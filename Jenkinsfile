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
            }
        }
    }
}
