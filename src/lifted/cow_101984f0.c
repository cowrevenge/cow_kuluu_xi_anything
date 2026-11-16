/* f_0x101984f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101984f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10198600;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_10198600;
    }
    t1 = rd32(COW_IMG(0x10198604u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10198512u: goto L_10198512;
    case 0x1019853au: goto L_1019853a;
    case 0x10198562u: goto L_10198562;
    case 0x10198584u: goto L_10198584;
    case 0x101985cdu: goto L_101985cd;
    default: rt_fatal(g, COW_IMG(0x1019850bu), "switch");
    }
    return 0;
L_10198512: ;
    wr32(rd32(COW_IMG(0x10662730u)) + 0x14u, 0u);
    wr32(rd32(COW_IMG(0x10662734u)) + 0x1cu, 0u);
    t9 = rd32(COW_IMG(0x10662738u));
    wr32(t9 + 0x18u, 0u);
    edx = t9;
L_101985a4: ;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a76cu), 1u, 0u);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a758u), 1u, 0u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_1019853a: ;
    wr32(rd32(COW_IMG(0x10662730u)) + 0x14u, 1u);
    wr32(rd32(COW_IMG(0x10662734u)) + 0x1cu, 1u);
    t8 = rd32(COW_IMG(0x10662738u));
    wr32(t8 + 0x18u, 1u);
    edx = t8;
    goto L_101985a4;
L_10198562: ;
    wr32(rd32(COW_IMG(0x10662730u)) + 0x14u, 2u);
    t7 = rd32(COW_IMG(0x10662734u));
    wr32(t7 + 0x1cu, 2u);
    wr32(rd32(COW_IMG(0x10662738u)) + 0x18u, 2u);
    edx = t7;
    goto L_101985a4;
L_10198584: ;
    wr32(rd32(COW_IMG(0x10662730u)) + 0x14u, 3u);
    wr32(rd32(COW_IMG(0x10662734u)) + 0x1cu, 3u);
    t6 = rd32(COW_IMG(0x10662738u));
    wr32(t6 + 0x18u, 3u);
    edx = t6;
    goto L_101985a4;
L_101985cd: ;
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a744u), 1u, 0u);
    t2 = g->edx;
    t3 = rd32(COW_IMG(0x1066273cu));
    wr32(t3 + 0x14u, 0u);
    if (rd32(rd32(COW_IMG(0x1066273cu)) + 8u) == 0u)
    {
        eax = t3;
        edx = t2;
    }
    else
    {
        eax = t3;
        ecx = rd32(rd32(COW_IMG(0x1066273cu)) + 8u);
        edx = t2;
        g->edx = edx;
        g->esp = sp0;
        t4 = cow_call_regs(g, COW_IMG(0x10118e90u), eax, ecx, g->edx, 0, 1, 2u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
L_10198600: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101984f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101984f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
