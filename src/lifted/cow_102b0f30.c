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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 180u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b0f41u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); in_ebx = rd32(sp0 - 0x64u); g->ebp = rd32(sp0 - 0x68u); g->ebx = rd32(sp0 - 0x64u); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_102b0f41;
    case 0x102b0f6au: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); in_ebx = rd32(sp0 - 0x64u); g->ebp = rd32(sp0 - 0x68u); g->ebx = rd32(sp0 - 0x64u); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_102b0f6a;
    case 0x102b0fd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_102b0fd7;
    case 0x102b0ffau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b0ffa;
    case 0x102b1005u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b1005;
    case 0x102b1009u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_102b1009;
    case 0x102b1019u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_102b1019;
    case 0x102b101bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_102b101b;
    case 0x102b104bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b104b;
    case 0x102b106eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b106e;
    case 0x102b10bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b10ba;
    case 0x102b10d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b10d3;
    case 0x102b10e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102b10e7;
    default: break;
    }
#endif

    COW_AT(102b0f30)
    wr32(sp0 - 0x64u, in_ebx);
    wr32(sp0 - 0x68u, in_ebp);
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        ebx = rd32(sp0 + 8u);
        goto L_102b0f6a;
    }
    ebx = rd32(sp0 + 8u);
    COW_AT(102b0f41)
    wr32(sp0 - 0x74u, 0x12bu);
    wr32(sp0 - 0x78u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x7cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x74u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x80u, COW_IMG(0x103bf998u));
    g->ebx = ebx;
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf998u), COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_102b0f6a: ;
    COW_AT(102b0f6a)
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
    t4 = rd32(sp0 + 4u);
    wr8(sp0 - 1u, 0xau);
    t5 = rd32(t4 + 0x3cu);
    wr32(sp0 - 0x84u, t5);
    wr32(sp0 - 0x88u, 2u);
    wr32(sp0 - 0x8cu, COW_IMG(0x103bf978u));
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    g->ebx = ebx;
    g->ecx = t5;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x103bf978u), 2u, t5, sp0 - 0x54u);
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
    t10 = rd32(t4 + 0x3cu);
    wr32(sp0 + 8u, 0u);
    if ((int32_t)t10 <= 0)
    {
        eax = t10;
        ecx = t8;
        edx = t9;
        ebp = t4 + 0x3cu;
        edi = t4;
        goto L_102b101b;
    }
    ebp = t4 + 0x3cu;
    edi = t4;
    loc_60 = 1u;
L_102b0fd7: ;
    COW_AT(102b0fd7)
    t11 = rd32(rd32(rd32(edi + 0x38u) + rd32(sp0 + 8u) * 4u) + 0x9cu);
    wr32(sp0 - 0x74u, t11);
    wr32(sp0 - 0x78u, edi);
    g->eax = t11;
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
        loc_60 = rd32(sp0 - 0x60u);
    }
    else
    {
        edx = t15;
        esi = t13;
    COW_AT(102b0ffa)
        if ((int32_t)rd32(sp0 - 0x60u) >= (int32_t)rd32(esi + 0x50u))
        {
            loc_60 = rd32(sp0 - 0x60u);
        }
        else
        {
            esi = rd32(esi + 0x50u);
    COW_AT(102b1005)
            wr32(sp0 - 0x60u, esi);
            loc_60 = esi;
        }
    }
    COW_AT(102b1009)
    t16 = rd32(sp0 + 8u) + 1u;
    t17 = rd32(ebp);
    t18 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t16);
    if ((int32_t)(t18 + 1u) < (int32_t)t17) goto L_102b0fd7;
    eax = t16;
    ecx = t17;
    COW_AT(102b1019)
L_102b101b: ;
    COW_AT(102b101b)
    wr32(sp0 - 0x74u, ebx);
    wr32(sp0 - 0x78u, 1u);
    wr32(sp0 - 0x7cu, 4u);
    wr32(sp0 - 0x80u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t19 = cow_cdecl(g, COW_IMG(0x10292200u), 4, ebp, 4u, 1u, ebx);
    t20 = g->edx;
    wr32(sp0 - 0x84u, ebx);
    wr32(sp0 - 0x88u, 1u);
    wr32(sp0 - 0x8cu, 4u);
    wr32(sp0 - 0x90u, sp0 - 0x60u);
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x60u, 4u, 1u, ebx);
    t21 = rd32(ebp);
    wr32(sp0 + 4u, 0u);
    wr32(sp0 + 8u, 0u);
    if ((int32_t)t21 <= 0) goto L_102b10e7;
L_102b104b: ;
    COW_AT(102b104b)
    t22 = rd32(rd32(rd32(edi + 0x38u) + rd32(sp0 + 8u) * 4u) + 0x9cu);
    wr32(sp0 - 0x74u, t22);
    wr32(sp0 - 0x78u, edi);
    g->eax = rd32(sp0 + 8u);
    g->ecx = t22;
    g->edx = rd32(edi + 0x38u);
    t23 = rd32(sp0 + 8u);
    t24 = rd32(edi + 0x38u);
    t25 = rd32(rd32(edi + 0x38u) + rd32(sp0 + 8u) * 4u);
    g->esp = sp0 - 0x70u;
    t26 = cow_cdecl(g, COW_IMG(0x1029a400u), 2, edi, t22);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x58u, t26);
    if (t26 == 0xffffffffu)
    {
        edx = t28;
        esi = t25;
    COW_AT(102b10ba)
        t38 = rd32(sp0 + 4u);
        wr32(sp0 - 0x74u, t38);
        wr32(sp0 - 0x78u, esi);
        wr32(sp0 - 0x7cu, edi);
        wr32(sp0 + 4u, t38 + 1u);
        g->esp = sp0 - 0x70u;
        cow_cdecl(g, COW_IMG(0x102b10f0u), 3, edi, esi, t38);
    }
    else
    {
        ecx = t27;
        esi = t25;
    COW_AT(102b106e)
        wr32(sp0 - 0x74u, ebx);
        wr32(sp0 - 0x78u, 1u);
        wr32(sp0 - 0x7cu, 4u);
        wr32(sp0 - 0x80u, sp0 - 0x58u);
        t29 = rd32(esi + 0x50u);
        wr32(sp0 - 0x5cu, t29);
        g->eax = sp0 - 0x58u;
        g->edx = t29;
        g->esp = sp0 - 0x70u;
        t30 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x58u, 4u, 1u, ebx);
        t31 = g->edx;
        wr32(sp0 - 0x84u, ebx);
        wr32(sp0 - 0x88u, 1u);
        wr32(sp0 - 0x8cu, 4u);
        wr32(sp0 - 0x90u, sp0 - 0x5cu);
        g->ecx = sp0 - 0x5cu;
        g->esp = sp0 - 0x80u;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x5cu, 4u, 1u, ebx);
        t32 = g->ecx;
        wr32(sp0 - 0x94u, ebx);
        t33 = rd32(sp0 - 0x5cu);
        wr32(sp0 - 0x98u, t33);
        wr32(sp0 - 0x9cu, 4u);
        t34 = rd32(esi + 0x30u);
        wr32(sp0 - 0xa0u, t34);
        g->eax = t34;
        g->esp = sp0 - 0x90u;
        t35 = cow_cdecl(g, COW_IMG(0x10292200u), 4, t34, 4u, t33, ebx);
        wr32(sp0 - 0xa4u, ebx);
        t36 = rd32(sp0 - 0x5cu);
        wr32(sp0 - 0xa8u, t36);
        wr32(sp0 - 0xacu, 4u);
        t37 = rd32(esi + 0x38u);
        wr32(sp0 - 0xb0u, t37);
        g->esp = sp0 - 0xa0u;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, t37, 4u, t36, ebx);
    }
    COW_AT(102b10d3)
    t39 = rd32(sp0 + 8u) + 1u;
    t40 = rd32(sp0 + 8u);
    t41 = rd32(ebp);
    wr32(sp0 + 8u, t39);
    if ((int32_t)(t40 + 1u) < (int32_t)t41) goto L_102b104b;
L_102b10e7: ;
    COW_AT(102b10e7)
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 0x68u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b0f30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b0f41u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        in_ebx = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102b0f6au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        in_ebx = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x70u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b0fd7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0xa0u, sp0 - 0x50u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x80u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x102b0ffau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0xa0u, sp0 - 0x50u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x80u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x102b1005u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0xa0u, sp0 - 0x50u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x80u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x102b1009u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0xa0u, sp0 - 0x50u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x80u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x102b1019u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0xa0u, sp0 - 0x50u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x80u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x102b101bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x70u;
        g->esi = 0u;
        wr32(sp0 - 0xa0u, sp0 - 0x50u);
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        wr32(sp0 - 0x80u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x102b104bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102b106eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102b10bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102b10d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x102b10e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b0f30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b0f30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
