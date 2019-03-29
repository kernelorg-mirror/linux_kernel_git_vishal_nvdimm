// SPDX-License-Identifier: GPL-2.0
#ifndef _MEMREGION_H_
#define _MEMREGION_H_
#include <linux/types.h>

struct memregion_info {
	int target_node;
};
int memregion_alloc(gfp_t gfp);
void memregion_free(int id);
#endif /* _MEMREGION_H_ */
