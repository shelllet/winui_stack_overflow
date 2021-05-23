#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App1::implementation
{
    using namespace std::literals;
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }


    Windows::Foundation::IAsyncOperation<Runtime> Test() {

       // co_await 1ms;
        Runtime runtime;

        co_return runtime;
    }

    Windows::Foundation::IAsyncAction MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        co_await resume_background();

        for (int i = 0; i < 10000; ++i) {

            co_await Test();
       }
    }
}
