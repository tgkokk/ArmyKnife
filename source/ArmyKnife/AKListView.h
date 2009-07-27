#ifndef __AKLISTVIEW_H__
#define __AKLISTVIEW_H__

#include <ListView.h>

class AKListView : public BListView 
{
	public:
		AKListView  (BRect frame, const char* name,
			list_view_type type = B_SINGLE_SELECTION_LIST,
			uint32 resizingMode = B_FOLLOW_LEFT | B_FOLLOW_TOP,
			uint32 flags = B_WILL_DRAW | B_NAVIGABLE | B_FRAME_EVENTS);
		~AKListView	();

			virtual void 	KeyDown		(const char* bytes, int32 numBytes);
			
			virtual void 	SelectAll	();
			virtual void 	DeselectAll	();
			virtual void	ScrollToFirstUnaccepted();
};

#endif
