package com.willitwork.mylibrary;

public class LibraryInterface {

    public String getText() {
        return getNativeText();
    }

    private native String getNativeText();


    static {
        System.loadLibrary( "lib_myprecious");
    }
}
