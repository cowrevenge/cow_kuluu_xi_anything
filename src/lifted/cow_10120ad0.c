/* f_0x10120ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10120ad0(Guest* g)
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
        goto L_10120b62;
    }
    ecx = rd32(COW_IMG(0x104e1d4cu));
    if (arg1 > 5u)
    {
        eax = arg1;
        goto L_10120b62;
    }
    t1 = rd32(COW_IMG(0x10120b68u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x10120aefu: goto L_10120aef;
    case 0x10120afau: goto L_10120afa;
    case 0x10120b05u: goto L_10120b05;
    case 0x10120b29u: goto L_10120b29;
    case 0x10120b4du: goto L_10120b4d;
    case 0x10120b58u: goto L_10120b58;
    default: rt_fatal(g, COW_IMG(0x10120ae8u), "switch");
    }
    return 0;
L_10120aef: ;
    return rd32(ecx + 0x5cu) >> 2u & 1u;
L_10120afa: ;
    return rd32(ecx + 0x60u) >> 2u & 1u;
L_10120b05: ;
    t5 = rd32(ecx + 0x5cu);
    t6 = rd32(ecx + 0x60u) & 0xfffffffbu;
    wr32(ecx + 0x60u, t6);
    t7 = rd32(ecx + 0x64u) & 0xfffffffbu;
    wr32(ecx + 0x64u, t7);
    wr32(ecx + 0x5cu, t5 & 0xfffffffbu);
    g->edx = t5 & 0xfffffffbu;
    return (t5 >> 2u & 0xffffff00u) | (t5 >> 2u & 1u);
L_10120b29: ;
    t2 = rd32(ecx + 0x60u);
    t3 = rd32(ecx + 0x64u);
    wr32(ecx + 0x60u, t2 & 0xfffffffbu);
    t4 = rd32(ecx + 0x5cu);
    wr32(ecx + 0x64u, t3 & 0xfffffffbu);
    wr32(ecx + 0x5cu, t4 & 0xfffffffbu);
    g->edx = t4 & 0xfffffffbu;
    return (t2 >> 2u & 0xffffff00u) | (t2 >> 2u & 1u);
L_10120b4d: ;
    return rd32(ecx + 0x58u) >> 2u & 1u;
L_10120b58: ;
    return (arg1 & 0xffffff00u) | (rd8(ecx + 0x64u) >> 2u & 1u);
L_10120b62: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10120ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10120ad0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
