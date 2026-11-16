/* f_0x100df980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100df980(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg1 < 0)
    {
        eax = in_eax;
        goto L_100dfa18;
    }
    if ((int32_t)arg2 < 0)
    {
        eax = in_eax;
        goto L_100dfa18;
    }
    if ((int32_t)arg3 < 0)
    {
        eax = in_eax;
        goto L_100dfa18;
    }
    if ((int32_t)arg3 > 65535)
    {
        eax = in_eax;
        goto L_100dfa18;
    }
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100dfa18;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    wr32(eax + 0x2cc78u, 0u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x2cc7cu, 0u);
    t1 = rd32(COW_IMG(0x104dfd98u));
    wr32(t1 + 0x2cc80u, 0u);
    t2 = rd32(COW_IMG(0x104dfd98u));
    wr32(t2 + 0x2cc84u, 0u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x2cc88u, 0u);
    g->edx = t2;
    t3 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x100df8e0u), 1, 4u);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_100dfa18;
    }
    eax = t4;
    edx = t5;
    wr32(eax + 8u, arg1);
    wr16(eax + 0xcu, (uint16_t)arg2);
    wr16(eax + 0xeu, (uint16_t)arg3);
    wr32(eax + 0x10u, arg4);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x100df930u), 2, eax, 0u);
    return (t6 & 0xffffff00u) | 1u;
L_100dfa18: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100df980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100df980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
