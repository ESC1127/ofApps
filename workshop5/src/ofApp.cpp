#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int i=0; i<50; i++){
        x[i]=ofRandom(0,600);
        y[i]=ofRandom(0,900);
        velx[i]=ofRandom(0,1);
        vely[i]=0; //ofRandom(0,1);
    }
    
        

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    for(int i=0; i<50; i++){

    x[i]=x[i]+velx[i];
    y[i]=y[i]+vely[i];
    }
    
    for(int i=0; i<50; i++){
    if(x[i]>ofGetWidth()){
        x[i]=ofRandom(0,900);
        y[i]=0;
        velx[i]=0;
        vely[i]=1;
 }

       if(y[i]>ofGetHeight() ){
           x[i]=ofRandom(0,600);
           y[i]=ofRandom(0,900);
           velx[i]=1;
           vely[i]=0;
       }
    }
    
        
    
    ofBackground(0);
    ofSetColor(127+127*sin(ofGetElapsedTimef()*4),0,0);
    
    
    for(int i=0; i<50; i++){
        
    ofDrawRectangle(x[i],y[i],20,100);
    ofDrawRectangle(x[i]-40,y[i]+40,100,20);
    }
    
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
