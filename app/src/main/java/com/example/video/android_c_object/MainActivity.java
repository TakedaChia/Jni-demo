package com.example.video.android_c_object;

import android.app.Activity;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {
    private TextView tv1;

    static {

        System.loadLibrary("JniTest");

    }

    public native  String getStringFromNative();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        tv1 = (TextView) findViewById(R.id.tv1);
        tv1.setText(getStringFromNative()+"");
    }
}
