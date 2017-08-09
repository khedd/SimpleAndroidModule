package com.willitwork.moduleexample;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

import com.willitwork.mylibrary.LibraryInterface;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        LibraryInterface libraryInterface = new LibraryInterface();
        TextView textView = (TextView)findViewById(R.id.textView);
        textView.setText( libraryInterface.getText());;
    }
}
