#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetCircleResolution(20);
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    float time = ofGetElapsedTimef();
    
    ofSetColor(255);
    for (int i = 0; i< 800; i++){
        ofSetColor( 127 + 127 * sin(i*0.01+time),
                   (0,0),
                   127 + 127 * sin(i*0.05+time));
        
        ofDrawLine(400 + 400 * sin(time+i*0.004),i,ofRandom(0,100), ofRandom(0,100));
        
        ofDrawLine(400 + 400 * sin(time + i*0.002),i,ofRandom(0,100), ofRandom(0,100));
        
        ofDrawLine(i,400 + 400 * sin(time+i*0.004),ofRandom(0,100), ofRandom(0,100));
        
        ofDrawLine(i,400 + 400 * sin(time + i*0.002),ofRandom(0,100), ofRandom(0,100));
        
        ofDrawLine(400 + 400 * sin(time+i*0.004),i,ofRandom(1100,1000), ofRandom(1100,1000));
        
        ofDrawLine(400 + 400 * sin(time + i*0.002),i,ofRandom(1100,1000), ofRandom(1100,1000));
        
        ofDrawLine(i,400 + 400 * sin(time+i*0.004),ofRandom(1100,1000), ofRandom(1100,1000));
        
        ofDrawLine(i,400 + 400 * sin(time + i*0.002),ofRandom(1100,1000), ofRandom(1100,1000));
    }
    

//                   ofDrawCircle(400 + 400 * sin(time + i*0.002),i,50 + 50 * sin(time*3.0 + i*0.027));
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
