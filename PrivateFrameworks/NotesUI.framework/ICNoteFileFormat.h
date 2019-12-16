/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICNoteFileFormat : NSObject

+ (void)exportNote:(id)arg1 toURL:(id)arg2;
+ (id)fileUTType;
+ (bool)importNoteFromURL:(id)arg1 toNote:(id)arg2 error:(id*)arg3;
+ (id)pathExtension;

- (id)allowedFileTypes;
- (bool)canHandleFileURL:(id)arg1;
- (void)cancelParsing;
- (void)parseFileURL:(id)arg1 newNoteBlock:(id /* block */)arg2 updatedNoteBlock:(id /* block */)arg3 errorBlock:(id /* block */)arg4 completedParsingBlock:(id /* block */)arg5;
- (void)totalNotesFoundAtFileURL:(id)arg1 completionBlock:(id /* block */)arg2;

@end
