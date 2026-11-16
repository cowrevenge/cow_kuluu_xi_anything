/* f_0x102ae6c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102ae6c0(Guest* g)
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 176u);

    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    if (arg1 != 0u) goto L_102ae6f6;
    wr32(sp0 - 0x60u, 0x4b9u);
    wr32(sp0 - 0x64u, COW_IMG(0x103bef68u));
    wr32(sp0 - 0x68u, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x60u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x6cu, COW_IMG(0x103b4368u));
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4368u), COW_IMG(0x103b379cu));
    return 0u;
L_102ae6f6: ;
    wr32(sp0 - 0x60u, arg1);
    wr32(sp0 - 0x64u, 1u);
    wr32(sp0 - 0x68u, 4u);
    wr32(sp0 - 0x6cu, sp0 + 4u);
    g->ecx = self;
    g->esp = sp0 - 0x40u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, in_edx, 1, 11, sp0 + 4u, 4u, 1u, arg1, in_edi, in_esi, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    t4 = g->ecx;
    t5 = g->edx;
    if (arg1 == 1u)
    {
        edx = t5;
        goto L_102ae73a;
    }
    ecx = t4;
    edx = t5;
    wr32(sp0 - 0x60u, 0x4beu);
    wr32(sp0 - 0x64u, COW_IMG(0x103bef68u));
    wr32(sp0 - 0x68u, COW_IMG(0x103b379cu));
    g->eax = arg1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x6cu, COW_IMG(0x103beca4u));
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beca4u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return 0u;
L_102ae73a: ;
    wr32(sp0 - 0x60u, arg1);
    wr32(sp0 - 0x64u, 0x50u);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, sp0 - 0x50u);
    g->ecx = sp0 - 0x50u;
    g->esp = sp0 - 0x40u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, edx, 1, 11, sp0 - 0x50u, 1u, 0x50u, arg1, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x5cu;
    t11 = cow_stdcall(g, COW_IMG(0x102acf40u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x54u, t11);
    if (t11 == 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        goto L_102ae7e2;
    }
    ecx = t12;
    edx = t13;
    esi = t11;
    loc_54 = t11;
    wr32(sp0 - 0x60u, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x2cu;
    t14 = cow_call_regs(g, COW_IMG(0x102a9bb0u), g->eax, g->ecx, edx, 1, 13, arg1, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), loc_54, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t15 = g->ecx;
    if (t14 == 0u)
    {
        eax = t14;
        ecx = t15;
        goto L_102ae7d5;
    }
    eax = t14;
    wr32(esi + 0x34u, eax);
    wr32(sp0 - 0x60u, in_ebx);
    t16 = rd32(eax + 0x14u);
    wr32(sp0 - 0x64u, t16);
    t17 = rd32(eax + 0x54u);
    wr32(sp0 - 0x68u, t17);
    wr32(sp0 - 0x6cu, esi + 0x14u);
    g->edx = t16;
    g->esp = sp0 - 0x28u;
    cow_bridge_indirect(g, COW_IMG(0x1028da40u), 0u, 17u, (const uint32_t[]){esi + 0x14u, t17, t16, in_ebx, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu)}, g->ecx, g->edx, g->eax, 68u);
    t18 = g->edx;
    wr32(sp0 - 0x70u, arg1);
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, esi + 0x4cu);
    g->ecx = esi + 0x4cu;
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t18, 1, 11, esi + 0x4cu, 4u, 1u, arg1, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), in_ebx, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x80u, arg1);
    wr32(sp0 - 0x84u, 1u);
    wr32(sp0 - 0x88u, 4u);
    wr32(sp0 - 0x8cu, esi + 0x44u);
    g->ecx = t19;
    g->esp = sp0 - 0x60u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t20, 1, 11, esi + 0x44u, 4u, 1u, arg1, rd32(sp0 - 0x7cu), 4u, 1u, arg1, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u));
    t21 = g->ecx;
    wr32(sp0 - 0x90u, 0x4cau);
    wr32(sp0 - 0x94u, COW_IMG(0x103bef68u));
    wr32(sp0 - 0x98u, 4u);
    t22 = rd32(esi + 0x44u);
    wr32(sp0 - 0x9cu, t22);
    g->edx = t22;
    g->esp = sp0 - 0x88u;
    t23 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t22, 4u, COW_IMG(0x103bef68u), 0x4cau, rd32(sp0 - 0x8cu));
    t24 = g->edx;
    wr32(esi + 0x48u, t23);
    wr32(sp0 - 0xa0u, arg1);
    t25 = rd32(esi + 0x44u);
    wr32(sp0 - 0xa4u, t25);
    wr32(sp0 - 0xa8u, 4u);
    wr32(sp0 - 0xacu, t23);
    g->ecx = t25;
    g->esp = sp0 - 0x80u;
    t26 = cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, t24, 1, 11, t23, 4u, t25, arg1, rd32(sp0 - 0x9cu), 4u, COW_IMG(0x103bef68u), 0x4cau, rd32(sp0 - 0x8cu), 4u, 1u);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x64u, esi);
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x102ad9b0u), 3, esi, in_ebx, rd32(sp0 - 0x5cu));
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return esi;
L_102ae7d5: ;
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x54u;
    g->esp = sp0 - 0x54u;
    t29 = cow_cdecl(g, COW_IMG(0x102acfe0u), 3, sp0 - 0x54u, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
L_102ae7e2: ;
    wr32(sp0 - 0x60u, 0x4d2u);
    wr32(sp0 - 0x64u, COW_IMG(0x103bef68u));
    wr32(sp0 - 0x68u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t32 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x6cu, COW_IMG(0x103bf1d4u));
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf1d4u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ae6c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ae6c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
