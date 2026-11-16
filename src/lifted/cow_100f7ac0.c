/* f_0x100f7ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f7ac0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 0)
    {
        eax = arg1;
        edx = in_edx;
        goto L_100f7af4;
    }
    if (rd8(rd32(COW_IMG(0x104df90cu)) + 0x44u) != 0u)
    {
        eax = rd32(COW_IMG(0x104df90cu));
        goto L_100f7ade;
    }
    eax = rd32(COW_IMG(0x104df90cu));
    t1 = rd32(eax + 0x40u);
    wr8(t1 + 1u, 0u);
    return (t1 & 0xffffff00u) | 1u;
L_100f7ade: ;
    t2 = rd32(eax + 0x3cu);
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100f15f0u), 1, t2);
    t4 = rd32(COW_IMG(0x104df90cu));
    wr8(t4 + 0x44u, 0u);
    eax = t3;
    edx = t4;
L_100f7af4: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f7ac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
