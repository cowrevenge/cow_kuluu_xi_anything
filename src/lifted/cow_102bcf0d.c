/* f_0x102bcf0d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102bcf0d(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_54;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 128u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    eax = COW_IMG(0x10342de8u);
    edx = in_edx;
    esi = rd32(arg1);
L_102bcf25: ;
    if (rd8(arg2 + eax - COW_IMG(0x10342de8u)) != rd8(eax))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        goto L_102bcf33;
    }
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)edx != 0u)
    {
        eax = eax + 1u;
        goto L_102bcf25;
    }
    ecx = arg2 - COW_IMG(0x10342de8u);
L_102bcf44: ;
    wr32(sp0 - 0x54u, 0x40u);
    wr32(sp0 - 0x58u, esi);
    wr32(sp0 - 0x5cu, sp0 - 0x44u);
    g->eax = sp0 - 0x44u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t2 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, sp0 - 0x44u, esi, 0x40u, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    if (arg3 >= 0x260u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        wr32(sp0 - 0x54u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x40u;
        t5 = cow_call_regs(g, COW_IMG(0x102c43b8u), g->eax, ecx, edx, 1, 5, esi, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x58u, 1u);
        g->esp = sp0 - 0x44u;
        t8 = cow_call_regs(g, COW_IMG(0x102c4348u), g->eax, t6, t7, 1, 5, 1u, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
        t9 = g->edx;
        wr32(arg1, t8);
        eax = t8;
        ecx = rd32(sp0 - 0x54u);
        edx = t9;
        esi = t8;
    }
    wr32(sp0 - 0x54u, 0x260u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10316dd0u), 3, esi, 0u, 0x260u);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x60u, 0x40u);
    wr32(sp0 - 0x64u, sp0 - 0x44u);
    wr32(sp0 - 0x68u, esi);
    g->ecx = t10;
    g->edx = t11;
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, esi, sp0 - 0x44u, 0x40u, rd32(sp0 - 0x5cu), 0u);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x6cu, 0x2000u);
    wr32(sp0 - 0x70u, esi);
    wr32(esi + 0xb0u, 0x2000u);
    g->eax = 0x2000u;
    g->esp = sp0 - 0x64u;
    t14 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, t12, t13, 1, 3, esi, 0x2000u, rd32(sp0 - 0x68u));
    t15 = g->ecx;
    t16 = g->edx;
    wr32(esi + 0xacu, t14);
    wr32(sp0 - 0x74u, 0x38u);
    wr32(sp0 - 0x78u, COW_IMG(0x103c7c4cu));
    wr32(sp0 - 0x7cu, esi + 0x74u);
    wr32(esi + 0x94u, COW_IMG(0x102c35cdu));
    wr32(esi + 0x98u, COW_IMG(0x102c3642u));
    wr32(esi + 0x9cu, esi);
    g->eax = esi + 0x74u;
    g->esp = sp0 - 0x60u;
    t17 = cow_call_regs(g, COW_IMG(0x102c3e87u), g->eax, t15, t16, 1, 7, esi + 0x74u, COW_IMG(0x103c7c4cu), 0x38u, rd32(sp0 - 0x70u), 0x2000u, rd32(sp0 - 0x68u), sp0 - 0x44u);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0xfffffffau)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_102bcfec;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    if (eax == 0xfffffffcu) goto L_102bcfe5;
    if (eax == 0xfffffffeu) goto L_102bcfe5;
    if (eax == 0u) goto L_102bcff9;
    wr32(sp0 - 0x54u, COW_IMG(0x103c7c38u));
    loc_54 = COW_IMG(0x103c7c38u);
L_102bcff1: ;
    wr32(sp0 - 0x58u, esi);
    g->esp = sp0 - 0x48u;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, esi, loc_54, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t20 = g->edx;
    ecx = rd32(sp0 - 0x54u);
    edx = t20;
L_102bcff9: ;
    wr32(sp0 - 0x54u, 0u);
    t21 = rd32(esi + 0xacu);
    wr32(esi + 0x80u, t21);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, esi);
    t22 = rd32(esi + 0xb0u);
    wr32(esi + 0x84u, t22);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x102c3cd4u), 5, esi, 0u, 0u, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102bcf33: ;
    wr32(esi + 0x44u, 0u);
    wr32(sp0 - 0x54u, COW_IMG(0x103c7dc0u));
    wr32(sp0 - 0x58u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, COW_IMG(0x103c7dc0u));
    t1 = g->edx;
    ecx = COW_IMG(0x103c7dc0u);
    edx = t1;
    goto L_102bcf44;
L_102bcfe5: ;
    wr32(sp0 - 0x54u, COW_IMG(0x103c7db0u));
    loc_54 = COW_IMG(0x103c7db0u);
    goto L_102bcff1;
L_102bcfec: ;
    wr32(sp0 - 0x54u, COW_IMG(0x103c7da0u));
    loc_54 = COW_IMG(0x103c7da0u);
    goto L_102bcff1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bcf0d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bcf0d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
