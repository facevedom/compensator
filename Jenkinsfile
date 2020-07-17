pipeline {
    agent any

    stages {
        stage('Compile') {
            steps {
                dir('compensator') {
                    sh 'arduino-cli compile --fqbn arduino:avr:uno'
                }
            }
        }
        stage('Upload') {
            steps {
                dir('compensator') {
                    sh 'arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno --input-dir build/arduino.avr.uno/'
                }
            }
        }
    }
}
