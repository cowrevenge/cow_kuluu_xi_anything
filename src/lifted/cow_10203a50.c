/* f_0x10203a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10203a50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 208u);

    if (rd32(COW_IMG(0x106643d8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106643d8u));
        goto L_10203a69;
    }
    return in_eax & 0xffffff00u;
L_10203a69: ;
    wr32(sp0 - 0xa0u, in_esi);
    wr32(sp0 - 0xa4u, in_edi);
    if (arg3 + 0xcu == 0u)
    {
        wr8(ecx + 0x14u, 0u);
        eax = arg3 + 0xcu;
        edx = in_edx;
    }
    else
    {
        t1 = rd32(arg3 + 0xcu);
        wr32(ecx + 0x14u, t1);
        t2 = rd32(arg3 + 0x10u);
        wr32(ecx + 0x18u, t2);
        t3 = rd32(arg3 + 0x14u);
        wr32(ecx + 0x1cu, t3);
        t4 = rd32(arg3 + 0x18u);
        wr32(ecx + 0x20u, t4);
        eax = t4;
        ecx = ecx + 0x14u;
        edx = t3;
    }
    if (!(rd8(arg3 + 0xau) & 1u))
    {
        t5 = rd16(arg3 + 0x1cu);
        wr32(sp0 - 0xa8u, t5);
        g->ecx = t5;
        g->edx = edx;
        g->esp = sp0 - 0xa4u;
        t6 = cow_cdecl(g, COW_IMG(0x101cc590u), 1, t5);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
        edi = t6;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 0xau);
        edi = 2u;
    }
    if (rd8(arg3 + 0xbu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 0xbu);
        goto L_10203b32;
    }
    eax = (eax & 0xffffff00u) | rd8(arg3 + 0xbu);
    if ((uint8_t)eax != 5u) goto L_10203ba0;
    if ((rd8(arg3 + 0xau) & 2u) == 0u)
    {
        wr32(sp0 - 0xa8u, edi);
        t9 = rd32(COW_IMG(0x106643d8u)) + 0x14u;
        wr32(sp0 - 0xacu, t9);
        wr32(sp0 - 0xb0u, 1u);
        wr32(sp0 - 0xb4u, 3u);
        wr32(sp0 - 0xb8u, 0xau);
        wr32(sp0 - 0xbcu, 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        g->esp = sp0 - 0xa8u;
        cow_cdecl(g, COW_IMG(0x10153180u), 6, sp0 - 0x80u, 0x80u, 0xau, 3u, 1u, t9);
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xacu, 1u);
        wr32(sp0 - 0xb0u, 0u);
        wr32(sp0 - 0xb4u, sp0 - 0x9cu);
        wr32(sp0 - 0xb8u, sp0 - 0x80u);
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0xa4u;
        t10 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x80u, sp0 - 0x9cu, 0u, 1u, 0u);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    wr8(COW_IMG(0x106643a7u), 0u);
    wr8(COW_IMG(0x106643a6u), 1u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10203b32: ;
    if ((rd8(arg3 + 0xau) & 2u) == 0u)
    {
        t12 = rd32(COW_IMG(0x106643d8u)) + 0x14u;
        wr32(sp0 - 0xa8u, t12);
        wr32(sp0 - 0xacu, 0x16u);
        wr32(sp0 - 0xb0u, sp0 - 0x98u);
        g->ecx = sp0 - 0x98u;
        g->esp = sp0 - 0xa4u;
        cow_cdecl(g, COW_IMG(0x100da580u), 3, sp0 - 0x98u, 0x16u, t12);
        t13 = g->ecx;
        wr32(sp0 - 0xb4u, edi);
        wr32(sp0 - 0xb8u, sp0 - 0x98u);
        wr32(sp0 - 0xbcu, 1u);
        wr32(sp0 - 0xc0u, 4u);
        wr32(sp0 - 0xc4u, 0xau);
        wr32(sp0 - 0xc8u, 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x10153180u), 6, sp0 - 0x80u, 0x80u, 0xau, 4u, 1u, sp0 - 0x98u);
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xacu, 1u);
        wr32(sp0 - 0xb0u, 0u);
        wr32(sp0 - 0xb4u, sp0 - 0x9cu);
        wr32(sp0 - 0xb8u, sp0 - 0x80u);
        g->edx = sp0 - 0x80u;
        t14 = rd32(COW_IMG(0x10578158u));
        g->esp = sp0 - 0xa4u;
        t15 = cow_thiscall(g, COW_IMG(0x10127c00u), t14, 5, sp0 - 0x80u, sp0 - 0x9cu, 0u, 1u, 0u);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    }
    wr32(sp0 - 0xa8u, 0xc7u);
    wr8(COW_IMG(0x106643a7u), 1u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t18 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xc7u);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0xacu, t18);
    g->edx = t20;
    g->esp = sp0 - 0xa8u;
    t21 = cow_cdecl(g, COW_IMG(0x10038070u), 1, t18);
    t22 = g->edx;
    eax = t21;
    edx = t22;
L_10203ba0: ;
    wr8(COW_IMG(0x106643a6u), 1u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10203a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10203a50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
