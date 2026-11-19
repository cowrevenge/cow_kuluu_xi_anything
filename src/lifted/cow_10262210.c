/* f_0x10262210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10262210(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_b0;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 188u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10262238u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); in_ebx = rd32(sp0 - 0xa4u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xacu); goto E_10262238;
    case 0x10262242u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); in_ebx = rd32(sp0 - 0xa4u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xacu); goto E_10262242;
    case 0x10262256u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_10262256;
    case 0x10262260u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_edi = g->edi; goto E_10262260;
    case 0x10262272u: ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10262272;
    case 0x10262274u: ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10262274;
    case 0x10262281u: ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); g->edi = rd32(sp0 - 0xb0u); goto E_10262281;
    case 0x10262283u: ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10262283;
    case 0x10262288u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_10262288;
    case 0x10262292u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10262292;
    case 0x10262299u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10262299;
    case 0x102622c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102622c4;
    case 0x102622e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102622e4;
    case 0x10262338u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10262338;
    case 0x1026233au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1026233a;
    case 0x10262345u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_10262345;
    case 0x1026234eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_a0 = rd32(sp0 - 0xa0u); goto E_1026234e;
    case 0x1026235au: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_a0 = rd32(sp0 - 0xa0u); goto E_1026235a;
    case 0x10262360u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_a0 = rd32(sp0 - 0xa0u); goto E_10262360;
    case 0x10262367u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_c = rd32(sp0 - 0xcu); goto E_10262367;
    default: break;
    }
#endif

    COW_AT(10262210)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327abbu));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(sp0 + 0xcu);
    t2 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0xa4u, in_ebx);
    wr32(sp0 - 0xa8u, in_ebp);
    wr32(sp0 - 0xacu, in_esi);
    if (t1 != 0u)
    {
        loc_c = t2;
    COW_AT(10262242)
        g->eax = rd32(rd32(arg1 + 8u));
        g->edx = in_edx;
        t3 = rd32(rd32(arg1 + 8u));
        g->esp = sp0 - 0xacu;
        t4 = cow_thiscall(g, rd32(t3 + 0x10u), rd32(arg1 + 8u), 0);
        t5 = g->edx;
        if (t4 == rd32(arg1 + 0xcu))
        {
            edx = t5;
    COW_AT(10262260)
            if (arg4 == 0u) goto L_10262283;
    COW_AT(10262272)
            wr32(arg4, 0u);
L_10262274: ;
    COW_AT(10262274)
            wr32(sp0 - 0xb0u, in_edi);
            wr32(sp0 - 0xa0u, 0u);
            if (arg2 == 0u)
            {
                ebp = arg2;
                loc_b0 = in_edi;
                loc_a0 = 0u;
            }
            else
            {
    COW_AT(10262281)
                eax = arg4;
                ebp = arg2;
                loc_b0 = in_edi;
                loc_a0 = 0u;
L_10262299: ;
    COW_AT(10262299)
                g->esp = sp0 - 0xb0u;
                cow_thiscall(g, COW_IMG(0x1026a150u), sp0 - 0x9cu, 0);
                wr32(sp0 - 4u, 0u);
                t6 = rd32(arg1 + 4u) + 1u;
                t7 = rd32(arg1 + 4u);
                wr32(arg1 + 4u, t6);
                wr32(sp0 - 0xb4u, sp0 - 0x9cu);
                wr32(sp0 - 0xb8u, t7);
                g->eax = t7;
                g->edx = rd32(rd32(arg1 + 8u));
                t8 = rd32(arg1 + 8u);
                t9 = rd32(rd32(arg1 + 8u));
                t10 = cow_thiscall(g, rd32(t9 + 0x34u), t8, 2, t7, sp0 - 0x9cu);
                t11 = g->ecx;
                t12 = g->edx;
                if (t10 != 0u)
                {
                    eax = t10;
                    edx = t12;
                    goto L_1026233a;
                }
                eax = t10;
                ecx = t11;
                edx = t12;
    COW_AT(102622c4)
                wr32(sp0 - 0xb4u, 0x48u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xb0u;
                t13 = cow_stdcall(g, rd32(COW_IMG(0x103294acu)), 1, 0x48u);   /* ole32.dll!CoTaskMemAlloc */
                t14 = g->edx;
                wr32(sp0 - 4u, 0xffffffffu);
                wr32(rd32(sp0 + 0xcu), t13);
                if (t13 == 0u)
                {
                    eax = t13;
                    edx = t14;
                    goto L_10262345;
                }
                eax = t13;
    COW_AT(102622e4)
                t15 = rd32(sp0 - 0xa0u);
                esi = sp0 - 0x9cu;
                edi = sp0 - 0x54u;
                ecx = 0x12u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                esi = sp0 - 0x54u;
                edi = eax;
                ecx = 0x12u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(sp0 - 0x58u, 0u);
                wr32(sp0 - 0x5cu, 0u);
                wr32(sp0 - 0x60u, 0u);
                t16 = rd32(sp0 + 0xcu) + 4u;
                wr32(sp0 + 0xcu, t16);
                wr32(sp0 - 0xa0u, t15 + 1u);
                g->eax = eax;
                g->esp = sp0 - 0xb0u;
                t17 = cow_fastcall(g, COW_IMG(0x1026a140u), sp0 - 0x9cu, t15 + 1u, 0);
                t18 = g->edx;
                if (ebp != 1u)
                {
                    eax = t17;
                    edx = t18;
                    ebp = ebp - 1u;
                    goto L_10262292;
                }
                edx = t18;
                ebp = ebp - 1u;
    COW_AT(10262338)
                loc_b0 = rd32(sp0 - 0xb0u);
                loc_a0 = rd32(sp0 - 0xa0u);
            }
L_1026234e: ;
    COW_AT(1026234e)
            if (arg4 == 0u)
            {
                edi = loc_b0;
            }
            else
            {
                edi = loc_b0;
    COW_AT(1026235a)
                wr32(arg4, loc_a0);
                edx = loc_a0;
            }
    COW_AT(10262360)
            eax = ebp != 0u;
            loc_c = rd32(sp0 - 0xcu);
            loc_a4 = rd32(sp0 - 0xa4u);
            loc_a8 = rd32(sp0 - 0xa8u);
            loc_ac = rd32(sp0 - 0xacu);
        }
        else
        {
            edx = t5;
    COW_AT(10262256)
            eax = 0x80040203u;
            edi = in_edi;
            loc_c = rd32(sp0 - 0xcu);
            loc_a4 = rd32(sp0 - 0xa4u);
            loc_a8 = rd32(sp0 - 0xa8u);
            loc_ac = rd32(sp0 - 0xacu);
        }
    }
    else
    {
        loc_c = t2;
    COW_AT(10262238)
        eax = 0x80004003u;
        edx = in_edx;
        edi = in_edi;
        loc_a4 = in_ebx;
        loc_a8 = in_ebp;
        loc_ac = in_esi;
    }
L_10262367: ;
    COW_AT(10262367)
    wr32(g->fs_base, loc_c);
    g->ebx = loc_a4;
    g->esi = loc_ac;
    g->edi = edi;
    g->ebp = loc_a8;
    g->edx = edx;
    return eax;
L_10262283: ;
    COW_AT(10262283)
    if (arg2 <= 1u) goto L_10262274;
    COW_AT(10262288)
    eax = 0x80070057u;
    edi = in_edi;
    loc_c = rd32(sp0 - 0xcu);
    loc_a4 = rd32(sp0 - 0xa4u);
    loc_a8 = rd32(sp0 - 0xa8u);
    loc_ac = rd32(sp0 - 0xacu);
    goto L_10262367;
L_10262292: ;
    COW_AT(10262292)
    loc_b0 = rd32(sp0 - 0xb0u);
    loc_a0 = rd32(sp0 - 0xa0u);
    goto L_10262299;
L_1026233a: ;
    COW_AT(1026233a)
    wr32(sp0 - 4u, 0xffffffffu);
L_10262345: ;
    COW_AT(10262345)
    g->esp = sp0 - 0xb0u;
    cow_fastcall(g, COW_IMG(0x1026a140u), sp0 - 0x9cu, edx, 0);
    t19 = g->edx;
    edx = t19;
    loc_b0 = rd32(sp0 - 0xb0u);
    loc_a0 = rd32(sp0 - 0xa0u);
    goto L_1026234e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10262210(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10262238u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        in_ebx = rd32(sp0 - 0xa4u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10262242u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        in_ebx = rd32(sp0 - 0xa4u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xacu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10262256u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10262260u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10262272u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->eax = arg4;
        g->ebx = 0u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10262274u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->eax = arg4;
        g->ebx = 0u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10262281u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xb0u;
        g->eax = arg4;
        g->ebx = 0u;
        g->ebp = arg2;
        g->esi = arg1;
        wr32(sp0 - 0xa0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10262283u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->eax = arg4;
        g->ebx = 0u;
        g->ebp = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10262288u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10262292u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10262299u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_a0;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102622c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        g->ebx = 0u;
        g->esi = sp0 - 0x9cu;
        wr32(sp0 - 0xb4u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102622e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        g->ebx = 0u;
        g->esi = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x10262338u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1026233au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        g->ebx = 0u;
        g->esi = sp0 - 0x9cu;
        wr32(sp0 - 0xb4u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x10262345u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        g->ebx = 0u;
        g->esi = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x1026234eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xb0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1026235au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_b0;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xacu;
        g->eax = arg4;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10262360u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xacu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10262367u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b0;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10262210(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10262210(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
