pipeline {
    agent any
    
    stages {
        stage('Pribavljanje') {
            steps {
                // Uzima sa repo-a
                checkout scm
            }
        }
        
        stage('Kompajliranje') {
            steps {
                // Kompajlira C++ program
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
                // Provejrava da li program ima "using namespace std;"
                script {
                    def fileContent = sh(returnStdout: true, script: 'cat $(find . -name main.cpp)')
                    if (fileContent.contains("using namespace std;")) {
                        echo "Test uspješan"
                    } else {
                        error("Test nije uspješan: Nedostaje \"using namespace std;\"")
                    }
                }
            }
        }
    }
}
