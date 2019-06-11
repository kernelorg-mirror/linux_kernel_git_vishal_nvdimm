#include <linux/idr.h>

static DEFINE_IDA(region_ids);

int memregion_alloc(gfp_t gfp)
{
	return ida_alloc(&region_ids, gfp);
}
EXPORT_SYMBOL(memregion_alloc);

void memregion_free(int id)
{
	ida_free(&region_ids, id);
}
EXPORT_SYMBOL(memregion_free);
