﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#pragma once


namespace winrt::WordCounter::implementation
{
    using IInspectable = ::winrt::Windows::Foundation::IInspectable;

    template <typename D, typename ... I>
    struct MainWindowT : public ::winrt::WordCounter::implementation::MainWindow_base<D,
        ::winrt::Microsoft::UI::Xaml::Markup::IComponentConnector,
        I...>
    {
        using base_type = typename MainWindowT::base_type;
        using base_type::base_type;
        using class_type = typename MainWindowT::class_type;

        void InitializeComponent();
        virtual void Connect(int32_t connectionId, IInspectable const& target);
        virtual ::winrt::Microsoft::UI::Xaml::Markup::IComponentConnector GetBindingConnector(int32_t connectionId, IInspectable const& target);
        void UnloadObject(::winrt::Microsoft::UI::Xaml::DependencyObject const& dependencyObject);
        void DisconnectUnloadedObject(int32_t connectionId);

        ::winrt::Microsoft::UI::Xaml::Controls::ListView WordsListView()
        {
            return _WordsListView;
        }
        void WordsListView(::winrt::Microsoft::UI::Xaml::Controls::ListView value)
        {
            _WordsListView = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::ListView CountListView()
        {
            return _CountListView;
        }
        void CountListView(::winrt::Microsoft::UI::Xaml::Controls::ListView value)
        {
            _CountListView = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::ListView PositionListView()
        {
            return _PositionListView;
        }
        void PositionListView(::winrt::Microsoft::UI::Xaml::Controls::ListView value)
        {
            _PositionListView = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::Button SubmitButton()
        {
            return _SubmitButton;
        }
        void SubmitButton(::winrt::Microsoft::UI::Xaml::Controls::Button value)
        {
            _SubmitButton = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::TextBox WordsTextBox()
        {
            return _WordsTextBox;
        }
        void WordsTextBox(::winrt::Microsoft::UI::Xaml::Controls::TextBox value)
        {
            _WordsTextBox = value;
        }
        
    protected:
        bool _contentLoaded{false};

    private:
        struct MainWindow_obj1_Bindings;

        ::winrt::Microsoft::UI::Xaml::Controls::ListView _WordsListView{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::ListView _CountListView{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::ListView _PositionListView{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::Button _SubmitButton{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::TextBox _WordsTextBox{nullptr};
    };
}
