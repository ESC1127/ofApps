#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0,0,0);
    ofSetColor(100, 100, 100);
    
//    ofDrawLine(50, 125, 50, 75);
//    ofDrawLine(50, 125,100,125);
//    ofDrawLine(50, 75,100,75);
//    ofDrawLine(50, 100,100,100);
//
//    ofDrawLine(200, 125, 200, 75);
//    ofDrawLine(200, 125,250,125);
//    ofDrawLine(200, 75,250,75);
//    ofDrawLine(200, 100,250,100);
//
//    ofDrawLine(50, 225, 50, 175);
//    ofDrawLine(50, 225,100,225);
//    ofDrawLine(50, 175,100,175);
//    ofDrawLine(50, 200,100,200);
//
//    ofDrawLine(200, 125, 200, 75);
//    ofDrawLine(200, 125,250,125);
//    ofDrawLine(200, 75,250,75);
//    ofDrawLine(200, 100,250,100);
//
    
    float x=50;
    float y=50;
    float width=100;
    float height=100;
    
    //ofSetColor(80, 80, 80);
    //ofDrawRectangle(x, y, width, height);
    
    ofSetColor(255,255,255);
    ofDrawLine(x,y,x,y+height);
    ofDrawLine(x, y, x+width,y);
    ofDrawLine(x, y+height*0.5, x+width,y+height*0.5);
    ofDrawLine(x, y+height*1, x+width, y+height*1);
    
     x=50;
     y=200;
     width=100;
     height=100;
    
    //ofSetColor(80, 80, 80);
    //ofDrawRectangle(x, y, width, height);
    
    ofSetColor(255,255,255);
    ofDrawLine(x,y,x,y+height);
    ofDrawLine(x, y, x+width,y);
    ofDrawLine(x, y+height*0.5, x+width,y+height*0.5);
    ofDrawLine(x, y+height*1, x+width, y+height*1);
    
    x=200;
    y=50;
    width=100;
    height=100;
    
    //ofSetColor(80, 80, 80);
    //ofDrawRectangle(x, y, width, height);
    
    ofSetColor(255,255,255);
    ofDrawLine(x,y,x,y+height);
    ofDrawLine(x, y, x+width,y);
    ofDrawLine(x, y+height*0.5, x+width,y+height*0.5);
    ofDrawLine(x, y+height*1, x+width, y+height*1);
    
    x=200;
    y=200;
    width=100;
    height=100;
    
    //ofSetColor(80, 80, 80);
    //ofDrawRectangle(x, y, width, height);
    
    ofSetColor(255,255,255);
    ofDrawLine(x,y,x,y+height);
    ofDrawLine(x, y, x+width,y);
    ofDrawLine(x, y+height*0.5, x+width,y+height*0.5);
    ofDrawLine(x, y+height*1, x+width, y+height*1);
    //ofDrawLine(50, 100,100,100);
    //ofDrawLine(50, 125, 50, 100);
    
    x=50;
    y=50;
    width = mouseX;
    height=mouseY;
    
    ofSetColor(255,255,255);
    ofDrawLine(x,y,x,y+height);
    ofDrawLine(x, y, x+width,y);
    ofDrawLine(x, y+height*0.5, x+width,y+height*0.5);
    ofDrawLine(x, y+height*1, x+width, y+height*1);
    

    
    
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
