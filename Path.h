#pragma once
#include<iostream>
#include<string>
using namespace std;

namespace janius
{
    /// <summary>
    /// parse the path
    /// �����ļ�·��
    /// </summary>
    class Path
    {
    public:
        //@param fpath �ļ�����·��
        Path(const string& fpath);
        Path(const Path&) = delete;

        //@brief ʾ��Դ·��: C:/Users/example.txt
        //@return C:/Users/example.txt      
        inline const string& filepath() { return _filepath; }      

        //@brief ʾ��Դ·��: C:/Users/example.txt
        //@return C:/Users/
        inline const string& path() { return _path; }

        //@brief ʾ��Դ·��: C:/Users/example.txt
        //@return example.txt
        inline const string& filename() { return _filename; }

        //@brief ʾ��Դ·��: C:/Users/example.txt
        //@return example
        inline const string& name() { return _name; }

        //@brief ʾ��Դ·��: C:/Users/example.txt
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