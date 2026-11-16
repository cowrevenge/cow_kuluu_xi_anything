/* f_0x102b0f30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b0f30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_60;
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
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 180u);

    wr32(sp0 - 0x64u, in_ebx);
    wr32(sp0 - 0x68u, in_ebp);
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        ebx = rd32(sp0 + 8u);
        goto L_102b0f6a;
    }
    wr32(sp0 - 0x74u, 0x12bu);
    wr32(sp0 - 0x78u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x7cu, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x74u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x80u, COW_IMG(0x103bf998u));
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf998u), COW_IMG(0x103b379cu));
    return;
L_102b0f6a: ;
    wr32(sp0 - 0x74u, ebx);
    wr32(sp0 - 0x78u, 1u);
    wr32(sp0 - 0x7cu, 4u);
    wr32(sp0 - 0x80u, sp0 - 0x54u);
    wr32(sp0 - 0x54u, 0x10002u);
    g->esp = sp0 - 0x70u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x54u, 4u, 1u, ebx);
    edi = sp0 - 0x50u;
    eax = 0u;
    ecx = 0x14u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t4 = rd32(rd32(sp0 + 4u) + 0x3cu);
    wr32(sp0 - 0x84u, t4);
    wr32(sp0 - 0x88u, 2u);
    wr32(sp0 - 0x8cu, COW_IMG(0x103bf978u));
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    g->ebx = ebx;
    g->ecx = t4;
    g->edx = sp0 - 0x50u;
    t5 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x103bf978u), 2u, t4, sp0 - 0x54u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x94u, ebx);
    wr32(sp0 - 0x98u, 0x50u);
    wr32(sp0 - 0x9cu, 1u);
    wr32(sp0 - 0xa0u, sp0 - 0x50u);
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x50u, 1u, 0x50u, ebx);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x60u, 1u);
    t10 = rd32(t5 + 0x3cu);
    wr32(sp0 + 8u, 0u);
    if ((int32_t)t10 <= 0)
    {
        ecx = t8;
        edx = t9;
        ebp = t5 + 0x3cu;
        edi = t5;
        goto L_102b101b;
    }
    ebp = t5 + 0x3cu;
    edi = t5;
    loc_60 = 1u;
L_102b0fd7: ;
    t11 = rd32(rd32(rd32(edi + 0x38u) + rd32(sp0 + 8u) * 4u) + 0x9cu);
    wr32(sp0 - 0x74u, t11);
    wr32(sp0 - 0x78u, edi);
    g->edx = rd32(sp0 + 8u);
    t12 = rd32(sp0 + 8u);
    t13 = rd32(rd32(edi + 0x38u) + rd32(sp0 + 8u) * 4u);
    g->esp = sp0 - 0x70u;
    t14 = cow_cdecl(g, COW_IMG(0x1029a400u), 2, edi, t11);
    t15 = g->edx;
    wr32(sp0 - 0x58u, t14);
    if (t14 == 0xffffffffu)
    {
        edx = t15;
    }
    else
    {
        edx = t15;
        esi = t13;
        if ((int32_t)rd32(sp0 - 0x60u) < (int32_t)rd32(esi + 0x50u))
        {
            esi = rd32(esi + 0x50u);
            wr32(sp0 - 0x60u, esi);
            loc_60 = esi;
        }
    }
    t16 = rd32(sp0 + 8u) + 1u;
    t17 = rd32(ebp);
    t18 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t16);
    if ((int32_t)(t18 + 1u) < (int32_t)t17) goto L_102b0fd7;
    ecx = t17;
L_102b101b: ;
    wr32(sp0 - 0x74u, ebx);
    wr32(sp0 - 0x78u, 1u);
    wr32(sp0 - 0x7cu, 4u);
    wr32(sp0 - 0x80u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, ebp, 4u, 1u, ebx);
    t19 = g->edx;
    wr32(sp0 - 0x84u, ebx);
    wr32(sp0 - 0x88u, 1u);
    wr32(sp0 - 0x8cu, 4u);
    wr32(sp0 - 0x90u, sp0 - 0x60u);
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x60u, 4u, 1u, ebx);
    t20 = rd32(ebp);
    wr32(sp0 + 4u, 0u);
    wr32(sp0 + 8u, 0u);
    if ((int32_t)t20 <= 0) goto L_102b10e7;
L_102b104b: ;
    t21 = rd32(rd32(rd32(edi + 0x38u) + rd32(sp0 + 8u) * 4u) + 0x9cu);
    wr32(sp0 - 0x74u, t21);
    wr32(sp0 - 0x78u, edi);
    g->ecx = t21;
    g->edx = rd32(edi + 0x38u);
    t22 = rd32(sp0 + 8u);
    t23 = rd32(edi + 0x38u);
    t24 = rd32(rd32(edi + 0x38u) + rd32(sp0 + 8u) * 4u);
    g->esp = sp0 - 0x70u;
    t25 = cow_cdecl(g, COW_IMG(0x1029a400u), 2, edi, t21);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x58u, t25);
    if (t25 == 0xffffffffu)
    {
        edx = t27;
        esi = t24;
        t35 = rd32(sp0 + 4u);
        wr32(sp0 - 0x74u, t35);
        wr32(sp0 - 0x78u, esi);
        wr32(sp0 - 0x7cu, edi);
        wr32(sp0 + 4u, t35 + 1u);
        g->esp = sp0 - 0x70u;
        cow_cdecl(g, COW_IMG(0x102b10f0u), 3, edi, esi, t35);
    }
    else
    {
        ecx = t26;
        esi = t24;
        wr32(sp0 - 0x74u, ebx);
        wr32(sp0 - 0x78u, 1u);
        wr32(sp0 - 0x7cu, 4u);
        wr32(sp0 - 0x80u, sp0 - 0x58u);
        t28 = rd32(esi + 0x50u);
        wr32(sp0 - 0x5cu, t28);
        g->edx = t28;
        g->esp = sp0 - 0x70u;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x58u, 4u, 1u, ebx);
        t29 = g->edx;
        wr32(sp0 - 0x84u, ebx);
        wr32(sp0 - 0x88u, 1u);
        wr32(sp0 - 0x8cu, 4u);
        wr32(sp0 - 0x90u, sp0 - 0x5cu);
        g->ecx = sp0 - 0x5cu;
        g->esp = sp0 - 0x80u;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x5cu, 4u, 1u, ebx);
        t30 = g->ecx;
        wr32(sp0 - 0x94u, ebx);
        t31 = rd32(sp0 - 0x5cu);
        wr32(sp0 - 0x98u, t31);
        wr32(sp0 - 0x9cu, 4u);
        t32 = rd32(esi + 0x30u);
        wr32(sp0 - 0xa0u, t32);
        g->esp = sp0 - 0x90u;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, t32, 4u, t31, ebx);
        wr32(sp0 - 0xa4u, ebx);
        t33 = rd32(sp0 - 0x5cu);
        wr32(sp0 - 0xa8u, t33);
        wr32(sp0 - 0xacu, 4u);
        t34 = rd32(esi + 0x38u);
        wr32(sp0 - 0xb0u, t34);
        g->esp = sp0 - 0xa0u;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, t34, 4u, t33, ebx);
    }
    t36 = rd32(sp0 + 8u) + 1u;
    t37 = rd32(sp0 + 8u);
    t38 = rd32(ebp);
    wr32(sp0 + 8u, t36);
    if ((int32_t)(t37 + 1u) < (int32_t)t38) goto L_102b104b;
L_102b10e7: ;
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b0f30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b0f30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
