/* f_0x10231840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10231840(Guest* g)
{
    uint32_t eax;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    t1 = rd8(COW_IMG(0x103d3c84u));
    wr32(sp0 - 0xfu, 0u);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0xbu, 0u);
    wr8(sp0 - 0x10u, (uint8_t)t1);
    t2 = rd32(sp0 + 8u);
    wr32(sp0 - 7u, 0u);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr16(sp0 - 3u, 0u);
    wr32(sp0 - 0x20u, t2);
    wr8(sp0 - 1u, 0u);
    g->eax = t2;
    g->edx = 0u;
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall(g, COW_IMG(0x10231e90u), self, 1, t2);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x20u, t3);
    wr32(sp0 - 0x24u, COW_IMG(0x106689e0u));
    g->ecx = t4;
    g->edx = t5;
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x100fdf20u), t3, g->ecx, g->edx, 1, 4, COW_IMG(0x106689e0u), t3, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x28u, 0x23u);
    wr32(sp0 - 0x2cu, 0u);
    wr8(sp0 + 8u, (uint8_t)t6);
    g->edx = t8;
    g->esp = sp0 - 0x24u;
    t9 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 0u, 0x23u);
    t10 = g->edx;
    wr32(sp0 - 0x20u, t9);
    wr32(sp0 - 0x24u, 5u);
    wr32(sp0 - 0x28u, 4u);
    g->edi = arg1;
    g->esp = sp0 - 0x1cu;
    t11 = cow_thiscall(g, COW_IMG(0x101170f0u), arg1, 3, 4u, 5u, t9);
    t12 = rd32(sp0 + 8u);
    wr32(sp0 - 0x20u, t12);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x100a37a0u), 2, sp0 - 0x10u, t12);
    t13 = g->edx;
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0x10u);
    g->ebx = arg3;
    g->edi = arg1;
    g->eax = sp0 - 0x10u;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x101171b0u), arg1, 4, 0x10u, 0u, sp0 - 0x10u, arg3);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, t3);
    g->edx = t16;
    g->esp = sp0 - 0x20u;
    t17 = cow_cdecl(g, COW_IMG(0x100a36f0u), 3, t3, 0u, 0u);
    t18 = g->edx;
    wr32(sp0 - 0x24u, t17);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0x3au);
    g->ebx = arg3;
    g->edi = arg1;
    g->edx = t18;
    g->esp = sp0 - 0x1cu;
    t19 = cow_thiscall(g, COW_IMG(0x101171b0u), arg1, 4, 0x3au, 0u, t17, arg3);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x20u, t3);
    wr32(sp0 - 0x24u, COW_IMG(0x106689e0u));
    g->edx = t21;
    t22 = cow_thiscall_cdecl(g, COW_IMG(0x100fdf80u), t20, 2, COW_IMG(0x106689e0u), t3);
    t23 = g->edx;
    if (t22 <= 0xf423fu)
    {
        eax = t22;
        edx = t23;
    }
    else
    {
        edx = t23;
        eax = 0xf423fu;
    }
    wr32(sp0 - 0x20u, eax);
    wr32(sp0 - 0x24u, COW_IMG(0x103869c8u));
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->ebx = arg3;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t24 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x103869c8u), eax, in_edi, in_esi);
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0xfau);
    g->ebx = arg3;
    g->edi = arg1;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x101171b0u), arg1, 4, 0xfau, 0u, sp0 - 0x10u, arg3);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10231840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10231840(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
