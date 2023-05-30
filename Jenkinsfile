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
                    def compileOutput = sh(returnStdout: true, script: 'g++ -o myprogram main.cpp 2>&1')
           
                    }
                }
            }
        }

        stage('Testiranje') {
            steps {
                // Check if the program has "using namespace std;"
                script {
                    def fileContent = sh(returnStdout: true, script: 'cat main.cpp')
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
