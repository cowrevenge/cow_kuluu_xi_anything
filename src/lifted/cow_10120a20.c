/* f_0x10120a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10120a20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = in_eax;
        goto L_10120aa8;
    }
    ecx = rd32(COW_IMG(0x104e1d4cu));
    if (arg1 > 5u)
    {
        eax = arg1;
        goto L_10120aa8;
    }
    t1 = rd32(COW_IMG(0x10120aacu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x10120a3bu: goto L_10120a3b;
    case 0x10120a45u: goto L_10120a45;
    case 0x10120a4fu: goto L_10120a4f;
    case 0x10120a72u: goto L_10120a72;
    case 0x10120a95u: goto L_10120a95;
    case 0x10120a9fu: goto L_10120a9f;
    default: rt_fatal(g, COW_IMG(0x10120a34u), "switch");
    }
    return 0;
L_10120a3b: ;
    return rd32(ecx + 0x5cu) >> 1u & 1u;
L_10120a45: ;
    return rd32(ecx + 0x60u) >> 1u & 1u;
L_10120a4f: ;
    t5 = rd32(ecx + 0x5cu);
    t6 = rd32(ecx + 0x60u) & 0xfffffffdu;
    wr32(ecx + 0x60u, t6);
    t7 = rd32(ecx + 0x64u) & 0xfffffffdu;
    wr32(ecx + 0x64u, t7);
    wr32(ecx + 0x5cu, t5 & 0xfffffffdu);
    g->edx = t5 & 0xfffffffdu;
    return (t5 >> 1u & 0xffffff00u) | (t5 >> 1u & 1u);
L_10120a72: ;
    t2 = rd32(ecx + 0x60u);
    t3 = rd32(ecx + 0x64u);
    wr32(ecx + 0x60u, t2 & 0xfffffffdu);
    t4 = rd32(ecx + 0x5cu);
    wr32(ecx + 0x64u, t3 & 0xfffffffdu);
    wr32(ecx + 0x5cu, t4 & 0xfffffffdu);
    g->edx = t4 & 0xfffffffdu;
    return (t2 >> 1u & 0xffffff00u) | (t2 >> 1u & 1u);
L_10120a95: ;
    return rd32(ecx + 0x58u) >> 1u & 1u;
L_10120a9f: ;
    return (arg1 & 0xffffff00u) | (rd8(ecx + 0x64u) >> 1u & 1u);
L_10120aa8: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10120a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10120a20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
