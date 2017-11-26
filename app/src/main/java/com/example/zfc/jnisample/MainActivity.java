package com.example.zfc.jnisample;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
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

    /**
     * 字符串的使用
     * @param view
     */
    public void String(View view) {
        Log.e("zfc", revert("110"));
    }

    /**
     * 将字符串中进行反转
     * @param content
     * @return
     */
    private native String revert(String content);
}
