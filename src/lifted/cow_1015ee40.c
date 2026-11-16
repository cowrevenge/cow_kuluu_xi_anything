/* f_0x1015ee40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1015ee40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd16(rd32(COW_IMG(0x1057876cu)) + 0x68u) != 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
        goto L_1015ee92;
    }
    eax = rd32(COW_IMG(0x1057876cu));
    if (rd8(eax + 0x59u) != 0u) goto L_1015ee92;
    if (rd32(eax + 0xc4u) != 0u) goto L_1015ee92;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x101b5c90u), rd32(COW_IMG(0x10662d40u)), 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_1015ee92;
    }
    edx = t2;
    if (rd32(COW_IMG(0x106631d4u)) == 0u) goto L_1015ee7c;
    eax = rd32(COW_IMG(0x106631d4u));
    if (rd16(eax + 0x1cu) != 0u) goto L_1015ee92;
L_1015ee7c: ;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371b4cu), 1u, 0u);
    return (t3 & 0xffffff00u) | 1u;
L_1015ee92: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015ee40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015ee40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
