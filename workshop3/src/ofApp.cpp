#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    velx=1;
    x=300;
    vely=0;
    y=300;
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetFrameRate(60);
    x=x+velx;
    y=y+vely;
    if(x>ofGetWidth()){
        x=500;
        y=0;
        velx=0;
        vely=1;
    }
    if(y>ofGetHeight()){
        x=300;
        y=300;
        velx=1;
        vely=0;
    }
    
//    if(x>ofGetHeight()){
//        velx=velx*-1;
//    }
//    if(y>ofGetHeight()
//    ){
//        velx=velx*-1;
//    }
    ofBackground(255);
    ofSetColor(127+127*sin(ofGetElapsedTimef()*10),0,0);
    
    ofDrawRectangle(x,y,20,100);
    ofDrawRectangle(x-40,y+40,100,20);
   
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
