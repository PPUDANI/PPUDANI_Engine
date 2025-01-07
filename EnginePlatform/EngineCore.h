#pragma once

class EngineCore
{
public:
	// Constructor Destructor
	EngineCore();
	~EngineCore();

	// Delete Function
	EngineCore(const EngineCore& _Other) = delete;
	EngineCore(EngineCore&& _Other) noexcept = delete;
	EngineCore& operator=(const EngineCore& _Other) = delete;
	EngineCore& operator=(EngineCore&& _Other) noexcept = delete;

protected:

private:

};