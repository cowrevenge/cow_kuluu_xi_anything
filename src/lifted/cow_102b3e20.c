/* f_0x102b3e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102b3e20(Guest* g)
{
    uint32_t ebp;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, arg1 + 0x14u);
    g->ecx = self;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, in_edx, 1, 4, arg1 + 0x14u, 4u, 1u, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, arg1 + 0x18u);
    g->ecx = t2;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t3, 1, 11, arg1 + 0x18u, 4u, 1u, arg2, arg1 + 0x14u, 4u, 1u, arg2, in_edi, in_esi, in_ebp);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x34u, arg2);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 4u);
    wr32(sp0 - 0x40u, arg1 + 0x1cu);
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t6, 1, 11, arg1 + 0x1cu, 4u, 1u, arg2, arg1 + 0x18u, 4u, 1u, arg2, arg1 + 0x14u, 4u, 1u);
    t8 = g->edx;
    wr32(sp0 - 0x44u, arg2);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, sp0 + 4u);
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 0x24u;
    t9 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t8, 1, 11, sp0 + 4u, 4u, 1u, arg2, arg1 + 0x1cu, 4u, 1u, arg2, arg1 + 0x18u, 4u, 1u);
    t10 = g->ecx;
    t11 = rd32(arg1 + 0x18u);
    wr32(sp0 - 0x14u, t11);
    wr32(sp0 - 0x18u, arg1);
    g->ecx = t10;
    g->edx = t11;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x102b3b20u), 6, arg1, t11, in_edi, in_esi, in_ebp, in_ebx);
    t12 = g->ecx;
    t13 = g->edx;
    if (rd32(arg1 + 0x28u) == 0u)
    {
        edi = t1 + t4 + t7 + t9;
    }
    else
    {
        ecx = t12;
        edx = t13;
        edi = t1 + t4 + t7 + t9;
        if ((int32_t)rd32(arg1 + 0x14u) <= 0) goto L_102b3ea9;
        ebp = 0u;
L_102b3e8d: ;
        wr32(sp0 - 0x14u, arg2);
        wr32(sp0 - 0x18u, ebp);
        wr32(sp0 - 0x1cu, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t14 = cow_cdecl(g, COW_IMG(0x102b3be0u), 2, arg1, ebp);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(sp0 - 0x18u, t14);
        g->edx = t16;
        t17 = cow_thiscall_cdecl(g, rd32(arg1 + 0x28u), t15, 1, t14);
        t18 = g->ecx;
        t19 = g->edx;
        if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x14u))
        {
            ecx = t18;
            edx = t19;
            ebp = ebp + 1u;
            edi = edi + t17;
            goto L_102b3e8d;
        }
        edi = edi + t17;
    }
L_102b3ea9: ;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b3e20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
