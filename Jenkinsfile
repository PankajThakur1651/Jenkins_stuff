pipeline
{
    agent any 
    environment {
    PATH = "/usr/bin/cmake/:${env.PATH}"
  }
        stages{
            
            stage("Clean up")
            {
                steps {
                    deleteDir()
                }
            }
            stage("Clone Repo")
            {
                steps
                {
                    echo "PATH is: ${env.PATH}"
                    sh "git clone https://github.com/PankajThakur1651/jenkins_tutorial.git"
                }
            }
            stage("Build")
            {
                steps{
                    dir("jenkins_tutorial/build"){
                        sh "rm -rf *"
                        sh "cmake .."
                        sh "make"
                    }
                }
            }
            stage("Test")
            {
                steps{
                    dir("jenkins_tutorial/build"){
                        sh "./runTests --gtest_output=xml:testing-results.xml"
                        echo "print xml contents now "
                        sh "cat testing-results.xml"
                    }
                }
            }
         
        }
        post {
        always{
            echo "++++ Is it printed"
         xunit(
            testTimeMargin: '3000',
            thresholdMode: 1,
            thresholds: [
                failed (failureNewThreshold: '0', failureThreshold: '0', unstableNewThreshold: '0', unstableThreshold: '0'),
                skipped(failureNewThreshold: '10', failureThreshold: '10', unstableNewThreshold: '10', unstableThreshold: '10')
            ],
            tools: [GoogleTest(deleteOutputFiles: true, failIfNotNew: true, pattern: '**/testing-results.xml', skipNoTestFiles: true,  stopProcessingIfError: true)]
        )
        }
    }
}

