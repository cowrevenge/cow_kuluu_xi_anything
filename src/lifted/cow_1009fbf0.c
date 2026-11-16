/* f_0x1009fbf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009fbf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x10487edcu)) != 0u)
    {
        eax = rd32(COW_IMG(0x10487edcu));
        edx = in_edx;
        goto L_1009fd1f;
    }
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 4u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(COW_IMG(0x10487edcu), t1);
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t2, t3, 1, 1, 0x30u);
    t5 = g->ecx;
    t6 = rd32(COW_IMG(0x10487edcu));
    wr32(COW_IMG(0x10487ee0u), t4);
    if (t6 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_1009fd08;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    if (eax == 0u) goto L_1009fcf0;
    t7 = rd32(arg3 + 0x10u);
    wr32(edx, t7);
    t8 = cow_divs(g, rd16(arg3 + 4u), (rd32(rd32(COW_IMG(0x10487edcu))) & 3u) + 1u);
    t9 = cow_mods(g, rd16(arg3 + 4u), (rd32(rd32(COW_IMG(0x10487edcu))) & 3u) + 1u);
    wr32(rd32(COW_IMG(0x10487ee0u)) + 4u, t8);
    t10 = rd32(rd32(COW_IMG(0x10487ee0u)) + 4u);
    wr32(rd32(COW_IMG(0x10487ee0u)), t10);
    t11 = rd8(arg3 + 6u);
    wr32(rd32(COW_IMG(0x10487ee0u)) + 8u, t11);
    t12 = rd8(arg3 + 7u) - 0x80u;
    wr32(rd32(COW_IMG(0x10487ee0u)) + 0xcu, t12);
    if (rd8(arg3 + 8u) == 0u)
    {
        wr8(arg3 + 8u, 1u);
    }
    t13 = rd8(arg3 + 8u) * 0x14u;
    wr32(rd32(COW_IMG(0x10487ee0u)) + 0x10u, t13);
    t14 = rd8(arg3 + 9u);
    wr32(rd32(COW_IMG(0x10487ee0u)) + 0x14u, t14);
    t15 = rd8(arg3 + 0xau);
    wr32(rd32(COW_IMG(0x10487ee0u)) + 0x18u, t15);
    t16 = rd8(arg3 + 0xbu) * 0x3cu;
    wr32(rd32(COW_IMG(0x10487ee0u)) + 0x1cu, t16);
    wr32(rd32(COW_IMG(0x10487ee0u)) + 0x20u, 0u);
    t17 = rd8(arg3 + 0xcu);
    t18 = rd32(COW_IMG(0x10487ee0u));
    wr32(t18 + 0x24u, t17);
    g->edx = t17;
    return (t18 & 0xffffff00u) | 1u;
L_1009fcf0: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, edx);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = rd32(COW_IMG(0x10487ee0u));
    wr32(COW_IMG(0x10487edcu), 0u);
    eax = t21;
    ecx = t19;
    edx = t20;
L_1009fd08: ;
    if (eax != 0u)
    {
        g->eax = eax;
        g->esp = sp0;
        t22 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t23 = g->edx;
        wr32(COW_IMG(0x10487ee0u), 0u);
        eax = t22;
        edx = t23;
    }
L_1009fd1f: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009fbf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009fbf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
