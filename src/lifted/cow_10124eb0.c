/* f_0x10124eb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10124eb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 184u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10124ec4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_10124ec4;
    case 0x10124edau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_10124eda;
    case 0x10124ef2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_10124ef2;
    case 0x10124f17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_10124f17;
    case 0x10124f1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_10124f1f;
    case 0x10124f2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_10124f2e;
    case 0x10124f36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_10124f36;
    case 0x10124f50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10124f50;
    case 0x10124f5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_10124f5c;
    case 0x10124f60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_10124f60;
    case 0x10124f66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_10124f66;
    case 0x10124fc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_10124fc9;
    case 0x10124ff8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10124ff8;
    case 0x10125001u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); goto E_10125001;
    case 0x10125007u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); goto E_10125007;
    case 0x10125035u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); goto E_10125035;
    default: break;
    }
#endif

    COW_AT(10124eb0)
    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_ebp);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    if (rd8(self + 0x4eu) == 0u)
    {
        loc_58 = in_ebx;
        loc_5c = in_ebp;
        loc_60 = in_esi;
        loc_64 = in_edi;
    }
    else
    {
    COW_AT(10124ec4)
        if (rd32(COW_IMG(0x1036e4ecu) + rd8(self + 0x4cu) * 0x40u) == 0u)
        {
            edx = in_edx;
            ebx = 0u;
        }
        else
        {
            eax = (uint32_t)rd8(self + 0x4cu) << 6u;
            ecx = rd32(COW_IMG(0x1036e4ecu) + rd8(self + 0x4cu) * 0x40u);
    COW_AT(10124eda)
            t1 = (in_edx & 0xffff0000u) | rd16(COW_IMG(0x1036e4f8u) + eax);
            if (rd32(rd32(ecx) + (uint16_t)t1 * 4u) != 0u)
            {
                edx = t1;
                ebx = rd32(rd32(ecx) + (uint16_t)t1 * 4u);
    COW_AT(10124f17)
                wr16(COW_IMG(0x1036e4f8u) + eax, (uint16_t)(edx + 1u));
                edx = edx + 1u;
            }
            else
            {
    COW_AT(10124ef2)
                wr16(COW_IMG(0x1036e4f8u) + eax, 0u);
                edx = rd16(COW_IMG(0x1036e4f8u) + rd8(self + 0x4cu) * 0x40u);
                ebx = rd32(rd16(COW_IMG(0x1036e4f8u) + rd8(self + 0x4cu) * 0x40u) * 4u + rd32(rd32(COW_IMG(0x1036e4ecu) + rd8(self + 0x4cu) * 0x40u)));
            }
        }
    COW_AT(10124f1f)
        if (rd32(COW_IMG(0x10456bf8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10456bf8u));
            ecx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10124f5c)
            if (ecx != 0u)
            {
    COW_AT(10124f60)
                wr32(sp0 - 0x68u, 0u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x64u;
                t5 = cow_thiscall(g, COW_IMG(0x10009780u), ecx, 1, 0u);
                t6 = g->edx;
                eax = t5;
                edx = t6;
            }
    COW_AT(10124f66)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x64u;
            t7 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
            t8 = g->edx;
            g->edx = t8;
            cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
            t9 = g->edx;
            t10 = rd32(COW_IMG(0x1036e4f4u) + rd8(self + 0x4cu) * 0x40u);
            wr32(sp0 - 0x68u, t10);
            cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t10);
            wr32(sp0 - 0x68u, sp0 - 0x50u);
            wr32(sp0 - 0x44u, 0u);
            t11 = (uint32_t)(int16_t)rd16(COW_IMG(0x1036e4fau) + rd8(self + 0x4cu) * 0x40u);
            wr32(sp0 - 0x54u, t11);
            wrf32(sp0 - 0x50u, (float)(double)(float)(double)(int32_t)t11);
            wrf32(sp0 - 0x4cu, (float)(double)(float)(double)(int32_t)t11);
            wrf32(sp0 - 0x48u, (float)(double)(float)(double)(int32_t)t11);
            g->eax = t11;
            g->edx = (uint32_t)rd8(self + 0x4cu) << 6u;
            t12 = rd8(self + 0x4cu);
            t13 = cow_thiscall(g, COW_IMG(0x10027a60u), sp0 - 0x40u, 1, sp0 - 0x50u);
            t14 = g->edx;
            if (ebx == 0u)
            {
                eax = t13;
                edx = t14;
            }
            else
            {
    COW_AT(10124fc9)
                wr32(sp0 - 0x68u, 0u);
                t15 = rd32(COW_IMG(0x1036e4e8u) + rd8(self + 0x4cu) * 0x40u);
                wr32(sp0 - 0x6cu, t15);
                t16 = rd32(self + 0xcu);
                esi = sp0 - 0x40u;
                edi = sp0 - 0xacu;
                ecx = 0x10u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                t17 = rd32(self + 0x10u);
                wr32(sp0 - 0xb0u, t17);
                wr32(sp0 - 0xb4u, t16);
                g->eax = t15;
                g->edx = t16;
                g->esp = sp0 - 0x64u;
                t18 = cow_bridge_indirect(g, COW_IMG(0x1011ff70u), 0u, 20u, (const uint32_t[]){t16, t17, rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), t15, 0u}, ebx, g->edx, g->eax, 0u);
                t19 = g->edx;
                eax = t18;
                edx = t19;
            }
    COW_AT(10124ff8)
            g->esp = sp0 - 0x64u;
            cow_stdcall(g, COW_IMG(0x100279a0u), 0);
            loc_58 = rd32(sp0 - 0x58u);
            loc_5c = rd32(sp0 - 0x5cu);
            loc_60 = rd32(sp0 - 0x60u);
            loc_64 = rd32(sp0 - 0x64u);
        }
        else
        {
            eax = rd32(COW_IMG(0x10456bf8u));
            ecx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10124f2e)
            if (ecx == 0u)
            {
                loc_58 = in_ebx;
                loc_5c = in_ebp;
                loc_60 = in_esi;
                loc_64 = in_edi;
            }
            else
            {
    COW_AT(10124f36)
                wr32(sp0 - 0x68u, 0u);
                t2 = rd8(self + 0x4cu);
                wr32(sp0 - 0x6cu, t2);
                g->eax = eax;
                g->esp = sp0 - 0x64u;
                t3 = cow_fastcall(g, COW_IMG(0x100097f0u), ecx, t2, 2, t2, 0u);
                t4 = g->edx;
                if (rd32(COW_IMG(0x1045666cu)) == 0u)
                {
                    loc_58 = in_ebx;
                    loc_5c = in_ebp;
                    loc_60 = in_esi;
                    loc_64 = in_edi;
                }
                else
                {
                    eax = t3;
                    ecx = rd32(COW_IMG(0x1045666cu));
                    edx = t4;
    COW_AT(10124f50)
                    wr32(sp0 - 0x68u, 1u);
                    g->esp = sp0 - 0x64u;
                    cow_thiscall(g, COW_IMG(0x10009780u), ecx, 1, 1u);
                    loc_58 = rd32(sp0 - 0x58u);
                    loc_5c = rd32(sp0 - 0x5cu);
                    loc_60 = rd32(sp0 - 0x60u);
                    loc_64 = rd32(sp0 - 0x64u);
                }
            }
        }
    COW_AT(10125001)
        if (rd8(self + 0x4du) == 6u)
        {
    COW_AT(10125007)
            wr32(sp0 - 0x68u, 0u);
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 0u);
            wr32(sp0 - 0x74u, 0x80808080u);
            wr32(sp0 - 0x78u, 0x3f800000u);
            wr32(sp0 - 0x7cu, 0x3f800000u);
            t20 = rd32(self + 0x30u);
            wr32(sp0 - 0x80u, t20);
            t21 = rd32(self + 0x2cu);
            wr32(sp0 - 0x84u, t21);
            g->esp = sp0 - 0x64u;
            cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(rd32(rd32(self + 0x40u)) + (uint32_t)(int16_t)rd16(self + 0x44u) * 4u), 8, t21, t20, 0x3f800000u, 0x3f800000u, 0x80808080u, 0u, 0u, 0u);
            loc_58 = rd32(sp0 - 0x58u);
            loc_5c = rd32(sp0 - 0x5cu);
            loc_60 = rd32(sp0 - 0x60u);
            loc_64 = rd32(sp0 - 0x64u);
        }
    }
    COW_AT(10125035)
    g->ebx = loc_58;
    g->esi = loc_60;
    g->edi = loc_64;
    g->ebp = loc_5c;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10124eb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10124ec4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10124edau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10124ef2u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10124f17u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10124f1fu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10124f2eu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10124f36u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10124f50u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10124f5cu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10124f60u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10124f66u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10124fc9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->esi = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10124ff8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10125001u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10125007u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10125035u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10124eb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10124eb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
