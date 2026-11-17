/* f_0x103178f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_103178f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 176u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_esi);
    if ((int32_t)rd32(sp0 + 4u) < 0) goto L_10317b30;
    esi = rd32(sp0 + 4u);
    if ((int32_t)esi > 5) goto L_10317b30;
    wr32(sp0 - 0x98u, 0x13u);
    g->ebx = 0u;
    g->eax = in_eax;
    g->esp = sp0 - 0x8cu;
    t1 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0x13u, in_esi, in_ebx);
    t2 = g->edx;
    wr32(COW_IMG(0x109f840cu), rd32(COW_IMG(0x109f840cu)) + 1u);
    eax = t1;
    ecx = 0x13u;
    edx = t2;
L_1031791f: ;
    if (rd32(COW_IMG(0x109f8410u)) == 0u) goto L_10317931;
    wr32(sp0 - 0x98u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t3 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 1u);   /* kernel32.dll!Sleep */
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    goto L_1031791f;
L_10317931: ;
    wr32(sp0 - 0x98u, in_edi);
    if (esi == 0u) goto L_1031795a;
    if (rd32(sp0 + 8u) == 0u) goto L_1031794b;
    t6 = rd32(sp0 + 8u);
    wr32(sp0 - 0x9cu, t6);
    wr32(sp0 - 0xa0u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t7 = cow_cdecl(g, COW_IMG(0x10317b36u), 4, esi, t6, in_edi, rd32(sp0 - 0x94u));
    t8 = g->edx;
    eax = t7;
    ecx = rd32(sp0 - 0x9cu);
    edx = t8;
L_10317b1b: ;
    esi = eax;
    loc_98 = rd32(sp0 - 0x98u);
L_10317b1d: ;
    wr32(sp0 - 0x9cu, 0x13u);
    g->esp = sp0 - 0x90u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, loc_98, rd32(sp0 - 0x94u));
L_10317b25: ;
    wr32(COW_IMG(0x109f840cu), rd32(COW_IMG(0x109f840cu)) - 1u);
    eax = esi;
    edi = rd32(sp0 - 0x98u);
    loc_4 = rd32(sp0 - 4u);
    loc_90 = rd32(sp0 - 0x90u);
    loc_94 = rd32(sp0 - 0x94u);
L_10317b32: ;
    g->ebx = loc_90;
    g->esi = loc_94;
    g->edi = edi;
    g->ebp = loc_4;
    return eax;
L_1031794b: ;
    eax = esi * 3u;
    esi = rd32(COW_IMG(0x103d0734u) + esi * 0xcu);
    loc_98 = in_edi;
    goto L_10317b1d;
L_1031795a: ;
    wr32(sp0 - 8u, 1u);
    t9 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, 0u);
    if (t9 == 0u)
    {
        loc_98 = in_edi;
        goto L_10317b16;
    }
    edi = t9;
    if (rd8(edi) != 0x4cu) goto L_10317a8d;
    if (rd8(edi + 1u) != 0x43u) goto L_10317a8d;
    if (rd8(edi + 2u) != 0x5fu) goto L_10317a8d;
    wr32(sp0 - 0x9cu, COW_IMG(0x1034a2b8u));
    wr32(sp0 - 0xa0u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x10322bf0u), ecx, 4, edi, COW_IMG(0x1034a2b8u), in_edi, rd32(sp0 - 0x94u));
    t11 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        ecx = COW_IMG(0x1034a2b8u);
        edx = t11;
        goto L_10317a6d;
    }
    edx = t11;
    esi = t10;
L_103179a7: ;
    wr32(sp0 - 8u, esi - edi);
    if (esi == edi)
    {
        eax = esi - edi;
        ecx = COW_IMG(0x1034a2b8u);
        goto L_10317a6d;
    }
    eax = esi - edi;
    loc_8 = esi - edi;
    if (rd8(esi) == 0x3bu)
    {
        ecx = COW_IMG(0x1034a2b8u);
        goto L_10317a6d;
    }
    wr32(sp0 + 8u, 1u);
    ecx = COW_IMG(0x1034a2b8u);
    ebx = COW_IMG(0x103d073cu);
L_103179ce: ;
    wr32(sp0 - 0x9cu, eax);
    wr32(sp0 - 0xa0u, edi);
    wr32(sp0 - 0xa4u, rd32(ebx));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t12 = cow_cdecl(g, COW_IMG(0x10312980u), 5, rd32(ebx), edi, eax, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_103179eb;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    wr32(sp0 - 0x9cu, rd32(ebx));
    g->edx = edx;
    t15 = rd32(ebx);
    g->esp = sp0 - 0x98u;
    t16 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, t15);
    t17 = g->edx;
    if (rd32(sp0 - 8u) == t16)
    {
        eax = t16;
        ecx = rd32(sp0 - 0x9cu);
        edx = t17;
        goto L_103179f9;
    }
    eax = t16;
    ecx = rd32(sp0 - 0x9cu);
    edx = t17;
L_103179eb: ;
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
    if ((int32_t)(ebx + 0xcu) <= (int32_t)COW_IMG(0x103d076cu))
    {
        ebx = ebx + 0xcu;
        goto L_103179cb;
    }
L_103179f9: ;
    wr32(sp0 - 0x9cu, COW_IMG(0x1034a2b4u));
    wr32(sp0 - 0xa0u, esi + 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t18 = cow_thiscall_cdecl(g, COW_IMG(0x10322bb0u), ecx, 4, esi + 1u, COW_IMG(0x1034a2b4u), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t19 = g->edx;
    if (t18 != 0u)
    {
        eax = t18;
        edx = t19;
        esi = esi + 1u;
        edi = t18;
        goto L_10317a12;
    }
    eax = t18;
    edx = t19;
    esi = esi + 1u;
    edi = t18;
    if (rd8(esi) != 0x3bu)
    {
        ecx = COW_IMG(0x1034a2b4u);
        goto L_10317a6d;
    }
L_10317a12: ;
    if ((int32_t)rd32(sp0 + 8u) > 5)
    {
        ecx = COW_IMG(0x1034a2b4u);
    }
    else
    {
        wr32(sp0 - 0x9cu, edi);
        wr32(sp0 - 0xa0u, esi);
        wr32(sp0 - 0xa4u, sp0 - 0x8cu);
        g->ecx = COW_IMG(0x1034a2b4u);
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x8cu, g->ecx, g->edx, 1, 3, sp0 - 0x8cu, esi, edi);
        t20 = g->ecx;
        t21 = g->edx;
        wr8(edi + sp0 - 0x8cu, 0u);
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        t22 = rd32(sp0 + 8u);
        wr32(sp0 - 0xacu, t22);
        g->eax = sp0 - 0x8cu;
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp0 - 0x9cu;
        t23 = cow_cdecl(g, COW_IMG(0x10317b36u), 4, t22, sp0 - 0x8cu, sp0 - 0x8cu, rd32(sp0 - 0xa0u));
        t24 = g->ecx;
        t25 = g->edx;
        if (t23 == 0u)
        {
            eax = t23;
            ecx = t24;
            edx = t25;
        }
        else
        {
            eax = t23;
            ecx = t24;
            edx = t25;
            wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
        }
    }
    if (rd8(edi + esi) == 0u) goto L_10317a7c;
    edi = edi + esi;
    if (rd8(edi + 1u) == 0u) goto L_10317a7c;
    edi = edi + 1u;
    wr32(sp0 - 0x9cu, COW_IMG(0x1034a2b8u));
    wr32(sp0 - 0xa0u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t26 = cow_thiscall_cdecl(g, COW_IMG(0x10322bf0u), ecx, 4, edi, COW_IMG(0x1034a2b8u), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t27 = g->edx;
    if (t26 != 0u)
    {
        edx = t27;
        esi = t26;
        goto L_103179a5;
    }
    eax = t26;
    edx = t27;
    ecx = COW_IMG(0x1034a2b8u);
L_10317a6d: ;
    wr32(sp0 - 0x9cu, 0x13u);
    g->esp = sp0 - 0x90u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    esi = 0u;
    goto L_10317b25;
L_103179a5: ;
    goto L_103179a7;
L_103179cb: ;
    eax = rd32(sp0 - 8u);
    loc_8 = rd32(sp0 - 8u);
    goto L_103179ce;
L_10317a7c: ;
    zf = rd32(sp0 + 4u) == 0u;
L_10317a80: ;
    if (!zf)
    {
        loc_98 = rd32(sp0 - 0x98u);
        goto L_10317b16;
    }
    esi = 0u;
    loc_98 = rd32(sp0 - 0x98u);
    goto L_10317b1d;
L_10317a8d: ;
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, sp0 - 0x8cu);
    wr32(sp0 - 0xacu, edi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t28 = cow_call_regs(g, COW_IMG(0x10317d0au), sp0 - 0x8cu, g->ecx, g->edx, 1, 4, edi, sp0 - 0x8cu, 0u, 0u);
    t29 = g->ecx;
    t30 = g->edx;
    if (t28 == 0u)
    {
        eax = t28;
        ecx = t29;
        edx = t30;
        esi = t28;
        loc_98 = in_edi;
        goto L_10317b1d;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
    ebx = 0u;
    edi = COW_IMG(0x103d0734u);
    loc_8 = rd32(sp0 - 8u);
L_10317aad: ;
    if (edi != COW_IMG(0x103d0734u))
    {
        wr32(sp0 - 0x9cu, rd32(edi));
        wr32(sp0 - 0xa0u, sp0 - 0x8cu);
        g->edi = edi;
        g->edx = edx;
        t31 = rd32(edi);
        g->esp = sp0 - 0x98u;
        t32 = cow_call_regs(g, COW_IMG(0x10320960u), sp0 - 0x8cu, g->ecx, g->edx, 1, 2, sp0 - 0x8cu, t31);
        t33 = g->edx;
        t34 = g->edi;
        if (t32 == 0u)
        {
            eax = t32;
            ecx = rd32(sp0 - 0x9cu);
            edx = t33;
            edi = t34;
            goto L_10317add;
        }
        ecx = rd32(sp0 - 0x9cu);
        edx = t33;
        edi = t34;
        wr32(sp0 - 0x9cu, sp0 - 0x8cu);
        wr32(sp0 - 0xa0u, ebx);
        g->eax = sp0 - 0x8cu;
        g->edx = edx;
        g->esp = sp0 - 0x90u;
        t35 = cow_cdecl(g, COW_IMG(0x10317b36u), 4, ebx, sp0 - 0x8cu, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
        t36 = g->edx;
        if (t35 != 0u)
        {
            eax = t35;
            ecx = sp0 - 0x8cu;
            edx = t36;
            goto L_10317add;
        }
        eax = t35;
        edx = t36;
        t37 = rd32(sp0 - 8u) & eax;
        wr32(sp0 - 8u, t37);
        ecx = sp0 - 0x8cu;
        loc_8 = t37;
    }
L_10317ae0: ;
    if ((int32_t)(edi + 0xcu) <= (int32_t)COW_IMG(0x103d0770u))
    {
        ebx = ebx + 1u;
        edi = edi + 0xcu;
        goto L_10317aad;
    }
    ebx = ebx + 1u;
    if (loc_8 == 0u) goto L_10317b0e;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x98u;
    t38 = cow_call_regs(g, COW_IMG(0x10317c51u), g->eax, g->ecx, edx, 1, 0);
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0x9cu, rd32(COW_IMG(0x103d0734u)));
    g->ebx = ebx;
    t41 = rd32(COW_IMG(0x103d0734u));
    g->esp = sp0 - 0x90u;
    t42 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t39, t40, 1, 3, t41, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t43 = g->edx;
    t44 = rd32(sp0 - 0x9cu);
    wr32(COW_IMG(0x103d0734u), 0u);
    eax = t42;
    ecx = t44;
    edx = t43;
    esi = t38;
    loc_98 = rd32(sp0 - 0x98u);
    goto L_10317b1d;
L_10317add: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    loc_8 = rd32(sp0 - 8u);
    goto L_10317ae0;
L_10317b0e: ;
    zf = rd32(sp0 + 4u) == 0u;
    goto L_10317a80;
L_10317b16: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x98u;
    t45 = cow_call_regs(g, COW_IMG(0x10317c51u), g->eax, g->ecx, edx, 1, 0);
    t46 = g->ecx;
    t47 = g->edx;
    eax = t45;
    ecx = t46;
    edx = t47;
    goto L_10317b1b;
L_10317b30: ;
    eax = 0u;
    edi = in_edi;
    loc_4 = in_ebp;
    loc_90 = in_ebx;
    loc_94 = in_esi;
    goto L_10317b32;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103178f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103178f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
