pipeline {
  agent any
  stages {
    stage('Pribavljanje') {
      steps {
        checkout scm
      }
    }

    stage('Kompajliranje') {
      steps {
        script {
          def compileOutput = sh(returnStdout: true, script: 'g++ -o myprogram main.cpp 2>&1')
          if (compileOutput.contains("error")) {
            error("Kompajliranje nije uspjelo:\n${compileOutput}")
          }
        }

      }
    }

    stage('Testiranje') {
      steps {
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