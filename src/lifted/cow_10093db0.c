/* f_0x10093db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10093db0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104859e4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104859e4u));
        edx = in_edx;
        goto L_10093e1f;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xcu, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        goto L_10093dce;
    }
    eax = t1;
    edx = t3;
    g->edx = edx;
    return eax & 0xffffff00u;
L_10093dce: ;
    t4 = rd32(eax + 8u);
    wr16(eax, 0x60cu);
    wr16(eax + 2u, 0u);
    wr32(eax + 4u, 0u);
    wr32(eax + 8u, t4 & 0xfffffffeu);
    t5 = rd32(COW_IMG(0x104dfd98u));
    wr32(COW_IMG(0x104859e4u), 0u);
    if (rd16(t5 + 0x40d90u) != 0u)
    {
        edx = t4 & 0xfffffffeu;
    }
    else
    {
        edx = t4 & 0xfffffffeu;
        wr8(COW_IMG(0x104807f3u), 1u);
    }
    wr32(COW_IMG(0x1047d3f0u), 1u);
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x10097fd0u), 2, 0u, 0u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_10093e1f: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10093db0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10093db0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
