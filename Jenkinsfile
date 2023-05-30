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
                script {
                    def compileOutput = sh(returnStdout: true, script: 'g++ -o myprogram $(find . -name main.cpp) 2>&1')
                    if (compileOutput.contains("error")) {
                        error("Kompajliranje nije uspjelo:\n${compileOutput}")
                    }
                }
            }
        }
        
        stage('Testiranje') {
            steps {
                // Check if the program has "include namespace std;"
                script {
                    def fileContent = sh(returnStdout: true, script: 'cat $(find . -name main.cpp)')
                    if (fileContent.contains("include namespace std;")) {
                        echo "Test uspješan"
                    } else {
                        error("Test nije uspješan: Nedostaje \"include namespace std;\"")
                    }
                }
            }
        }
    }
}
