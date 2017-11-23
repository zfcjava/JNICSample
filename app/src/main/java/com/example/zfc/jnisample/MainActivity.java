package com.example.zfc.jnisample;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }



    static {
        System.loadLibrary("native-lib");
    }

    public void click(View view) {
        ((TextView)view).setText(getStringFronC());
    }

    private native String getStringFronC();
}
