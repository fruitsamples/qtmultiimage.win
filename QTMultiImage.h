//////////
//
//	File:		QTMultiImage.h
//
//	Contains:	Code for displaying multiple images contained in a single image file.
//
//	Written by:	Tim Monroe
//
//	Copyright:	� 1998 by Apple Computer, Inc., all rights reserved.
//
//	Change History (most recent first):
//
//	   <1>	 	09/30/98	rtm		first file
//	   
//////////

//////////
//
// header files
//	   
//////////

#include <Movies.h>
#include <QuickTimeComponents.h>


//////////
//
// constants
//	   
//////////

#define kImageDisplayTime		120		// ticks


//////////
//
// function prototypes
//	   
//////////

OSErr					QTMulti_ShowAllImagesInFile (FSSpecPtr theFSSpecPtr);
