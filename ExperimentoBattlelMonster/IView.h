#pragma once
#ifndef IVIEW_H
#define IVIEW_H
class IView {
public:
	virtual void update() = 0;
	virtual ~IView() = default;
};
#endif // !IVIEW_H
