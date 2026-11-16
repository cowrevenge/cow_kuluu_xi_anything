/* f_0x1018aed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1018aed0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;

    t1 = rd32(COW_IMG(0x1065ca58u));
    wr32(COW_IMG(0x1065ca74u), 0x3f800000u);
    wr32(COW_IMG(0x1065ca94u), 0x3f800000u);
    t2 = (t1 & 0xffffff00u) | (t1 & 0xf8u);
    wr32(COW_IMG(0x1065ca58u), t2);
    wr32(COW_IMG(0x1065ca5cu), 0u);
    wr32(COW_IMG(0x1065ca60u), 0u);
    wr8(COW_IMG(0x1065ca64u), 0u);
    wr8(COW_IMG(0x1065ca65u), 0u);
    wr8(COW_IMG(0x1065ca66u), 0u);
    wr8(COW_IMG(0x1065ca67u), 0u);
    wr8(COW_IMG(0x1065ca68u), 0u);
    wr8(COW_IMG(0x1065ca69u), 0u);
    wr8(COW_IMG(0x1065ca6au), 0u);
    wr8(COW_IMG(0x1065ca6bu), 0u);
    wr8(COW_IMG(0x1065ca6cu), 0u);
    wr8(COW_IMG(0x1065ca6du), 0u);
    wr8(COW_IMG(0x1065ca6eu), 0u);
    wr8(COW_IMG(0x1065ca6fu), 0u);
    wr8(COW_IMG(0x1065ca70u), 0u);
    wr8(COW_IMG(0x1065ca71u), 0u);
    wr8(COW_IMG(0x1065ca72u), 0u);
    wr8(COW_IMG(0x1065ca73u), 0u);
    wr32(COW_IMG(0x1065ca78u), 0u);
    wr32(COW_IMG(0x1065ca7cu), 0u);
    wr8(COW_IMG(0x1065ca84u), 0u);
    wr8(COW_IMG(0x1065ca85u), 0u);
    wr8(COW_IMG(0x1065ca86u), 0u);
    wr8(COW_IMG(0x1065ca87u), 0u);
    wr8(COW_IMG(0x1065ca88u), 0u);
    wr8(COW_IMG(0x1065ca89u), 0u);
    wr8(COW_IMG(0x1065ca8au), 0u);
    wr8(COW_IMG(0x1065ca8bu), 0u);
    wr8(COW_IMG(0x1065ca8cu), 0u);
    wr8(COW_IMG(0x1065ca8du), 0u);
    wr8(COW_IMG(0x1065ca8eu), 0u);
    wr8(COW_IMG(0x1065ca8fu), 0u);
    wr8(COW_IMG(0x1065ca90u), 0u);
    wr8(COW_IMG(0x1065ca91u), 0u);
    wr8(COW_IMG(0x1065ca92u), 0u);
    wr8(COW_IMG(0x1065ca93u), 0u);
    wr32(COW_IMG(0x1065ca98u), 0u);
    wr32(COW_IMG(0x1065ca9cu), 0u);
    wr8(COW_IMG(0x1065caa4u), 0u);
    wr8(COW_IMG(0x1065caa5u), 0u);
    wr8(COW_IMG(0x1065caa6u), 0u);
    wr8(COW_IMG(0x1065caa7u), 0u);
    wr32(COW_IMG(0x1065caa8u), 0u);
    wr32(COW_IMG(0x1065caacu), 0u);
    wr32(COW_IMG(0x1065cab0u), 0u);
    wr8(COW_IMG(0x1065cab4u), 0u);
    wr8(COW_IMG(0x1065cab5u), 0u);
    wr8(COW_IMG(0x1065cab6u), 0u);
    wr8(COW_IMG(0x1065cab8u), 0u);
    wr8(COW_IMG(0x1065cab9u), 0u);
    wr8(COW_IMG(0x1065cabau), 0u);
    wr8(COW_IMG(0x1065cabbu), 0u);
    wr32(COW_IMG(0x1065cabcu), 0u);
    wr32(COW_IMG(0x1065cac0u), 0u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018aed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018aed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
