package com.sgscript.sample;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;
import android.widget.LinearLayout;
import android.text.method.ScrollingMovementMethod;

public class Main extends Activity
{
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        TextView label = new TextView(this);
        label.setText(initAndDumpGlobals(getPackageName()));
        label.setLayoutParams(new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT,
                LinearLayout.LayoutParams.MATCH_PARENT));
        label.setMovementMethod(new ScrollingMovementMethod());
        setContentView(label);
    }
    
    public static native String initAndDumpGlobals( String packageName );
    static
    {
        // all libraries used statically should be referenced here
        // plugins can be loaded by adding additional paths
        System.loadLibrary("sgscript");
    	System.loadLibrary("sgsxgmath");
    	System.loadLibrary("sgs_sample");
    }
}
