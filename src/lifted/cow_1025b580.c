/* f_0x1025b580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025b580(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        if (eax == 2u) goto L_1025b59a;
        if (eax != 3u) goto L_1025b59f;
L_1025b59a: ;
        eax = 1u;
    }
L_1025b59f: ;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1025b510u), 1, eax);
    t1 = g->edx;
    g->edx = t1;
    return rd32(arg1 * 4u + rd32(COW_IMG(0x10669464u)));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025b580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025b580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
