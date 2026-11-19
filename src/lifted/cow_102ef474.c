/* f_0x102ef474 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102ef474(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ef487u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102ef487;
    case 0x102ef4bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102ef4ba;
    case 0x102ef4bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102ef4bf;
    case 0x102ef4d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102ef4d7;
    case 0x102ef4deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102ef4de;
    case 0x102ef4e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef4e3;
    case 0x102ef4ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102ef4eb;
    case 0x102ef4f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ef4f1;
    case 0x102ef525u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef525;
    case 0x102ef531u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef531;
    case 0x102ef53cu: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef53c;
    case 0x102ef548u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef548;
    case 0x102ef553u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef553;
    case 0x102ef55fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef55f;
    case 0x102ef56au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef56a;
    case 0x102ef578u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef578;
    case 0x102ef57fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef57f;
    case 0x102ef58au: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef58a;
    case 0x102ef591u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef591;
    case 0x102ef59cu: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef59c;
    case 0x102ef5a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102ef5a1;
    case 0x102ef5a9u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef5a9;
    case 0x102ef5b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef5b0;
    case 0x102ef5b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef5b7;
    case 0x102ef5beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef5be;
    case 0x102ef5c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef5c7;
    case 0x102ef5cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef5cb;
    case 0x102ef5d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef5d0;
    case 0x102ef5d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ef5d8;
    default: break;
    }
#endif

    COW_AT(102ef474)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd8(arg1 + 0x11cu) >= 8u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102ef4eb;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1 + 0x11cu);
    COW_AT(102ef487)
    wr32(sp0 - 0x14u, 8u);
    t1 = 8u - (uint8_t)eax;
    wr32(sp0 - 0x14u, t1);
    t2 = arg2 + (uint8_t)eax + 0x20u;
    wr32(sp0 - 0x18u, t2);
    wr32(sp0 - 0x1cu, arg1);
    g->ecx = self;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102f1f8fu), g->eax, g->ecx, in_edx, 1, 3, arg1, t2, t1);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x20u, t1);
    wr32(sp0 - 0x24u, (uint8_t)eax);
    wr32(sp0 - 0x28u, arg2 + 0x20u);
    wr8(arg1 + 0x11cu, 8u);
    g->eax = arg2 + 0x20u;
    g->ecx = t3;
    g->edx = t4;
    g->esp = sp0 - 0x1cu;
    t5 = cow_cdecl(g, COW_IMG(0x102f2029u), 3, arg2 + 0x20u, (uint8_t)eax, t1);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        ecx = t6;
        edx = t7;
        goto L_102ef4eb;
    }
    ecx = t6;
    edx = t7;
    ebx = (uint8_t)eax;
    eax = t5;
    edi = t1;
    COW_AT(102ef4ba)
    if (ebx >= 4u) goto L_102ef4de;
    COW_AT(102ef4bf)
    wr32(sp0 - 0x14u, edi - 4u);
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x1cu, arg2 + 0x20u);
    g->eax = arg2 + 0x20u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x102f2029u), 3, arg2 + 0x20u, ebx, edi - 4u);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_102ef4de;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(102ef4d7)
    wr32(sp0 - 0x14u, COW_IMG(0x10348004u));
L_102ef4e3: ;
    COW_AT(102ef4e3)
    wr32(sp0 - 0x18u, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 1, arg1);
    rt_fatal(g, COW_IMG(0x102ef4e4u), "no way on");
L_102ef4de: ;
    COW_AT(102ef4de)
    wr32(sp0 - 0x14u, COW_IMG(0x10347fdcu));
    goto L_102ef4e3;
L_102ef4eb: ;
    COW_AT(102ef4eb)
    loc_4 = in_ebp;
    loc_8 = in_ebx;
    loc_c = in_esi;
    loc_10 = in_edi;
L_102ef4f1: ;
    COW_AT(102ef4f1)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    wr32(sp0 - 0x1cu, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102f1f8fu), g->eax, g->ecx, edx, 1, 3, arg1, sp0 + 4u, 4u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x1cu;
    t13 = cow_cdecl(g, COW_IMG(0x102f76dau), 1, sp0 + 4u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x24u, arg1);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x20u;
    t16 = cow_cdecl(g, COW_IMG(0x102f20e1u), 1, arg1);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, arg1 + 0x10cu);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, t18, 1, 5, arg1, arg1 + 0x10cu, 4u, arg1, sp0 + 4u);
    t19 = g->edx;
    if (rd32(arg1 + 0x10cu) != rd32(COW_IMG(0x10347ed4u)))
    {
        edx = t19;
        edi = t13;
        goto L_102ef531;
    }
    ecx = rd32(arg1 + 0x10cu);
    edx = t19;
    edi = t13;
    COW_AT(102ef525)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102f806cu), g->eax, ecx, edx, 1, 3, arg1, arg2, edi);
    t20 = g->ecx;
    t21 = g->edx;
    ecx = t20;
    edx = t21;
L_102ef5a1: ;
    COW_AT(102ef5a1)
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    goto L_102ef4f1;
L_102ef531: ;
    COW_AT(102ef531)
    if (rd32(arg1 + 0x10cu) != rd32(COW_IMG(0x10347eecu))) goto L_102ef548;
    ecx = rd32(arg1 + 0x10cu);
    COW_AT(102ef53c)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102f8262u), g->eax, ecx, edx, 1, 3, arg1, arg2, edi);
    t22 = g->ecx;
    t23 = g->edx;
    ecx = t22;
    edx = t23;
    goto L_102ef5a1;
L_102ef548: ;
    COW_AT(102ef548)
    if (rd32(arg1 + 0x10cu) != rd32(COW_IMG(0x10347ee4u))) goto L_102ef55f;
    ecx = rd32(arg1 + 0x10cu);
    COW_AT(102ef553)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102f838cu), g->eax, ecx, edx, 1, 3, arg1, arg2, edi);
    t24 = g->ecx;
    t25 = g->edx;
    ecx = t24;
    edx = t25;
    goto L_102ef5a1;
L_102ef55f: ;
    COW_AT(102ef55f)
    if (rd32(arg1 + 0x10cu) == rd32(COW_IMG(0x10347edcu)))
    {
        ecx = rd32(arg1 + 0x10cu);
        goto L_102ef5b0;
    }
    ecx = rd32(arg1 + 0x10cu);
    COW_AT(102ef56a)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    if (ecx != rd32(COW_IMG(0x10347ef4u)))
    {
        loc_14 = edi;
    COW_AT(102ef57f)
        if (rd32(arg1 + 0x10cu) != rd32(COW_IMG(0x10347efcu)))
        {
    COW_AT(102ef591)
            if (rd32(arg1 + 0x10cu) != rd32(COW_IMG(0x10347f04u)))
            {
                ecx = rd32(arg1 + 0x10cu);
    COW_AT(102ef5a9)
                g->ebx = arg1 + 0x10cu;
                g->ecx = ecx;
                g->esp = sp0 - 0x10u;
                cow_call_regs(g, COW_IMG(0x102f8787u), COW_IMG(0x10347f04u), g->ecx, edx, 1, 3, arg1, arg2, loc_14);
                t32 = g->ecx;
                t33 = g->edx;
                ecx = t32;
                edx = t33;
            }
            else
            {
                ecx = rd32(arg1 + 0x10cu);
    COW_AT(102ef59c)
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x102f85d0u), g->eax, ecx, edx, 1, 4, arg1, arg2, loc_14, rd32(sp0 - 0x10u));
                t30 = g->ecx;
                t31 = g->edx;
                ecx = t30;
                edx = t31;
            }
        }
        else
        {
            ecx = rd32(arg1 + 0x10cu);
    COW_AT(102ef58a)
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x102f84e1u), g->eax, ecx, edx, 1, 3, arg1, arg2, loc_14);
            t28 = g->ecx;
            t29 = g->edx;
            ecx = t28;
            edx = t29;
        }
    }
    else
    {
        loc_14 = edi;
    COW_AT(102ef578)
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x102f83d6u), g->eax, ecx, edx, 1, 4, arg1, arg2, loc_14, rd32(sp0 - 0x10u));
        t26 = g->ecx;
        t27 = g->edx;
        ecx = t26;
        edx = t27;
    }
    goto L_102ef5a1;
L_102ef5b0: ;
    COW_AT(102ef5b0)
    if (rd32(arg1 + 0x58u) & 1u)
    {
        eax = rd32(arg1 + 0x58u);
        goto L_102ef5be;
    }
    eax = rd32(arg1 + 0x58u);
    COW_AT(102ef5b7)
    wr32(sp0 - 0x14u, COW_IMG(0x10347fc0u));
L_102ef5d0: ;
    COW_AT(102ef5d0)
    wr32(sp0 - 0x18u, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 1, arg1);
    rt_fatal(g, COW_IMG(0x102ef5d1u), "no way on");
L_102ef5be: ;
    COW_AT(102ef5be)
    if (rd8(arg1 + 0x116u) != 3u) goto L_102ef5d8;
    COW_AT(102ef5c7)
    if ((eax & 2u) != 0u) goto L_102ef5d8;
    COW_AT(102ef5cb)
    wr32(sp0 - 0x14u, COW_IMG(0x10347fa4u));
    goto L_102ef5d0;
L_102ef5d8: ;
    COW_AT(102ef5d8)
    wr32(arg1 + 0x58u, rd32(arg1 + 0x58u) | 4u);
    wr32(arg1 + 0xfcu, edi);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ef474(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ef487u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef4bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef4bfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef4d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef4deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef4e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef4ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef4f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef525u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->eax = COW_IMG(0x10347ed4u);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef531u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef53cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->eax = COW_IMG(0x10347eecu);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef548u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef553u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->eax = COW_IMG(0x10347ee4u);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef55fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef56au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef578u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->eax = COW_IMG(0x10347ef4u);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102ef57fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102ef58au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->eax = COW_IMG(0x10347efcu);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102ef591u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102ef59cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->eax = COW_IMG(0x10347f04u);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102ef5a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef5a9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->eax = COW_IMG(0x10347f04u);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102ef5b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef5b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef5beu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef5c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef5cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef5d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef5d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ef474(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ef474(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
