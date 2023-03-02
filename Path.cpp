#include "Path.h"
namespace janius
{

    Path::Path(const string& fpath) :
        _filepath(fpath)
    {
        path_parse();
        filename_parse();
        name_parse();
        suffix_parse();
    }

    void Path::path_parse()
    {
        _path = _filepath.substr(0, _filepath.rfind('/') + 1);
    }

    void Path::filename_parse()
    {
        _filename = _filepath.substr(_filepath.rfind('/') + 1, _filepath.size() - _filepath.rfind('/'));
    }

    void Path::name_parse()
    {
        if (issuffix())
        {
            _name = _filename.substr(0, _filename.find('.'));
        }
        else
        {
            _name = _filename;
        }
    }

    void Path::suffix_parse()
    {
        if (issuffix())
        {
            _suffix = _filename.substr(_filename.find('.'), _filename.size() - _filename.find('.'));
        }
    }

    bool Path::issuffix()
    {
        if (_filename.find('.') == string::npos)
        {
            _suffix = "";
            return false;
        }
        return true;
    }

}