/* f_0x10202720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10202720(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x24u, self);
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        if (rd16(rd32(sp0 + 0x10u) + 0x32u) != rd32(eax + 0x3c350u))
        {
            edx = rd32(eax + 0x3c350u);
            esi = rd32(sp0 + 0x10u);
            goto L_10202845;
        }
        edx = rd32(eax + 0x3c350u);
        esi = rd32(sp0 + 0x10u);
        if (rd16(esi + 0x34u) != 0u) goto L_10202845;
        wr32(sp0 - 0x38u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x34u;
        t1 = cow_stdcall(g, COW_IMG(0x102023b0u), 1, esi);
        wr32(sp0 + 0x10u, t1);
        wr32(sp0 - 0x38u, esi + 0x78u);
        t2 = (t1 & 0xffffff00u) | rd8(esi + 0x30u);
        wr32(sp0 - 0x3cu, t2);
        wr32(sp0 - 0x40u, arg3 + 7u);
        wr32(sp0 - 0x44u, arg2 + 0x1au);
        g->ebx = arg2;
        g->edx = arg2 + 0x1au;
        cow_cdecl(g, COW_IMG(0x101cb090u), 4, arg2 + 0x1au, arg3 + 7u, t2, esi + 0x78u);
        t3 = g->edx;
        wr32(sp0 - 0x38u, 0x80808080u);
        wr32(sp0 - 0x3cu, esi + 6u);
        wr32(sp0 - 0x40u, arg3);
        wr32(sp0 - 0x44u, arg2);
        g->eax = esi + 6u;
        t4 = cow_stdcall(g, COW_IMG(0x10202380u), 4, arg2, arg3, esi + 6u, 0x80808080u);
        t5 = rd32(esi + 0x28u);
        wr32(sp0 - 0x38u, t5);
        wr32(sp0 - 0x3cu, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        g->ebx = arg2;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t5, in_edi, in_esi);
        wr32(sp0 - 0x44u, 0x3f800000u);
        wr32(sp0 - 0x48u, 0x3f800000u);
        wr32(sp0 - 0x4cu, 0u);
        wr32(sp0 - 0x50u, 0x80808080u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x58u, arg3 + 8u);
        wr32(sp0 - 0x5cu, arg2 + 0x68u);
        g->eax = sp0 - 0x20u;
        g->edx = arg2 + 0x68u;
        g->esp = sp0 - 0x40u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg3 + 8u, 7, arg2 + 0x68u, arg3 + 8u, sp0 - 0x20u, 0x80808080u, 0u, 0x3f800000u, 0x3f800000u);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0x60u, 0u);
        wr32(sp0 - 0x64u, 0xaeu);
        g->ecx = t7;
        g->edx = t8;
        g->esp = sp0 - 0x60u;
        t9 = cow_cdecl(g, COW_IMG(0x101938b0u), 1, 0xaeu);
        t10 = g->ecx;
        t11 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            edx = t11;
            goto L_10202806;
        }
        eax = t9;
        ecx = t10;
        edx = t11;
        wr32(sp0 - 0x38u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t12 = cow_thiscall_cdecl(g, COW_IMG(0x10201eb0u), ecx, 1, esi);
        t13 = g->edx;
        if ((uint8_t)t12 != 0u)
        {
            edx = t13;
            goto L_10202806;
        }
        t14 = rd32(esi + 0x2cu);
        wr32(sp0 - 0x38u, t14);
        wr32(sp0 - 0x3cu, arg3 + 0xau);
        wr32(sp0 - 0x40u, arg2 + 0x30u);
        g->ebx = arg2;
        g->edx = arg2 + 0x30u;
        g->esp = sp0 - 0x34u;
        cow_stdcall(g, COW_IMG(0x10202900u), 3, arg2 + 0x30u, arg3 + 0xau, t14);
        t15 = g->edx;
        edx = t15;
        ebp = self;
L_1020280a: ;
        t16 = rd32(esi + 0x24u);
        wr32(sp0 - 0x38u, t16);
        wr32(sp0 - 0x3cu, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        g->ebx = arg2;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t16, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
        wr32(sp0 - 0x44u, 0x3f800000u);
        wr32(sp0 - 0x48u, 0x3f800000u);
        wr32(sp0 - 0x4cu, 0u);
        t17 = rd32(sp0 + 0x10u);
        wr32(sp0 - 0x50u, t17);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x58u, arg3 + 1u);
        wr32(sp0 - 0x5cu, arg2 + 0x58u);
        g->eax = sp0 - 0x20u;
        g->edx = arg2 + 0x58u;
        g->esp = sp0 - 0x40u;
        t18 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg3 + 1u, 7, arg2 + 0x58u, arg3 + 1u, sp0 - 0x20u, t17, 0u, 0x3f800000u, 0x3f800000u);
        t19 = g->edx;
        eax = t18;
        edx = t19;
L_1020285f: ;
        wr32(sp0 - 0x38u, esi);
        wr32(sp0 - 0x3cu, arg3);
        wr32(sp0 - 0x40u, arg2);
        wr32(sp0 - 0x44u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t22 = cow_thiscall(g, COW_IMG(0x10201ff0u), ebp, 4, arg1, arg2, arg3, esi);
        t23 = g->edx;
        wr32(sp0 - 0x38u, esi);
        wr32(sp0 - 0x3cu, arg3);
        wr32(sp0 - 0x40u, arg2);
        g->edx = t23;
        cow_call_regs(g, COW_IMG(0x10202440u), t22, ebp, g->edx, 0, 3, arg2, arg3, esi);
        t24 = g->edx;
        if (rd32(COW_IMG(0x106643e8u)) != 0u)
        {
            eax = rd32(COW_IMG(0x106643e8u));
            edx = t24;
            wr32(sp0 - 0x38u, esi);
            wr32(sp0 - 0x3cu, arg3);
            wr32(sp0 - 0x40u, arg2 - 0x62u);
            g->ebx = arg2 - 0x62u;
            g->esp = sp0 - 0x34u;
            cow_call_regs(g, COW_IMG(0x102028a0u), g->eax, g->ecx, edx, 0, 3, arg2 - 0x62u, arg3, esi);
        }
    }
    g->ebx = in_ebx;
    return;
L_10202806: ;
    ebp = rd32(sp0 - 0x24u);
    goto L_1020280a;
L_10202845: ;
    wr32(sp0 - 0x38u, 0x80606060u);
    wr32(sp0 - 0x3cu, esi + 6u);
    wr32(sp0 - 0x40u, arg3);
    wr32(sp0 - 0x44u, arg2);
    g->eax = esi + 6u;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t20 = cow_stdcall(g, COW_IMG(0x10202380u), 4, arg2, arg3, esi + 6u, 0x80606060u);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    ebp = self;
    goto L_1020285f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10202720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10202720(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
