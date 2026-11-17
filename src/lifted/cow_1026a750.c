/* f_0x1026a750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1026a750(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg2, rd32(COW_IMG(0x103403f8u)));
    wr32(arg2 + 4u, rd32(COW_IMG(0x103403fcu)));
    wr32(arg2 + 8u, rd32(COW_IMG(0x10340400u)));
    wr32(arg2 + 0xcu, rd32(COW_IMG(0x10340404u)));
    if (rd16(arg1) != 0xfffeu)
    {
        eax = (arg2 & 0xffff0000u) | rd16(arg1);
        wr32(arg2 + 0x10u, (uint16_t)eax);
        wr32(arg2 + 0x14u, 0x100000u);
        wr32(arg2 + 0x18u, 0xaa000080u);
        wr32(arg2 + 0x1cu, 0x719b3800u);
    }
    else
    {
        t1 = rd32(arg1 + 0x18u);
        wr32(arg2 + 0x10u, t1);
        t2 = rd32(arg1 + 0x1cu);
        wr32(arg2 + 0x14u, t2);
        t3 = rd32(arg1 + 0x20u);
        wr32(arg2 + 0x18u, t3);
        t4 = rd32(arg1 + 0x24u);
        wr32(arg2 + 0x1cu, t4);
    }
    wr32(arg2 + 0x2cu, rd32(COW_IMG(0x1033f8a8u)));
    wr32(arg2 + 0x30u, rd32(COW_IMG(0x1033f8acu)));
    t5 = rd32(COW_IMG(0x1033f8b0u));
    wr32(arg2 + 0x34u, t5);
    t6 = rd32(COW_IMG(0x1033f8b4u));
    wr32(arg2 + 0x20u, 1u);
    wr32(arg2 + 0x24u, 0u);
    wr32(arg2 + 0x38u, t6);
    t7 = rd16(arg1 + 0xcu);
    wr32(arg2 + 0x3cu, 0u);
    wr32(arg2 + 0x28u, t7);
    if (arg3 == 0u)
    {
        edx = t5;
        goto L_1026a89a;
    }
    ecx = t7;
    edx = t5;
    if (rd16(arg1) != 1u)
    {
        t8 = rd16(arg1 + 0x10u) + 0x12u;
        wr32(arg2 + 0x40u, t8);
        edx = t8;
    }
    else
    {
        wr32(arg2 + 0x40u, 0x12u);
    }
    t9 = rd32(arg2 + 0x40u);
    g->eax = t9;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t10 = cow_stdcall(g, rd32(COW_IMG(0x103294acu)), 1, t9);   /* ole32.dll!CoTaskMemAlloc */
    t11 = g->edx;
    wr32(arg2 + 0x44u, t10);
    if (t10 != 0u)
    {
        eax = t10;
        goto L_1026a859;
    }
    edx = t11;
    g->edx = edx;
    return 0x8007000eu;
L_1026a859: ;
    if (rd16(arg1) != 1u) goto L_1026a887;
    wr32(eax, rd32(arg1));
    t12 = rd32(arg1 + 4u);
    wr32(eax + 4u, t12);
    t13 = rd32(arg1 + 8u);
    wr32(eax + 8u, t13);
    t14 = rd32(arg1 + 0xcu);
    wr32(eax + 0xcu, t14);
    wr16(rd32(arg2 + 0x44u) + 0x10u, 0u);
    g->edx = t14;
    return 0u;
L_1026a887: ;
    t15 = rd32(arg2 + 0x40u);
    esi = arg1;
    edi = eax;
    ecx = t15 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t15 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    edx = t15;
L_1026a89a: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026a750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026a750(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
