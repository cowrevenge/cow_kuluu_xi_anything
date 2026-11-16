/* f_0x102aeb60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
void cow_fn_102aeb60(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 164u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    wr32(sp0 - 0x54u, rd32(arg4));
    wr32(sp0 - 0x58u, rd32(arg3));
    wr32(sp0 - 0x5cu, rd32(arg2));
    wr32(sp0 - 0x60u, rd32(arg1));
    wr32(sp0 - 0x64u, sp0 - 0x40u);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10274d60u), 5, sp0 - 0x40u, rd32(arg1), rd32(arg2), rd32(arg3), rd32(arg4));
    t1 = rd32(arg4 + 4u);
    wr32(sp0 - 0x68u, t1);
    t2 = rd32(arg3 + 4u);
    wr32(sp0 - 0x6cu, t2);
    t3 = rd32(arg2 + 4u);
    wr32(sp0 - 0x70u, t3);
    t4 = rd32(arg1 + 4u);
    wr32(sp0 - 0x74u, t4);
    wr32(sp0 - 0x78u, sp0 - 0x30u);
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x10274d60u), 5, sp0 - 0x30u, t4, t3, t2, t1);
    t5 = rd32(arg4 + 8u);
    wr32(sp0 - 0x7cu, t5);
    t6 = rd32(arg3 + 8u);
    wr32(sp0 - 0x80u, t6);
    t7 = rd32(arg2 + 8u);
    wr32(sp0 - 0x84u, t7);
    t8 = rd32(arg1 + 8u);
    wr32(sp0 - 0x88u, t8);
    wr32(sp0 - 0x8cu, sp0 - 0x20u);
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x10274d60u), 5, sp0 - 0x20u, t8, t7, t6, t5);
    t9 = rd32(arg4 + 0xcu);
    wr32(sp0 - 0x90u, t9);
    t10 = rd32(arg3 + 0xcu);
    wr32(sp0 - 0x94u, t10);
    t11 = rd32(arg2 + 0xcu);
    wr32(sp0 - 0x98u, t11);
    t12 = rd32(arg1 + 0xcu);
    wr32(sp0 - 0x9cu, t12);
    wr32(sp0 - 0xa0u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x10274d60u), 5, sp0 - 0x10u, t12, t11, t10, t9);
    t13 = g->ecx;
    wr32(sp0 - 0x54u, sp0 - 0x40u);
    wr32(sp0 - 0x58u, COW_IMG(0x103bef28u));
    wr32(sp0 - 0x5cu, arg5);
    g->eax = arg5;
    g->esp = sp0 - 0x50u;
    t14 = cow_cdecl(g, COW_IMG(0x1027f000u), 3, arg5, COW_IMG(0x103bef28u), sp0 - 0x40u);
    wr32(sp0 - 0x60u, sp0 - 0x30u);
    wr32(sp0 - 0x64u, COW_IMG(0x103bef28u));
    wr32(sp0 - 0x68u, arg6);
    g->edx = arg6;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x1027f000u), 3, arg6, COW_IMG(0x103bef28u), sp0 - 0x30u);
    t15 = g->edx;
    wr32(sp0 - 0x6cu, sp0 - 0x20u);
    wr32(sp0 - 0x70u, COW_IMG(0x103bef28u));
    wr32(sp0 - 0x74u, arg7);
    g->ecx = arg7;
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x1027f000u), 3, arg7, COW_IMG(0x103bef28u), sp0 - 0x20u);
    t16 = g->ecx;
    wr32(sp0 - 0x78u, sp0 - 0x10u);
    wr32(sp0 - 0x7cu, COW_IMG(0x103bef28u));
    wr32(sp0 - 0x80u, arg8);
    g->esp = sp0 - 0x74u;
    cow_cdecl(g, COW_IMG(0x1027f000u), 3, arg8, COW_IMG(0x103bef28u), sp0 - 0x10u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102aeb60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102aeb60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
