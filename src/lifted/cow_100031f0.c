/* f_0x100031f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100031f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000320du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1000320d;
    case 0x10003220u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10003220;
    case 0x10003237u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003237;
    case 0x10003247u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10003247;
    case 0x10003264u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003264;
    case 0x10003270u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003270;
    case 0x10003278u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003278;
    case 0x10003280u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003280;
    case 0x10003289u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003289;
    case 0x1000328eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1000328e;
    case 0x10003292u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003292;
    case 0x1000329cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1000329c;
    case 0x100032a2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100032a2;
    case 0x100032a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100032a5;
    case 0x100032a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100032a9;
    case 0x100032aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100032ae;
    case 0x100032b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100032b6;
    case 0x100032bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100032ba;
    case 0x100032c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100032c5;
    case 0x100032dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100032dc;
    case 0x100032e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100032e8;
    case 0x100032fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_100032fc;
    case 0x1000331fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_1000331f;
    case 0x10003342u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10003342;
    case 0x1000334du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_1000334d;
    case 0x10003370u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_10003370;
    case 0x10003393u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_10003393;
    case 0x1000339au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1000339a;
    case 0x100033a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100033a7;
    default: break;
    }
#endif

    COW_AT(100031f0)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, 0xdcu);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_stdcall(g, COW_IMG(0x102d2620u), 1, 0xdcu);
    t2 = g->edx;
    wr32(self + 4u, t1);
    if (t1 == 0u)
    {
        edx = t2;
        ebp = in_ebp;
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_10003393;
    }
    eax = t1;
    edx = t2;
    COW_AT(1000320d)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, eax);
    g->eax = eax;
    g->edx = edx;
    t3 = rd32(eax);
    g->esp = sp0 - 0x1cu;
    t4 = cow_thiscall(g, rd32(t3 + 0x18u), t3, 2, eax, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(self + 0x40u, t4);
    if (t4 == 0u)
    {
        edx = t6;
        ebp = in_ebp;
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_10003393;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10003220)
    wr32(sp0 - 0x20u, eax << 4u);
    g->eax = eax << 4u;
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax << 4u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t8 = g->edx;
    wr32(self + 0x44u, t7);
    if (t7 == 0u)
    {
        edx = t8;
        ebp = in_ebp;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_10003393;
    }
    COW_AT(10003237)
    wr32(sp0 - 0x20u, in_ebp);
    if (rd32(self + 0x40u) == 0u)
    {
        edi = 0u;
        loc_20 = in_ebp;
        goto L_100032e8;
    }
    ebp = 0u;
    edi = 0u;
    loc_20 = in_ebp;
L_10003247: ;
    COW_AT(10003247)
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x28u, ebp);
    wr32(sp0 - 0x2cu, 0u);
    t9 = rd32(self + 4u);
    wr32(sp0 - 0x30u, t9);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 0x1cu), sp0 - 0x10u, 4, t9, 0u, ebp, sp0 - 0x10u);
    if (rd32(sp0 - 0x10u) >= 0x280u)
    {
        edx = rd32(sp0 - 0x10u);
    COW_AT(10003264)
        if (rd32(sp0 - 0xcu) >= 0x1e0u)
        {
            ebx = rd32(sp0 - 0xcu);
    COW_AT(10003270)
            if (edx <= 0x800u)
            {
    COW_AT(10003278)
                if (ebx <= 0x800u)
                {
    COW_AT(10003280)
                    if (rd32(sp0 - 4u) == 0x16u) goto L_1000328e;
                    eax = rd32(sp0 - 4u);
    COW_AT(10003289)
                    if (eax != 0x15u) goto L_100032dc;
L_1000328e: ;
    COW_AT(1000328e)
                    if (edi != 0u) goto L_1000329c;
    COW_AT(10003292)
                    eax = rd32(self + 0x44u);
                    edi = 1u;
L_100032c5: ;
    COW_AT(100032c5)
                    wr32(eax, edx);
                    t10 = rd32(sp0 - 0xcu);
                    wr32(eax + 4u, t10);
                    t11 = rd32(sp0 - 8u);
                    wr32(eax + 8u, t11);
                    t12 = rd32(sp0 - 4u);
                    wr32(eax + 0xcu, t12);
                }
            }
        }
    }
L_100032dc: ;
    COW_AT(100032dc)
    if (ebp + 1u < rd32(self + 0x40u))
    {
        ebp = ebp + 1u;
        loc_20 = rd32(sp0 - 0x20u);
        goto L_10003247;
    }
    loc_20 = rd32(sp0 - 0x20u);
L_100032e8: ;
    COW_AT(100032e8)
    wr32(self + 0x40u, edi);
    if (rd32(COW_IMG(0x10456a80u)) == 1u)
    {
        ebp = loc_20;
        goto L_1000334d;
    }
    ebp = loc_20;
    COW_AT(100032fc)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, arg6);
    wr32(sp0 - 0x28u, arg5);
    wr32(sp0 - 0x2cu, arg4);
    wr32(sp0 - 0x30u, arg3);
    wr32(sp0 - 0x34u, arg2);
    wr32(sp0 - 0x38u, arg1);
    g->eax = arg3;
    g->esp = sp0 - 0x1cu;
    t13 = cow_thiscall(g, COW_IMG(0x100033c0u), self, 7, arg1, arg2, arg3, arg4, arg5, arg6, 0u);
    if ((uint8_t)t13 != 0u)
    {
        eax = t13;
        goto L_10003342;
    }
    COW_AT(1000331f)
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, arg6);
    wr32(sp0 - 0x28u, arg5);
    wr32(sp0 - 0x2cu, arg4);
    wr32(sp0 - 0x30u, arg3);
    wr32(sp0 - 0x34u, arg2);
    wr32(sp0 - 0x38u, arg1);
    g->eax = arg1;
    g->edx = arg2;
    g->esp = sp0 - 0x1cu;
    t14 = cow_thiscall(g, COW_IMG(0x100033c0u), self, 7, arg1, arg2, arg3, arg4, arg5, arg6, 1u);
    t15 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        edx = t15;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_10003393;
    }
    eax = t14;
L_10003342: ;
    COW_AT(10003342)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = ebp;
    return (eax & 0xffffff00u) | 1u;
L_1000329c: ;
    COW_AT(1000329c)
    if (edi == 0u)
    {
        ecx = 0u;
    }
    else
    {
    COW_AT(100032a2)
        eax = rd32(self + 0x44u);
        ecx = 0u;
L_100032a5: ;
    COW_AT(100032a5)
        if (rd32(eax) != edx) goto L_100032ae;
    COW_AT(100032a9)
        if (rd32(eax + 4u) == ebx) goto L_100032b6;
L_100032ae: ;
    COW_AT(100032ae)
        if (ecx + 1u < edi)
        {
            eax = eax + 0x10u;
            ecx = ecx + 1u;
            goto L_100032a5;
        }
        ecx = ecx + 1u;
    }
L_100032b6: ;
    COW_AT(100032b6)
    if (ecx != edi) goto L_100032dc;
    COW_AT(100032ba)
    eax = edi * 0x10u + rd32(self + 0x44u);
    edi = edi + 1u;
    goto L_100032c5;
L_1000334d: ;
    COW_AT(1000334d)
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, arg6);
    wr32(sp0 - 0x28u, arg5);
    wr32(sp0 - 0x2cu, arg4);
    wr32(sp0 - 0x30u, arg3);
    wr32(sp0 - 0x34u, arg2);
    wr32(sp0 - 0x38u, arg1);
    g->eax = arg2;
    g->esp = sp0 - 0x1cu;
    t16 = cow_thiscall(g, COW_IMG(0x100033c0u), self, 7, arg1, arg2, arg3, arg4, arg5, arg6, 1u);
    if ((uint8_t)t16 != 0u)
    {
        eax = t16;
        goto L_10003342;
    }
    COW_AT(10003370)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, arg6);
    wr32(sp0 - 0x28u, arg5);
    wr32(sp0 - 0x2cu, arg4);
    wr32(sp0 - 0x30u, arg3);
    wr32(sp0 - 0x34u, arg2);
    wr32(sp0 - 0x38u, arg1);
    g->eax = arg3;
    g->edx = arg1;
    g->esp = sp0 - 0x1cu;
    t17 = cow_thiscall(g, COW_IMG(0x100033c0u), self, 7, arg1, arg2, arg3, arg4, arg5, arg6, 0u);
    t18 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        eax = t17;
        goto L_10003342;
    }
    edx = t18;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_10003393: ;
    COW_AT(10003393)
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
    }
    else
    {
        eax = rd32(self + 4u);
    COW_AT(1000339a)
        wr32(sp0 - 0x20u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t19 = cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        wr32(self + 4u, 0u);
        eax = t19;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(100033a7)
    g->ebx = loc_14;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = ebp;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100031f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000320du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10003220u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10003237u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10003247u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10003264u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10003270u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10003278u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10003280u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10003289u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1000328eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10003292u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1000329cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100032a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ecx = 0u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100032a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100032a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100032aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100032b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100032bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100032c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100032dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100032e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100032fcu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg5;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x1000331fu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg5;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10003342u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1000334du:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg5;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10003370u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg5;
        g->edi = arg6;
        (void)sp0;
        return 1;
    }
    case 0x10003393u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1000339au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100033a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100031f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100031f0(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
