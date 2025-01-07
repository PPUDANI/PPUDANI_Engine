#pragma once

class EngineWindow
{
public:
	// Constructor Destructor
	EngineWindow();
	~EngineWindow();

	// Delete Function
	EngineWindow(const EngineWindow& _Other) = delete;
	EngineWindow(EngineWindow&& _Other) noexcept = delete;
	EngineWindow& operator=(const EngineWindow& _Other) = delete;
	EngineWindow& operator=(EngineWindow&& _Other) noexcept = delete;

protected:

private:

};