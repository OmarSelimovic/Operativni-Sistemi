pipeline {
    agent any
    
    stages {
        stage('Pribavljanje') {
            steps {
                // Checkout the repository
                checkout scm
            }
        }
        
        stage('Kompajliranje i Testiranje') {
            steps {
                script {
                    // Find all main.cpp files recursively
                    def mainFiles = sh(
                        returnStdout: true,
                        script: 'find . -name main.cpp | sort'
                    ).trim().split('\n')
                    
                    // Iterate over each main.cpp file
                    for (def mainFile in mainFiles) {
                        echo "Processing: ${mainFile}"
                        
                        // Build the C++ program
                        def compileOutput = sh(
                            returnStdout: true,
                            script: "g++ -o myprogram ${mainFile} 2>&1"
                        )
                        
                        // Check if compilation was successful
                        if (compileOutput.contains("error")) {
                            error("Kompajliranje nije uspjelo:\n${compileOutput}")
                        }
                        
                        // Check if the program has "include namespace std;" and "cout<<"
                        def fileContent = sh(
                            returnStdout: true,
                            script: "cat ${mainFile}"
                        )
                        
                        if (fileContent.contains("include namespace std;")) {
                            echo "Test uspješan"
                            
                            if (fileContent.contains("cout<<")) {
                                echo "Program sadrži input"
                            } else {
                                echo "Program ne sadrži input"
                            }
                            
                            echo "Uspješan main.cpp: ${mainFile}"
                        } else {
                            error("Test nije uspješan: Nedostaje \"include namespace std;\"")
                        }
                    }
                }
            }
        }
    }
}

