/* f_0x1022ead0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1022ead0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_30;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, 0x36u);
    wr32(sp0 - 0x28u, 0xcu);
    wr32(sp0 - 0x18u, 0u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x36u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x2cu, 0x37u);
    wr32(sp0 - 0x30u, 0xcu);
    wr32(sp0 - 0x14u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x28u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x37u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x34u, 0x38u);
    wr32(sp0 - 0x38u, 0xcu);
    wr32(sp0 - 0x10u, t4);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x30u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x38u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x3cu, 0x39u);
    wr32(sp0 - 0x40u, 0xcu);
    wr32(sp0 - 0xcu, t7);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x38u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x39u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x44u, 0x3au);
    wr32(sp0 - 0x48u, 0xcu);
    wr32(sp0 - 8u, t10);
    g->edx = t12;
    g->esp = sp0 - 0x40u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x3au);
    t14 = g->edx;
    wr32(sp0 - 4u, t13);
    wr32(sp0 - 0x24u, arg2);
    g->esp = sp0 - 0x20u;
    t15 = cow_thiscall(g, COW_IMG(0x1022df70u), self, 1, arg2);
    if (t15 == 0xfffffffau)
    {
        edi = in_edi;
        goto L_1022ebee;
    }
    eax = t15;
    if (rd32(self + 8u) == 0u)
    {
        edi = in_edi;
        goto L_1022ebee;
    }
    if (eax + 5u > 4u) goto L_1022eb83;
    ecx = eax + 5u;
    t16 = rd32(COW_IMG(0x1022ebf8u) + ecx * 4u);
    switch (t16 - RD)
    {
    case 0x1022eb52u: goto L_1022eb52;
    case 0x1022eb59u: goto L_1022eb59;
    default: rt_fatal(g, COW_IMG(0x1022eb4bu), "switch");
    }
    return;
L_1022eb52: ;
    ecx = 0xfffffff1u;
L_1022eb5e: ;
    wr32(sp0 - 0x24u, arg3);
    t17 = rd32(sp0 - 0x18u - (eax << 2u));
    wr32(sp0 - 0x28u, t17);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, ecx);
    g->ebx = arg2;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x101171b0u), arg1, 4, ecx, 0u, t17, arg3);
    g->ebx = in_ebx;
    return;
L_1022eb59: ;
    ecx = 3u;
    goto L_1022eb5e;
L_1022eb83: ;
    wr32(sp0 - 0x24u, eax);
    g->eax = rd32(self + 0x6cu);
    g->edx = rd32(self + 0x6cu) * 0x25u;
    t18 = rd32(self + 0x6cu);
    g->esp = sp0 - 0x20u;
    t19 = cow_thiscall(g, COW_IMG(0x1022f140u), COW_IMG(0x10667a90u) + t18 * 0x94u, 1, eax);
    t20 = g->edx;
    if (t19 == 0u)
    {
        edi = in_edi;
    }
    else
    {
        eax = t19;
        edx = t20;
        esi = t19;
        wr32(sp0 - 0x24u, in_edi);
        if (rd8(esi) != 0x5fu)
        {
            edi = 0u;
            goto L_1022ebb1;
        }
        eax = (eax & 0xffffff00u) | rd8(esi);
        edi = 0u;
L_1022eba8: ;
        if (rd8(edi + esi + 1u) == 0x5fu)
        {
            eax = (eax & 0xffffff00u) | rd8(edi + esi + 1u);
            edi = edi + 1u;
            goto L_1022eba8;
        }
        edi = edi + 1u;
L_1022ebb1: ;
        wr32(sp0 - 0x28u, arg3);
        wr32(sp0 - 0x2cu, arg1);
        g->esp = sp0 - 0x24u;
        t21 = cow_fastcall(g, COW_IMG(0x10233250u), sp0 - 0x18u, edx, 2, arg1, arg3);
        t22 = g->edx;
        if (arg2 != 1u)
        {
            eax = t21;
            wr32(sp0 - 0x28u, edi + esi);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, edi);
            edx = edi + esi;
            loc_28 = edi + esi;
            loc_30 = edi;
        }
        else
        {
            eax = t21;
            edx = t22;
            wr32(sp0 - 0x28u, edi + esi);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, 0u);
            loc_28 = edi + esi;
            loc_30 = 0u;
        }
        wr32(sp0 - 0x34u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t23 = cow_thiscall(g, COW_IMG(0x10233280u), sp0 - 0x18u, 4, 0u, loc_30, 0u, loc_28);
        t24 = g->edx;
        cow_fastcall(g, COW_IMG(0x10233240u), sp0 - 0x18u, t24, 0);
        edi = rd32(sp0 - 0x24u);
    }
L_1022ebee: ;
    g->ebx = in_ebx;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022ead0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022ead0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
