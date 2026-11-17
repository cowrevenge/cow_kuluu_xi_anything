/* f_0x1014f080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014f080(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_c;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, 0x80808080u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, self + 0x118u);
    t1 = (uint32_t)(int16_t)rd16(self + 0x3au) - 2u;
    wr32(sp0 - 0x2cu, t1);
    t2 = (uint32_t)(int16_t)rd16(self + 0x38u) - 8u;
    wr32(sp0 - 0x30u, t2);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10129f00u), 11, t2, t1, self + 0x118u, 0u, 0x80808080u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    if (rd32(self + 0x18u) == 0u)
    {
        eax = rd32(self + 0x18u);
        goto L_1014f0d4;
    }
    eax = rd32(self + 0x18u);
    wr32(sp0 - 0x20u, 0u);
    t3 = rd32(self + 0x16cu);
    wr32(sp0 - 0x24u, t3);
    wr32(sp0 - 0x28u, 0x80606010u);
    wr32(sp0 - 0x2cu, eax);
    t4 = (uint32_t)(int16_t)rd16(self + 0x32u);
    wr32(sp0 - 0x30u, t4);
    t5 = (uint32_t)(int16_t)rd16(self + 0x30u);
    wr32(sp0 - 0x34u, t5);
    ecx = t3;
    edx = t4;
    loc_24 = t3;
    loc_2c = eax;
    eax = t5;
    loc_30 = t4;
    loc_34 = t5;
L_1014f177: ;
    g->esp = sp0 - 0x1cu;
    cow_thiscall_cdecl(g, COW_IMG(0x101906a0u), ecx, 6, loc_34, loc_30, loc_2c, 0x80606010u, loc_24, 0u);
    wr32(sp0 - 0xcu, self + 0x40u);
    edx = self + 0x40u;
    ebx = self + 0x48u;
    edi = 2u;
    loc_c = self + 0x40u;
L_1014f192: ;
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    t20 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->ebx = ebx;
    g->edi = edi;
    g->eax = loc_c;
    t21 = rd32(loc_c);
    g->esp = sp0 - 0x1cu;
    t22 = cow_thiscall(g, COW_IMG(0x10118900u), t20, 4, sp0 - 8u, edi, 1u, 1u);
    if ((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) != edi)
    {
        ebp = t21;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80808080u);
        t28 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x2cu, t28);
        t29 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x30u, t29);
        g->eax = t29;
        g->esp = sp0 - 0x1cu;
        t30 = cow_thiscall(g, COW_IMG(0x1011fb60u), ebp, 5, t29, t28, 0x80808080u, 0u, 0u);
        eax = t30;
    }
    else
    {
        eax = t22;
        ecx = rd32(self + 8u);
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
        ebp = t21;
        if ((int16_t)rd16(ecx + 0x5eu) <= 0)
        {
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, 0x80805020u);
            wr32(sp0 - 0x30u, 0x3f800000u);
            wr32(sp0 - 0x34u, 0x3f800000u);
            t26 = (uint32_t)(int16_t)rd16(ebx + 2u);
            wr32(sp0 - 0x38u, t26);
            wr32(sp0 - 0x3cu, (uint32_t)(int16_t)rd16(ebx));
            g->eax = t26;
            g->esp = sp0 - 0x1cu;
            t27 = cow_thiscall(g, COW_IMG(0x1011fc80u), ebp, 8, (uint32_t)(int16_t)rd16(ebx), t26, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
            eax = t27;
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(ecx + 0x5eu);
            wr32(sp0 - 0x20u, eax);
            wr32(sp0 - 0x24u, 0x1eu);
            t23 = rd32(sp0 - 6u);
            wr32(sp0 - 0x28u, t23);
            t24 = rd32(sp0 - 8u);
            wr32(sp0 - 0x2cu, t24);
            wr32(sp0 - 0x30u, ebp);
            g->eax = t23;
            g->esp = sp0 - 0x1cu;
            t25 = cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, ebp, t24, t23, 0x1eu, eax);
            eax = t25;
        }
    }
    t31 = rd32(sp0 - 0xcu) + 4u;
    wr32(sp0 - 0xcu, t31);
    if ((int32_t)(edi + 1u) < 4)
    {
        edx = t31;
        ebx = ebx + 8u;
        edi = edi + 1u;
        loc_c = t31;
        goto L_1014f190;
    }
    edx = t31;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1014f0d4: ;
    if (rd8(self + 0x164u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x164u);
        goto L_1014f153;
    }
    t6 = rd32(self + 0x168u);
    wr8(sp0 - 0xcu, 0u);
    wr32(self + 0x168u, t6 + 1u);
    if ((int32_t)(t6 + 1u) >= 20)
    {
        eax = t6 + 1u;
        if ((int32_t)eax >= 30)
        {
            wr32(self + 0x168u, 0u);
        }
    }
    else
    {
        wr8(sp0 - 0xcu, 1u);
    }
    t7 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x20u, t7);
    t8 = rd32(self + 0x16cu);
    wr32(sp0 - 0x24u, t8);
    t9 = (uint32_t)(int16_t)rd16(self + 0x32u);
    wr32(sp0 - 0x28u, t9);
    t10 = (uint32_t)(int16_t)rd16(self + 0x30u);
    wr32(sp0 - 0x2cu, t10);
    g->edx = t8;
    g->esp = sp0 - 0x1cu;
    t11 = cow_call_regs(g, COW_IMG(0x101c6060u), t9, rd32(self + 0x160u), g->edx, 1, 4, t10, t9, t8, t7);
    t12 = g->edx;
    wr32(sp0 - 0x30u, t11);
    g->edx = t12;
    g->esp = sp0 - 0x2cu;
    t13 = cow_call_regs(g, COW_IMG(0x101c6020u), t11, rd32(self + 0x160u), g->edx, 1, 1, t11);
    t14 = g->edx;
    wr32(sp0 - 0x34u, t13);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(self + 0x160u), 6, t13, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    wr32(sp0 - 0xcu, self + 0x40u);
    edx = self + 0x40u;
    ebx = self + 0x48u;
    edi = 2u;
    loc_c = self + 0x40u;
    goto L_1014f192;
L_1014f153: ;
    wr32(sp0 - 0x20u, 0u);
    t15 = rd32(self + 0x16cu);
    wr32(sp0 - 0x24u, t15);
    wr32(sp0 - 0x28u, 0x80606010u);
    wr32(sp0 - 0x2cu, 0u);
    g->edx = t15;
    g->esp = sp0 - 0x28u;
    t16 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, rd32(self + 0x160u), g->edx, 0, 1, 0u);
    t17 = g->edx;
    wr32(sp0 - 0x2cu, t16);
    t18 = (uint32_t)(int16_t)rd16(self + 0x32u);
    wr32(sp0 - 0x30u, t18);
    t19 = (uint32_t)(int16_t)rd16(self + 0x30u);
    wr32(sp0 - 0x34u, t19);
    eax = t18;
    ecx = t19;
    edx = t17;
    loc_24 = rd32(sp0 - 0x24u);
    loc_2c = t16;
    loc_30 = t18;
    loc_34 = t19;
    goto L_1014f177;
L_1014f190: ;
    goto L_1014f192;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014f080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014f080(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
