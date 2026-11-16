/* f_0x10201180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10201180(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x80808080u);
    if ((int32_t)rd32(self + 0x10u) <= 0) goto L_1020122e;
    t1 = (uint32_t)(int16_t)arg2 + 4u;
    wr32(sp0 - 0x2cu, t1);
    t2 = (uint32_t)(int16_t)arg1 + 4u;
    wr32(sp0 - 0x30u, t2);
    g->eax = t2;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t2, t1, 0x80808080u, 0u, 0u);
    t4 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0x80808080u);
    wr32(sp0 - 0x30u, 0x3fcccccdu);
    wr32(sp0 - 0x34u, 0x3fcccccdu);
    wr32(sp0 - 0x38u, t1);
    t5 = (uint32_t)(int16_t)arg1 + 0x52u;
    wr32(sp0 - 0x3cu, t5);
    t6 = rd32(self + rd32(self + 0x14u) * 4u + 0x18u);
    t7 = cow_thiscall(g, COW_IMG(0x1011fc80u), t6, 8, t5, t1, 0x3fcccccdu, 0x3fcccccdu, 0x80808080u, 0u, 0u, 0u);
    t8 = g->ecx;
    if (rd32(self + 0x10u) == 0u) goto L_102012c3;
    eax = t7;
    ecx = t8;
    esi = rd32(self + 0x10u);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xcu, COW_IMG(0x10352ff0u), esi, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t9 = g->edx;
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x80804040u);
    wr32(sp0 - 0x3cu, sp0 - 0xcu);
    wr32(sp0 - 0x40u, arg2 + 0x10u);
    wr32(sp0 - 0x44u, arg1 + 0x4eu);
    g->esp = sp0 - 0x28u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg1 + 0x4eu, 7, arg1 + 0x4eu, arg2 + 0x10u, sp0 - 0xcu, 0x80804040u, 0u, 0x3f800000u, 0x3f800000u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_1020122e: ;
    wr32(sp0 - 0x2cu, (uint32_t)(int16_t)arg2);
    wr32(sp0 - 0x30u, (uint32_t)(int16_t)arg1);
    g->edx = (uint32_t)(int16_t)arg2;
    t10 = rd32(self + rd32(self + 0x14u) * 4u + 0x18u);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x1011fb60u), t10, 5, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    if (rd32(self) == 0u)
    {
        ecx = t11;
        edx = t12;
    }
    else
    {
        eax = rd32(self);
        ecx = t11;
        wr32(sp0 - 0x20u, eax);
        wr32(sp0 - 0x24u, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xcu, COW_IMG(0x10352ff0u), eax, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
        wr32(sp0 - 0x2cu, 0x3f800000u);
        wr32(sp0 - 0x30u, 0x3f800000u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 0x60808080u);
        wr32(sp0 - 0x3cu, sp0 - 0xcu);
        wr32(sp0 - 0x40u, arg2 + 0x10u);
        wr32(sp0 - 0x44u, arg1 + 0x6cu);
        g->edx = arg1 + 0x6cu;
        g->esp = sp0 - 0x28u;
        cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg2 + 0x10u, 7, arg1 + 0x6cu, arg2 + 0x10u, sp0 - 0xcu, 0x60808080u, 0u, 0x3f800000u, 0x3f800000u);
        t13 = g->ecx;
        t14 = g->edx;
        ecx = t13;
        edx = t14;
    }
    if (rd32(self + 4u) != 0u)
    {
        esi = rd32(self + 4u);
        wr32(sp0 - 0x20u, esi);
        wr32(sp0 - 0x24u, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        g->eax = sp0 - 0xcu;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t15 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xcu, COW_IMG(0x10352ff0u), esi, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
        t16 = g->edx;
        wr32(sp0 - 0x2cu, 0x3f800000u);
        wr32(sp0 - 0x30u, 0x3f800000u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 0x60808080u);
        wr32(sp0 - 0x3cu, sp0 - 0xcu);
        wr32(sp0 - 0x40u, arg2 + 0x10u);
        wr32(sp0 - 0x44u, arg1 + 0x55u);
        g->esp = sp0 - 0x28u;
        cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0xcu, 7, arg1 + 0x55u, arg2 + 0x10u, sp0 - 0xcu, 0x60808080u, 0u, 0x3f800000u, 0x3f800000u);
    }
L_102012c3: ;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10201180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10201180(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
