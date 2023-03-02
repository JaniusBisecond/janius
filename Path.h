#pragma once
#include<iostream>
#include<string>
using namespace std;

namespace janius
{
    /// <summary>
    /// parse the path
    /// 解析文件路径
    /// </summary>
    class Path
    {
    public:
        //@param fpath 文件完整路径
        Path(const string& fpath);
        Path(const Path&) = delete;

        //@brief 示例源路径: C:/Users/example.txt
        //@return C:/Users/example.txt      
        inline const string& filepath() { return _filepath; }      

        //@brief 示例源路径: C:/Users/example.txt
        //@return C:/Users/
        inline const string& path() { return _path; }

        //@brief 示例源路径: C:/Users/example.txt
        //@return example.txt
        inline const string& filename() { return _filename; }

        //@brief 示例源路径: C:/Users/example.txt
        //@return example
        inline const string& name() { return _name; }

        //@brief 示例源路径: C:/Users/example.txt
        //@return .txt
        inline const string& suffix() { return _suffix; }

    private:
        void path_parse();
        void filename_parse();
        void name_parse();
        void suffix_parse();
        bool issuffix();

    private:
        string _filepath;
        string _path;    
        string _filename;
        string _name;    
        string _suffix;  
    };
}