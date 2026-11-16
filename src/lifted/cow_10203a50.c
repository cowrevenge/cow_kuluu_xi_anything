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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
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
    t5 = rd8(arg3 + 0xau);
    wr8(sp0 - 0x9cu, 0x87u);
    wr8(sp0 - 0x9bu, 1u);
    wr8(sp0 - 0x9au, 0u);
    if (!(t5 & 1u))
    {
        eax = (eax & 0xffffff00u) | t5;
        t6 = rd16(arg3 + 0x1cu);
        wr32(sp0 - 0xa8u, t6);
        g->eax = eax;
        g->ecx = t6;
        g->edx = edx;
        g->esp = sp0 - 0xa4u;
        t7 = cow_cdecl(g, COW_IMG(0x101cc590u), 1, t6);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
        edi = t7;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t5;
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
        t10 = rd32(COW_IMG(0x106643d8u)) + 0x14u;
        wr32(sp0 - 0xacu, t10);
        wr32(sp0 - 0xb0u, 1u);
        wr32(sp0 - 0xb4u, 3u);
        wr32(sp0 - 0xb8u, 0xau);
        wr32(sp0 - 0xbcu, 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        g->eax = sp0 - 0x80u;
        g->esp = sp0 - 0xa8u;
        t11 = cow_cdecl(g, COW_IMG(0x10153180u), 6, sp0 - 0x80u, 0x80u, 0xau, 3u, 1u, t10);
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xacu, 1u);
        wr32(sp0 - 0xb0u, 0u);
        wr32(sp0 - 0xb4u, sp0 - 0x9cu);
        wr32(sp0 - 0xb8u, sp0 - 0x80u);
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0xa4u;
        t12 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x80u, sp0 - 0x9cu, 0u, 1u, 0u);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    wr8(COW_IMG(0x106643a7u), 0u);
    wr8(COW_IMG(0x106643a6u), 1u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10203b32: ;
    if ((rd8(arg3 + 0xau) & 2u) == 0u)
    {
        t14 = rd32(COW_IMG(0x106643d8u)) + 0x14u;
        wr32(sp0 - 0xa8u, t14);
        wr32(sp0 - 0xacu, 0x16u);
        wr32(sp0 - 0xb0u, sp0 - 0x98u);
        g->ecx = sp0 - 0x98u;
        g->esp = sp0 - 0xa4u;
        cow_cdecl(g, COW_IMG(0x100da580u), 3, sp0 - 0x98u, 0x16u, t14);
        t15 = g->ecx;
        wr32(sp0 - 0xb4u, edi);
        wr32(sp0 - 0xb8u, sp0 - 0x98u);
        wr32(sp0 - 0xbcu, 1u);
        wr32(sp0 - 0xc0u, 4u);
        wr32(sp0 - 0xc4u, 0xau);
        wr32(sp0 - 0xc8u, 0x80u);
        wr32(sp0 - 0xccu, sp0 - 0x80u);
        g->eax = sp0 - 0x80u;
        g->esp = sp0 - 0xb4u;
        t16 = cow_cdecl(g, COW_IMG(0x10153180u), 6, sp0 - 0x80u, 0x80u, 0xau, 4u, 1u, sp0 - 0x98u);
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xacu, 1u);
        wr32(sp0 - 0xb0u, 0u);
        wr32(sp0 - 0xb4u, sp0 - 0x9cu);
        wr32(sp0 - 0xb8u, sp0 - 0x80u);
        g->edx = sp0 - 0x80u;
        t17 = rd32(COW_IMG(0x10578158u));
        g->esp = sp0 - 0xa4u;
        t18 = cow_thiscall(g, COW_IMG(0x10127c00u), t17, 5, sp0 - 0x80u, sp0 - 0x9cu, 0u, 1u, 0u);
        t19 = g->ecx;
        t20 = g->edx;
        eax = t18;
        ecx = t19;
        edx = t20;
    }
    wr32(sp0 - 0xa8u, 0xc7u);
    wr8(COW_IMG(0x106643a7u), 1u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t21 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xc7u);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0xacu, t21);
    g->edx = t23;
    g->esp = sp0 - 0xa8u;
    t24 = cow_cdecl(g, COW_IMG(0x10038070u), 1, t21);
    t25 = g->edx;
    eax = t24;
    edx = t25;
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
