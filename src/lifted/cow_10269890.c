/* f_0x10269890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10269890(Guest* g)
{
    uint32_t al_m14;
    uint32_t al_m18;
    uint32_t al_m24;
    uint32_t al_m28;
    uint32_t al_m2c;
    uint32_t al_m30;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102698d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; sf = g->sf; of = g->of; in_edi = rd32(sp1 - 0x30u); in_esi = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x30u); g->esi = rd32(sp1 - 0x2cu); goto E_102698d3;
    case 0x102698e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; sf = g->sf; of = g->of; in_edi = rd32(sp1 - 0x30u); in_esi = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x30u); g->esi = rd32(sp1 - 0x2cu); goto E_102698e3;
    case 0x102698eau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; of = g->of; in_edi = rd32(sp1 - 0x30u); in_esi = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x30u); g->esi = rd32(sp1 - 0x2cu); goto E_102698ea;
    case 0x102698fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; of = g->of; goto E_102698fc;
    case 0x10269911u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; of = g->of; al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); goto E_10269911;
    case 0x10269932u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; goto E_10269932;
    case 0x10269934u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; of = g->of; goto E_10269934;
    case 0x10269940u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; of = g->of; goto E_10269940;
    case 0x1026994cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; of = g->of; al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); goto E_1026994c;
    case 0x10269950u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; of = g->of; al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); al_m24 = rd32(sp1 - 0x24u); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_10269950;
    case 0x10269957u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; of = g->of; al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); al_m24 = rd32(sp1 - 0x24u); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_10269957;
    case 0x1026995fu: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; of = g->of; al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); al_m24 = rd32(sp1 - 0x24u); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_1026995f;
    case 0x10269961u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; of = g->of; al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); al_m24 = rd32(sp1 - 0x24u); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_10269961;
    case 0x10269968u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; of = g->of; al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); al_m24 = rd32(sp1 - 0x24u); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_10269968;
    case 0x1026999bu: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; of = g->of; al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); al_m24 = rd32(sp1 - 0x24u); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_1026999b;
    case 0x102699a2u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; of = g->of; al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); al_m24 = rd32(sp1 - 0x24u); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_102699a2;
    case 0x102699a6u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; sf = g->sf; of = g->of; al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); al_m24 = rd32(sp1 - 0x24u); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_102699a6;
    case 0x102699bau: eax = g->eax; edx = g->edx; esi = g->esi; sf = g->sf; of = g->of; al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); al_m24 = rd32(sp1 - 0x24u); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_102699ba;
    case 0x102699bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; of = g->of; al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); al_m24 = rd32(sp1 - 0x24u); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_102699bc;
    case 0x102699c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; of = g->of; al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); al_m24 = rd32(sp1 - 0x24u); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_102699c3;
    case 0x102699e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; sf = g->sf; of = g->of; al_m30 = rd32(sp1 - 0x30u); al_m2c = rd32(sp1 - 0x2cu); al_m28 = rd32(sp1 - 0x28u); al_m24 = rd32(sp1 - 0x24u); al_m18 = rd32(sp1 - 0x18u); al_m14 = rd32(sp1 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_102699e8;
    default: break;
    }
#endif

    COW_AT(10269890)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 4u, 0xffffffffu);
    wr32(sp1 - 8u, COW_IMG(0x103280b8u));
    wr32(sp1 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp1 - 0xcu);
    wr32(sp1 - 0x2cu, in_esi);
    wr32(sp1 - 0x30u, in_edi);
    wr32(sp1 - 0x34u, self + 8u);
    wr32(sp1 - 0x24u, self + 8u);
    g->edx = in_edx;
    g->esp = sp1 - 0x30u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 8u);   /* kernel32.dll!EnterCriticalSection */
    t2 = g->edx;
    wr32(sp1 - 4u, 0u);
    wr32(sp1 - 0x28u, 0u);
    if ((int32_t)rd32(self + 0x40u) <= 0)
    {
        eax = 0u;
        edx = t2;
        al_m28 = 0u;
    }
    else
    {
        edx = t2;
    COW_AT(102698d3)
        t3 = rd32(self + 0x38u);
        wr32(sp1 - 0x34u, t3);
        g->eax = t3;
        g->edx = edx;
        g->esp = sp1 - 0x30u;
        t4 = cow_stdcall(g, COW_IMG(0x10269bb0u), 1, t3);
        t5 = g->edx;
        wr32(sp1 - 0x28u, t4);
        eax = t4;
        edx = t5;
        al_m28 = t4;
    }
    COW_AT(102698e3)
    if ((int32_t)rd32(self + 0x28u) <= 0)
    {
        esi = 0u;
        loc_4 = in_ebp;
        al_m2c = in_esi;
        al_m30 = in_edi;
        al_m24 = self + 8u;
        goto L_10269950;
    }
    COW_AT(102698ea)
    t6 = rd32(self + 0x20u);
    wr32(sp1 - 0x34u, t6);
    g->eax = t6;
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t7 = cow_stdcall(g, COW_IMG(0x10269bb0u), 1, t6);
    t8 = g->edx;
    if (t7 == 0u)
    {
        edx = t8;
        esi = t7;
        goto L_1026994c;
    }
    edx = t8;
    esi = t7;
    COW_AT(102698fc)
    t9 = rd32(esi + 0x18u);
    wr32(sp1 - 0x18u, t9);
    t10 = rd32(esi + 0x1cu);
    wr32(sp1 - 0x14u, t10);
    if (rd32(self + 0x60u) == 0u) goto L_1026994c;
    eax = rd32(self + 0x60u);
    al_m18 = t9;
    al_m14 = t10;
    COW_AT(10269911)
    wr32(sp1 - 0x20u, 0u);
    wr32(sp1 - 0x1cu, 0u);
    wr32(sp1 - 0x34u, sp1 - 0x20u);
    wr32(sp1 - 0x38u, eax);
    g->esp = sp1 - 0x30u;
    cow_thiscall(g, rd32(rd32(eax) + 0xcu), sp1 - 0x20u, 2, eax, sp1 - 0x20u);
    if ((int32_t)rd32(sp1 - 0x14u) > 0)
    {
        edx = rd32(sp1 - 0x14u);
        goto L_1026994c;
    }
    edx = rd32(sp1 - 0x14u);
    sf = (int32_t)rd32(sp1 - 0x14u) < 0;
    COW_AT(10269932)
    if (sf) goto L_10269940;
    COW_AT(10269934)
    if (rd32(sp1 - 0x18u) != 0u) goto L_1026994c;
L_10269940: ;
    COW_AT(10269940)
    wr32(sp1 - 0x34u, esi + 0xcu);
    t11 = rd32(esi + 0xcu);
    g->esp = sp1 - 0x30u;
    cow_thiscall(g, rd32(t11 + 4u), t11, 1, esi + 0xcu);
    t12 = g->ecx;
    ecx = t12;
    loc_4 = rd32(sp0 - 4u);
    al_m2c = rd32(sp1 - 0x2cu);
    al_m30 = rd32(sp1 - 0x30u);
    al_m24 = rd32(sp1 - 0x24u);
L_102699c3: ;
    COW_AT(102699c3)
    wr32(sp1 - 0x34u, al_m24);
    wr32(arg3, esi);
    g->edx = arg3;
    g->esp = sp1 - 0x30u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, al_m24);   /* kernel32.dll!LeaveCriticalSection */
    t17 = g->edx;
    t18 = rd32(sp1 - 0xcu);
    wr32(g->fs_base, t18);
    g->esi = rd32(sp1 - 0x2cu);
    g->edi = rd32(sp1 - 0x30u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = t17;
    return 0u;
L_1026994c: ;
    COW_AT(1026994c)
    eax = rd32(sp1 - 0x28u);
    loc_4 = rd32(sp0 - 4u);
    al_m2c = rd32(sp1 - 0x2cu);
    al_m30 = rd32(sp1 - 0x30u);
    al_m24 = rd32(sp1 - 0x24u);
    al_m28 = rd32(sp1 - 0x28u);
L_10269950: ;
    COW_AT(10269950)
    if (eax == 0u) goto L_1026999b;
    COW_AT(10269957)
    if ((int32_t)rd32(eax + 0x1cu) > (int32_t)arg2)
    {
        edx = rd32(eax + 0x1cu);
        goto L_1026999b;
    }
    edx = rd32(eax + 0x1cu);
    sf = (int32_t)(rd32(eax + 0x1cu) - arg2) < 0;
    of = ((rd32(eax + 0x1cu) ^ arg2) & (rd32(eax + 0x1cu) ^ rd32(eax + 0x1cu) - arg2)) >> 0x1fu;
    COW_AT(1026995f)
    if (sf != of) goto L_10269968;
    COW_AT(10269961)
    if (rd32(eax + 0x18u) > arg1) goto L_1026999b;
L_10269968: ;
    COW_AT(10269968)
    wr32(sp1 - 0x34u, esi + 0xcu);
    g->esp = sp1 - 0x30u;
    cow_thiscall(g, rd32(rd32(esi + 0xcu) + 4u), rd32(esi + 0xcu), 1, esi + 0xcu);
    t13 = rd32(sp1 - 0x24u);
    wr32(sp1 - 0x34u, t13);
    t14 = rd32(sp1 - 0x28u);
    wr32(arg3, t14);
    g->edx = arg3;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, t13);   /* kernel32.dll!LeaveCriticalSection */
    t15 = g->edx;
    t16 = rd32(sp1 - 0xcu);
    wr32(g->fs_base, t16);
    g->esi = rd32(sp1 - 0x2cu);
    g->edi = rd32(sp1 - 0x30u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = t15;
    return 0u;
L_1026999b: ;
    COW_AT(1026999b)
    if (rd32(self + 0x64u) == 0u)
    {
        eax = rd32(self + 0x64u);
        goto L_102699e8;
    }
    eax = rd32(self + 0x64u);
    COW_AT(102699a2)
    if (esi == 0u) goto L_102699e8;
    COW_AT(102699a6)
    if ((int32_t)rd32(esi + 0x1cu) > (int32_t)(arg2 + rd32(self + 0x6cu) + (arg1 + rd32(self + 0x68u) < rd32(self + 0x68u))))
    {
        eax = arg1 + rd32(self + 0x68u);
        edx = rd32(esi + 0x1cu);
        goto L_102699e8;
    }
    eax = arg1 + rd32(self + 0x68u);
    edx = rd32(esi + 0x1cu);
    sf = (int32_t)(rd32(esi + 0x1cu) - (arg2 + rd32(self + 0x6cu) + (arg1 + rd32(self + 0x68u) < rd32(self + 0x68u)))) < 0;
    of = ((rd32(esi + 0x1cu) ^ arg2 + rd32(self + 0x6cu) + (arg1 + rd32(self + 0x68u) < rd32(self + 0x68u))) & (rd32(esi + 0x1cu) ^ rd32(esi + 0x1cu) - (arg2 + rd32(self + 0x6cu) + (arg1 + rd32(self + 0x68u) < rd32(self + 0x68u))))) >> 0x1fu;
    COW_AT(102699ba)
    if (sf != of)
    {
        ecx = arg1;
        goto L_102699c3;
    }
    COW_AT(102699bc)
    if (rd32(esi + 0x18u) > eax) goto L_102699e8;
    ecx = rd32(esi + 0x18u);
    goto L_102699c3;
L_102699e8: ;
    COW_AT(102699e8)
    wr32(sp1 - 0x34u, al_m24);
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, al_m24);   /* kernel32.dll!LeaveCriticalSection */
    t19 = g->edx;
    t20 = rd32(sp1 - 0xcu);
    t21 = rd32(sp1 - 0x30u);
    wr32(g->fs_base, t20);
    g->esi = rd32(sp1 - 0x2cu);
    g->edi = t21;
    g->ebp = rd32(sp0 - 4u);
    g->edx = t19;
    return 0x80040216u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10269890(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x102698d3u:
    {
        uint32_t al_m28;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp1 - 0x30u);
        in_esi = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp1 - 0x24u, self + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102698e3u:
    {
        uint32_t al_m28;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp1 - 0x30u);
        in_esi = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp1 - 0x24u, self + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102698eau:
    {
        uint32_t al_m28;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp1 - 0x30u);
        in_esi = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x24u, self + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102698fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10269911u:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10269932u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->of = (uint8_t)(0u);
        wr32(sp1 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10269934u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10269940u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        of = g->of;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026994cu:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10269950u:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m24;
        uint32_t al_m28;
        uint32_t al_m2c;
        uint32_t al_m30;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        al_m24 = rd32(sp1 - 0x24u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10269957u:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m24;
        uint32_t al_m28;
        uint32_t al_m2c;
        uint32_t al_m30;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        al_m24 = rd32(sp1 - 0x24u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026995fu:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m24;
        uint32_t al_m28;
        uint32_t al_m2c;
        uint32_t al_m30;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        al_m24 = rd32(sp1 - 0x24u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10269961u:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m24;
        uint32_t al_m28;
        uint32_t al_m2c;
        uint32_t al_m30;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        al_m24 = rd32(sp1 - 0x24u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10269968u:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m24;
        uint32_t al_m28;
        uint32_t al_m2c;
        uint32_t al_m30;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        of = g->of;
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        al_m24 = rd32(sp1 - 0x24u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026999bu:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m24;
        uint32_t al_m28;
        uint32_t al_m2c;
        uint32_t al_m30;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        al_m24 = rd32(sp1 - 0x24u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102699a2u:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m24;
        uint32_t al_m28;
        uint32_t al_m2c;
        uint32_t al_m30;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        al_m24 = rd32(sp1 - 0x24u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102699a6u:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m24;
        uint32_t al_m28;
        uint32_t al_m2c;
        uint32_t al_m30;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        sf = g->sf;
        of = g->of;
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        al_m24 = rd32(sp1 - 0x24u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102699bau:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m24;
        uint32_t al_m28;
        uint32_t al_m2c;
        uint32_t al_m30;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        of = g->of;
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        al_m24 = rd32(sp1 - 0x24u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102699bcu:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m24;
        uint32_t al_m28;
        uint32_t al_m2c;
        uint32_t al_m30;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        of = g->of;
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        al_m24 = rd32(sp1 - 0x24u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102699c3u:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m24;
        uint32_t al_m28;
        uint32_t al_m2c;
        uint32_t al_m30;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        of = g->of;
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        al_m24 = rd32(sp1 - 0x24u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102699e8u:
    {
        uint32_t al_m14;
        uint32_t al_m18;
        uint32_t al_m24;
        uint32_t al_m28;
        uint32_t al_m2c;
        uint32_t al_m30;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        sf = g->sf;
        of = g->of;
        al_m30 = rd32(sp1 - 0x30u);
        al_m2c = rd32(sp1 - 0x2cu);
        al_m28 = rd32(sp1 - 0x28u);
        al_m24 = rd32(sp1 - 0x24u);
        al_m18 = rd32(sp1 - 0x18u);
        al_m14 = rd32(sp1 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10269890(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10269890(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
