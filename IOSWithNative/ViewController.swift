//
//  ViewController.swift
//  IOSWithNative
//
//  Created by Stork_lixiaojun on 2021/2/2.
//

import UIKit
import Foundation

class ViewController: UIViewController {

    //EditTextView
    @IBOutlet weak var mEditText: UITextField!
    //TextView
    @IBOutlet weak var mTextView: UILabel!
    
    //输入的文本
    var inputText:String? = "";
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        //添加EditText的监听器
        mEditText.addTarget(self, action: #selector(textDidChange(_:)), for: .editingChanged)
        //---------------从C中获取值---------------
        print("getIntFromC=\(getIntFromC())")
        print("getFloatFromC=\(getFloatFromC())")
        print("getDoubleFromC=\(getDoubleFromC())")
        print("getStringFromC=\(String(cString:getStringFromC()))")
        //-----------------设置值------------------
        setIntValue(100)
        let floatValue:Float = 100.1111;
        setFloatValue(floatValue)
        setDoubleValue(100.2222)
        setStringValue("swift")
    }

    /**
     点击按钮
     */
    @IBAction func connect(_ sender: UIButton) {
        setStringValue(inputText)
    }
    
    @objc func textDidChange(_ textField:UITextField){
        //给全局变量赋值
        inputText = textField.text ?? "defaultValuezzz"
    }
    
    
}

