#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(20);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
   
    
    //draw circle
    float x=50;
     float y=350;
     float width=100;
    float height=100;
    
    ofBackground(0);
    
    ofSetColor(255,255,255);
    ofDrawCircle(x+width*0.5,y+y*0.5,50);
    
    x=50;
    y=350;
    width=100;
    height=100;
    
   
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofDrawCircle(ofRandom(x+width*0.5,120),y+height*1.75,25);
    
    x=200;
    y=350;
    width=100;
    height=100;
    
    
    
    ofSetColor(255,255,255);
    ofDrawCircle(x+width*0.25,y+y*0.5,50);
    
    x=200;
    y=350;
    width=100;
    height=100;
    
  
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofDrawCircle(ofRandom(x+width*0.25,250),y+height*1.75,25);
    
    x=100;
    y=600;
    width=15;
    height=50;
    
  
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofSetLineWidth(5);
    ofDrawLine(x+20, ofRandom(y,620), x, y+30);
    ofDrawLine(x+20, ofRandom(y,620), x+40, y+30);
    ofDrawLine(x+60, ofRandom(y,620), x+40, y+30);
    ofDrawLine(x+60, ofRandom(y,620), x+80, y+30);
    ofDrawLine(x+100, ofRandom(y,620), x+80, y+30);
    ofDrawLine(x+100, ofRandom(y,620), x+120, y+30);
    
    
    //draw madmug
    
 
    
    x=500;
    y=200;
    width=300;
    height=370;
    
    
//
 
//    ofSetColor(ofRandom(100,255),ofRandom(0,0), ofRandom(0,0));
    
 ofSetColor(ofMap(mouseY,0,ofGetHeight(),120,255),0,0);
    
    ofSetRectMode(OF_RECTMODE_CENTER);
  

    width = ofMap(mouseX,0,ofGetWidth(), 100,600);
    height = ofMap(mouseX,0,ofGetHeight(),100,600);

     ofDrawRectangle(x+150,y+185,width,height);
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    
    ofSetColor(255,0,0);
    
//    y=200 - ofRandom(100);
    float shift = ofMap(sin(ofGetElapsedTimef()), -1,1,0,100 );
    y = 200 - shift;

    ofDrawLine(x+150,y,620,y-30);
    ofDrawLine(620,y-30,650,y-60);
    ofDrawLine(650,y-60,620,y-90);
    
    ofSetColor(255,0,0);
    ofDrawLine(600,y,570,y-30);
    ofDrawLine(570,y-30,600,y-60);
    ofDrawLine(600,y-60,570,y-90);
    
    ofSetColor(255,0,0);
    ofDrawLine(700,y,670,y-30);
    ofDrawLine(670,y-30,700,y-60);
    ofDrawLine(700,y-60,670,y-90);
    
    
    x=520;
    y=250;
    width=40;
    height=40;
    
    ofSetColor(ofRandom(0,100),ofRandom(0,0), ofRandom(0,0));
    ofDrawRectangle(x+50, y+50, width, height);
    ofDrawRectangle(x+170, y+50, width, height);
    ofSetLineWidth(5);
    ofDrawLine(x+130, y+170, x+85, y+230);
    ofDrawLine(x+130, y+170, x+185, y+230);
    
    x=800;
    y=300;
    
    width = ofMap(mouseX,0,ofGetWidth(), 100,600);
    height = ofMap(mouseX,0,ofGetHeight(),100,600);
    
    ofSetColor(255,0,0);
    ofSetLineWidth(25);
    ofDrawLine(x,y,x+50,y);
    ofDrawLine(x,y+150,x+50,y+150);
    ofDrawLine(x+60,y-12,x+60,y+162);
    
    //time practice
     float time = ofGetElapsedTimef();
     float sinOfTime = sin(time);
     float mappedSin = ofMap(sinOfTime, -1,1,0,300 );


     x = 50;
     y = 50;
     width = 100;
     height = 100;
    ofSetColor(100, 100, 100);
    ofDrawRectangle(ofMap(sin(time + 0.5), -1,1,0,300 ), y, width, height);
    
    
    x = 50;
    y = 50;
    width = 100;
    height = 100;
    
    ofSetColor(255);
    ofDrawRectangle(ofMap(sin(time + 0.75), -1,1,0,300 ),y+y*0.5, width*0.5, height*0.5);
    
    x = 50;
    y = 50;
    width = 100;
    height = 100;
    
    ofSetColor(100, 100, 100);
    ofDrawRectangle(ofMap(sin(time + 0.5), -1,1,0,300 ),y+y*0.75, width*0.25, height*0.25);
    
    x = 150;
    y = 150;
    width = 50;
    height = 50;
    ofSetColor(100, 100, 100);
    ofDrawRectangle(ofMap(sin(time + 0.35), -1,1,0,300 ), y, width, height);
    
    
    x = 150;
    y = 150;
    width = 50;
    height = 50;
    
    ofSetColor(255);
    ofDrawRectangle(ofMap(sin(time + 0.25), -1,1,0,300 ),y+y*0.5, width*0.5, height*0.5);
    
    x = 150;
    y = 150;
    width = 50;
    height = 50;
    
    ofSetColor(100, 100, 100);
    ofDrawRectangle(ofMap(sin(time + 0.125), -1,1,0,300 ),y+y*0.75, width*0.25, height*0.25);
    
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
