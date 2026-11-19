/* f_0x10269710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10269710(Guest* g)
{
    uint32_t al_m1c;
    uint32_t al_m20;
    uint32_t al_m2c;
    uint32_t al_m30;
    uint32_t al_m34;
    uint32_t al_m38;
    uint32_t al_m3c;
    uint32_t al_m40;
    uint32_t al_mc;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t of;
    uint32_t sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10269739u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; al_m40 = rd32(sp1 - 0x40u); al_m3c = rd32(sp1 - 0x3cu); al_m38 = rd32(sp1 - 0x38u); al_mc = rd32(sp1 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_10269739;
    case 0x10269751u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10269751;
    case 0x1026975fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1026975f;
    case 0x10269766u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10269766;
    case 0x1026976du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1026976d;
    case 0x10269799u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; al_m34 = rd32(sp1 - 0x34u); goto E_10269799;
    case 0x102697a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; al_m34 = rd32(sp1 - 0x34u); goto E_102697a1;
    case 0x102697a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; al_m34 = rd32(sp1 - 0x34u); goto E_102697a3;
    case 0x102697a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; al_m34 = rd32(sp1 - 0x34u); goto E_102697a7;
    case 0x102697abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; al_m34 = rd32(sp1 - 0x34u); goto E_102697ab;
    case 0x102697afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; al_m34 = rd32(sp1 - 0x34u); goto E_102697af;
    case 0x102697cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; al_m34 = rd32(sp1 - 0x34u); al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); goto E_102697cf;
    case 0x102697d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; al_m34 = rd32(sp1 - 0x34u); al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); goto E_102697d3;
    case 0x102697dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; al_m34 = rd32(sp1 - 0x34u); al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); goto E_102697da;
    case 0x102697f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; al_m34 = rd32(sp1 - 0x34u); al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); goto E_102697f0;
    case 0x10269811u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10269811;
    case 0x10269813u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10269813;
    case 0x1026981fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; al_m34 = rd32(sp1 - 0x34u); al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m20 = rd32(sp1 - 0x20u); al_m1c = rd32(sp1 - 0x1cu); goto E_1026981f;
    case 0x10269848u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10269848;
    case 0x10269860u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10269860;
    default: break;
    }
#endif

    COW_AT(10269710)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 4u, 0xffffffffu);
    wr32(sp1 - 8u, COW_IMG(0x10328098u));
    wr32(sp1 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp1 - 0xcu);
    wr32(sp1 - 0x3cu, in_esi);
    wr32(sp1 - 0x40u, in_edi);
    wr32(sp1 - 0x38u, self + 8u);
    eax = self + 8u;
    edx = in_edx;
    loc_4 = in_ebp;
    al_mc = t1;
    al_m3c = in_esi;
    al_m40 = in_edi;
    al_m38 = self + 8u;
L_10269739: ;
    COW_AT(10269739)
    wr32(sp1 - 0x44u, al_m38);
    g->ecx = al_m38;
    g->edx = edx;
    g->esp = sp1 - 0x40u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, al_m38);   /* kernel32.dll!EnterCriticalSection */
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp1 - 4u, 0u);
    if ((int32_t)rd32(self + 0x28u) <= 0)
    {
        ecx = t2;
        edx = t3;
        edi = 0u;
    }
    else
    {
        edx = t3;
    COW_AT(10269751)
        t4 = rd32(self + 0x20u);
        wr32(sp1 - 0x44u, t4);
        g->eax = t4;
        g->ecx = self + 0x20u;
        g->edx = edx;
        g->esp = sp1 - 0x40u;
        t5 = cow_stdcall(g, COW_IMG(0x10269bb0u), 1, t4);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
        edi = t5;
    }
    COW_AT(1026975f)
    if (rd32(self + 0x64u) != 0u)
    {
    COW_AT(10269766)
        if ((int32_t)rd32(self + 0x40u) > 0)
        {
    COW_AT(1026976d)
            t8 = rd32(self + 0x38u);
            wr32(sp1 - 0x44u, t8);
            g->eax = t8;
            g->esp = sp1 - 0x40u;
            t9 = cow_stdcall(g, COW_IMG(0x10269bb0u), 1, t8);
            wr32(sp1 - 0x34u, t9);
            t10 = rd32(self + 0x6cu);
            wr32(sp1 - 0x14u, t10);
            if (edi == 0u)
            {
                ecx = rd32(self + 0x68u) + rd32(t9 + 0x18u);
                edx = t10 + rd32(t9 + 0x1cu) + (rd32(self + 0x68u) + rd32(t9 + 0x18u) < rd32(t9 + 0x18u));
                al_m34 = t9;
                goto L_102697a7;
            }
            ecx = rd32(self + 0x68u) + rd32(t9 + 0x18u);
            edx = t10 + rd32(t9 + 0x1cu) + (rd32(self + 0x68u) + rd32(t9 + 0x18u) < rd32(t9 + 0x18u));
            al_m34 = t9;
    COW_AT(10269799)
            if ((int32_t)edx > (int32_t)rd32(edi + 0x1cu)) goto L_102697ab;
            eax = rd32(edi + 0x18u);
            sf = (int32_t)(edx - rd32(edi + 0x1cu)) < 0;
            of = ((edx ^ rd32(edi + 0x1cu)) & (edx ^ edx - rd32(edi + 0x1cu))) >> 0x1fu;
    COW_AT(102697a1)
            if (sf != of) goto L_102697a7;
    COW_AT(102697a3)
            if (ecx >= eax) goto L_102697ab;
L_102697a7: ;
    COW_AT(102697a7)
            edi = al_m34;
        }
    }
L_102697ab: ;
    COW_AT(102697ab)
    if (edi == 0u) goto L_1026981f;
    COW_AT(102697af)
    t11 = rd32(edi + 0x1cu);
    wr32(sp1 - 0x1cu, t11);
    wr32(sp1 - 0x2cu, t11);
    t12 = rd32(edi + 0x18u);
    wr32(sp1 - 0x20u, t12);
    wr32(sp1 - 0x30u, t12);
    if (rd32(self + 0x60u) == 0u)
    {
        ecx = rd32(edi + 0x30u);
        edx = rd32(self + 0x60u);
        goto L_1026981f;
    }
    ecx = rd32(edi + 0x30u);
    edx = rd32(self + 0x60u);
    al_m1c = t11;
    al_m2c = t11;
    al_m20 = t12;
    al_m30 = t12;
    COW_AT(102697cf)
    if (ecx == 0u) goto L_102697f0;
    COW_AT(102697d3)
    if (rd32(self + 0x64u) == 0u) goto L_1026981f;
    COW_AT(102697da)
    t13 = al_m20 + rd32(self + 0x68u);
    wr32(sp1 - 0x30u, t13);
    t14 = al_m1c + rd32(self + 0x6cu) + (al_m20 + rd32(self + 0x68u) < rd32(self + 0x68u));
    wr32(sp1 - 0x2cu, t14);
    al_m2c = t14;
    al_m30 = t13;
L_102697f0: ;
    COW_AT(102697f0)
    wr32(sp1 - 0x28u, 0u);
    wr32(sp1 - 0x24u, 0u);
    wr32(sp1 - 0x44u, sp1 - 0x28u);
    wr32(sp1 - 0x48u, edx);
    g->edx = edx;
    g->esp = sp1 - 0x40u;
    cow_thiscall(g, rd32(rd32(edx) + 0xcu), rd32(edx), 2, edx, sp1 - 0x28u);
    t15 = g->edx;
    if ((int32_t)rd32(sp1 - 0x2cu) < 0)
    {
        ecx = rd32(sp1 - 0x2cu);
        goto L_10269860;
    }
    ecx = rd32(sp1 - 0x2cu);
    edx = t15;
    zf = rd32(sp1 - 0x2cu) == 0u;
    sf = (int32_t)rd32(sp1 - 0x2cu) < 0;
    COW_AT(10269811)
    if (!zf && !sf) goto L_1026981f;
    COW_AT(10269813)
    if (rd32(sp1 - 0x30u) == 0u) goto L_10269860;
    edx = rd32(sp1 - 0x30u);
L_1026981f: ;
    COW_AT(1026981f)
    wr32(sp1 - 4u, 0xffffffffu);
    t22 = rd32(sp1 - 0x38u);
    wr32(sp1 - 0x44u, t22);
    g->edx = edx;
    g->esp = sp1 - 0x40u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, t22);   /* kernel32.dll!LeaveCriticalSection */
    t23 = g->edx;
    wr32(sp1 - 0x44u, arg2);
    t24 = rd32(self + 0x50u);
    wr32(sp1 - 0x48u, t24);
    g->eax = t24;
    g->edx = t23;
    t25 = cow_stdcall(g, rd32(COW_IMG(0x103291c8u)), 2, t24, arg2);   /* kernel32.dll!WaitForSingleObject */
    t26 = g->edx;
    if (t25 == 0u)
    {
        eax = t25;
        edx = t26;
        loc_4 = rd32(sp0 - 4u);
        al_mc = rd32(sp1 - 0xcu);
        al_m3c = rd32(sp1 - 0x3cu);
        al_m40 = rd32(sp1 - 0x40u);
        al_m38 = rd32(sp1 - 0x38u);
        goto L_10269739;
    }
    edx = t26;
    COW_AT(10269848)
    t27 = rd32(sp1 - 0xcu);
    wr32(g->fs_base, t27);
    g->esi = rd32(sp1 - 0x3cu);
    g->edi = rd32(sp1 - 0x40u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return 0x80004004u;
L_10269860: ;
    COW_AT(10269860)
    wr32(sp1 - 0x44u, edi + 0xcu);
    g->edx = rd32(edi + 0xcu);
    t16 = rd32(edi + 0xcu);
    g->esp = sp1 - 0x40u;
    cow_thiscall(g, rd32(t16 + 4u), ecx, 1, edi + 0xcu);
    t17 = g->edx;
    t18 = rd32(sp1 - 0x38u);
    wr32(sp1 - 0x44u, t18);
    wr32(arg1, edi);
    g->edx = t17;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, t18);   /* kernel32.dll!LeaveCriticalSection */
    t19 = g->edx;
    t20 = rd32(sp1 - 0xcu);
    t21 = rd32(sp1 - 0x40u);
    wr32(g->fs_base, t20);
    g->esi = rd32(sp1 - 0x3cu);
    g->edi = t21;
    g->ebp = rd32(sp0 - 4u);
    g->edx = t19;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10269710(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x10269739u:
    {
        uint32_t al_m38;
        uint32_t al_m3c;
        uint32_t al_m40;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m40 = rd32(sp1 - 0x40u);
        al_m3c = rd32(sp1 - 0x3cu);
        al_m38 = rd32(sp1 - 0x38u);
        al_mc = rd32(sp1 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10269751u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026975fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10269766u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026976du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10269799u:
    {
        uint32_t al_m34;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m34 = rd32(sp1 - 0x34u);
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102697a1u:
    {
        uint32_t al_m34;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m34 = rd32(sp1 - 0x34u);
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102697a3u:
    {
        uint32_t al_m34;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m34 = rd32(sp1 - 0x34u);
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102697a7u:
    {
        uint32_t al_m34;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m34 = rd32(sp1 - 0x34u);
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102697abu:
    {
        uint32_t al_m34;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m34 = rd32(sp1 - 0x34u);
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102697afu:
    {
        uint32_t al_m34;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m34 = rd32(sp1 - 0x34u);
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102697cfu:
    {
        uint32_t al_m1c;
        uint32_t al_m20;
        uint32_t al_m2c;
        uint32_t al_m30;
        uint32_t al_m34;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m34 = rd32(sp1 - 0x34u);
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102697d3u:
    {
        uint32_t al_m1c;
        uint32_t al_m20;
        uint32_t al_m2c;
        uint32_t al_m30;
        uint32_t al_m34;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m34 = rd32(sp1 - 0x34u);
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102697dau:
    {
        uint32_t al_m1c;
        uint32_t al_m20;
        uint32_t al_m2c;
        uint32_t al_m30;
        uint32_t al_m34;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m34 = rd32(sp1 - 0x34u);
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102697f0u:
    {
        uint32_t al_m1c;
        uint32_t al_m20;
        uint32_t al_m2c;
        uint32_t al_m30;
        uint32_t al_m34;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m34 = rd32(sp1 - 0x34u);
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10269811u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        g->of = (uint8_t)(0u);
        wr32(sp1 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10269813u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1026981fu:
    {
        uint32_t al_m1c;
        uint32_t al_m20;
        uint32_t al_m2c;
        uint32_t al_m30;
        uint32_t al_m34;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        al_m34 = rd32(sp1 - 0x34u);
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m20 = rd32(sp1 - 0x20u);
        al_m1c = rd32(sp1 - 0x1cu);
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10269848u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10269860u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp1 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10269710(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10269710(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
