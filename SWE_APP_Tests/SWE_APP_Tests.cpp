#include "wx/wx.h"
#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include <wx/tokenzr.h>
#include <string>
#include "..\SWE_App\CalculatorProcessor.h"
#include "..\SWE_App\ButtonFactory.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SWEAPPTests
{

	TEST_CLASS(CalcTests)
	{		

	public:
	
		TEST_METHOD(CalcTest1)
		{
			double result = CALCULATOR_PROCESSOR::Calculator::Calc("2+2");
			Assert::AreEqual(4.0, result);
		}

		TEST_METHOD(CalcTest2)
		{
			double result = CALCULATOR_PROCESSOR::Calculator::Calc("3-2*6");
			Assert::AreEqual(-9.0, result);
		}

		TEST_METHOD(CalcTest3)
		{
			double result = CALCULATOR_PROCESSOR::Calculator::Calc("Sin5");
			Assert::AreNotEqual(-0.958924, result);
		}

		TEST_METHOD(CalcTest4)
		{
			double result = CALCULATOR_PROCESSOR::Calculator::Calc("9%3");
			Assert::AreEqual(0.0, result);
		}

		TEST_METHOD(CalcTest5)
		{
			double result = CALCULATOR_PROCESSOR::Calculator::Calc("2+2");
			Assert::AreNotEqual(5.0, result);
		}

		TEST_METHOD(CalcTest6)
		{
			double result = CALCULATOR_PROCESSOR::Calculator::Calc("9/6*3-2+1");
			Assert::AreEqual(3.5, result);
		}

		TEST_METHOD(CalcTest7)
		{
			double result = CALCULATOR_PROCESSOR::Calculator::Calc("Cos5");
			Assert::AreNotEqual(0.283662, result);
		}

		TEST_METHOD(CalcTest8)
		{
			double result = CALCULATOR_PROCESSOR::Calculator::Calc("Tan5");
			Assert::AreNotEqual(-3.38052, result);
		}

		TEST_METHOD(CalcTest9)
		{
			double result = CALCULATOR_PROCESSOR::Calculator::Calc("1.5/9*3");
			Assert::AreEqual(0.5, result);
		}

		TEST_METHOD(CalcTest10)
		{
			double result = CALCULATOR_PROCESSOR::Calculator::Calc("4.5*4-3*2");
			Assert::AreEqual(12.0, result);
		}
	};

	TEST_CLASS(ButtonTests)
	{
		
	private:
		wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Dummy Calculator", wxPoint(0, 0), wxSize(0, 0));
	public:
		wxButton* temp = new wxButton(frame, 99, "", wxPoint(0, 0), wxSize(0, 0));

		TEST_METHOD(ButtonTest1)
		{
			wxButton* result = ButtonFactory::CreateAddButton(temp->GetParent(), 101, "Add", wxPoint(3, 5), wxSize(50, 50));
			Assert::AreEqual(101, result->GetId());
		}

		TEST_METHOD(ButtonTest2)
		{
			wxButton* result = ButtonFactory::CreateAddButton(temp->GetParent(), 105, "Add", wxPoint(3, 5), wxSize(50, 50));
			Assert::AreEqual("Add", result->GetLabel());
		}

		TEST_METHOD(ButtonTest3)
		{
			wxButton* result = ButtonFactory::CreateModButton(temp->GetParent(), 102, "%", wxPoint(3, 5), wxSize(50, 50));
			Assert::AreEqual("%", result->GetLabel());
		}

		TEST_METHOD(ButtonTest4)
		{
			wxButton* result = ButtonFactory::Create1Button(temp->GetParent(), 110, "1", wxPoint(3, 5), wxSize(50, 50));
			Assert::AreNotEqual("2", result->GetLabel());
		}

		TEST_METHOD(ButtonTest5)
		{
			wxButton* result = ButtonFactory::CreateMinButton(temp->GetParent(), 121, "-", wxPoint(3, 5), wxSize(50, 50));
			Assert::AreNotEqual(101, result->GetId());
		}

		TEST_METHOD(ButtonTest6)
		{
			wxButton* result = ButtonFactory::CreateSinButton(temp->GetParent(), 150, "Sin", wxPoint(3, 5), wxSize(50, 50));
			Assert::AreEqual(150, result->GetId());
		}

		TEST_METHOD(ButtonTest7)
		{
			wxButton* result = ButtonFactory::Create9Button(temp->GetParent(), 112, "9", wxPoint(3, 5), wxSize(50, 50));
			Assert::AreEqual("9", result->GetLabel());
		}

		TEST_METHOD(ButtonTest8)
		{
			wxButton* result = ButtonFactory::CreateDotButton(temp->GetParent(), 122, "Dot", wxPoint(3, 5), wxSize(50, 50));
			Assert::AreEqual(122, result->GetId());
		}

		TEST_METHOD(ButtonTest9)
		{
			wxButton* result = ButtonFactory::Create6Button(temp->GetParent(), 119, "6", wxPoint(3, 5), wxSize(100, 50));
			Assert::AreEqual("6", result->GetLabel());
		}

		TEST_METHOD(ButtonTest10)
		{
			wxButton* result = ButtonFactory::Create3Button(temp->GetParent(), 103, "4", wxPoint(3, 5), wxSize(50, 50));
			Assert::AreNotEqual("3", result->GetLabel());
		}
	};

	
	
	

}
