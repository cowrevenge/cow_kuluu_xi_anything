/* f_0x100740c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100740c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;

    if (rd32(COW_IMG(0x1047cf84u)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047cf84u));
        edx = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x1047cf84u));
        edx = rd32(eax);
    }
    if (edx == 0u) goto L_100740fa;
L_100740d6: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10072240u), edx, 0);
    t2 = g->edx;
    if (rd16(rd32(rd32(t1 + 0x14u)) + 0x18u) == 0u)
    {
        eax = rd32(t1 + 0x14u);
        edx = t2;
        goto L_100740fe;
    }
    eax = rd32(t1 + 0x14u);
    edx = t2;
    if (rd32(edx + 0x10u) == 0u)
    {
        edx = 0u;
    }
    else
    {
        edx = rd32(edx + 0x10u);
        edx = rd32(edx);
    }
    if (edx != 0u) goto L_100740d6;
L_100740fa: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100740fe: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_stdcall(g, COW_IMG(0x10073b20u), 1, eax);
    t4 = g->edx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100740c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100740c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
