/* f_0x10321437 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_10321437(Guest* g)
{
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1034a598u));
    wr32(sp0 - 0x10u, COW_IMG(0x1031d0acu));
    wr32(sp0 - 0x14u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x14u);
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 0x3cu);
    wr32(sp0 - 0x30u, arg5);
    wr32(sp0 - 0x28u, 0u);
    t2 = rd32(arg2 - 4u);
    wr32(sp0 - 0x2cu, t2);
    g->eax = t2;
    g->esp = sp0 - 0x3cu;
    t3 = cow_fastcall(g, COW_IMG(0x1031a04du), self, in_edx, 0);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd32(t3 + 0x6cu);
    wr32(sp0 - 0x20u, t6);
    g->eax = t6;
    t7 = cow_fastcall(g, COW_IMG(0x1031a04du), t4, t5, 0);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = rd32(t7 + 0x70u);
    wr32(sp0 - 0x24u, t10);
    g->eax = t10;
    t11 = cow_fastcall(g, COW_IMG(0x1031a04du), t8, t9, 0);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(t11 + 0x6cu, arg1);
    t14 = cow_fastcall(g, COW_IMG(0x1031a04du), t12, t13, 0);
    t15 = g->edx;
    wr32(t14 + 0x70u, arg3);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0x40u, arg7);
    wr32(sp0 - 0x44u, arg6);
    wr32(sp0 - 0x48u, arg5);
    wr32(sp0 - 0x4cu, arg4);
    wr32(sp0 - 0x50u, arg2);
    g->ecx = arg3;
    g->edx = t15;
    g->esp = sp0 - 0x34u;
    t16 = cow_cdecl(g, COW_IMG(0x10316387u), 7, arg2, arg4, arg5, arg6, arg7, in_edi, in_esi);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x30u, t16);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 8u, 0xffffffffu);
    g->esi = arg2;
    g->edi = arg1;
    g->ebp = sp0 - 4u;
    g->esp = sp0 - 0x3cu;
    cow_fastcall(g, COW_IMG(0x10321504u), t17, t18, 0);
    t19 = rd32(sp0 - 0x14u);
    t20 = rd32(sp0 - 0x30u);
    wr32(g->fs_base, t19);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return t20;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10321437(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10321437(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
