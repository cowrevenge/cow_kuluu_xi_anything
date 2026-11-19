/* f_0x1001a420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1001a420(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001a436u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1001a436;
    case 0x1001a458u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1001a458;
    case 0x1001a463u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1001a463;
    case 0x1001a468u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1001a468;
    case 0x1001a4b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1001a4b7;
    case 0x1001a4c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1001a4c3;
    case 0x1001a4d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; self = g->ebp - 0x50u; goto E_1001a4d2;
    case 0x1001a4d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001a4d6;
    case 0x1001a4e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; self = g->ebp - 0x50u; goto E_1001a4e2;
    case 0x1001a4edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001a4ed;
    case 0x1001a4f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001a4f4;
    case 0x1001a50du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001a50d;
    case 0x1001a51au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001a51a;
    case 0x1001a525u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001a525;
    case 0x1001a52au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001a52a;
    case 0x1001a532u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001a532;
    case 0x1001a546u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1001a546;
    case 0x1001a551u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1001a551;
    case 0x1001a557u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1001a557;
    case 0x1001a571u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1001a571;
    case 0x1001a595u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1001a595;
    case 0x1001a59bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1001a59b;
    case 0x1001a5a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1001a5a7;
    case 0x1001a5abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1001a5ab;
    case 0x1001a61bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1001a61b;
    case 0x1001a627u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1001a627;
    case 0x1001a62bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1001a62b;
    case 0x1001a640u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1001a640;
    default: break;
    }
#endif

    COW_AT(1001a420)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x18u, self);
    if (rd8(COW_IMG(0x10456d28u)) & 1u)
    {
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10456d28u));
    COW_AT(1001a436)
        wr8(COW_IMG(0x10456d28u), (uint8_t)(eax | 1u));
        g->eax = eax;
        g->edx = (in_edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0x2cu;
        t1 = cow_thiscall(g, COW_IMG(0x10032a40u), COW_IMG(0x10456d2cu), 0);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(sp0 - 0x30u, COW_IMG(0x1001a650u));
        g->edx = t3;
        cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1001a650u));
        t4 = g->edx;
        edx = t4;
    }
    COW_AT(1001a458)
    if (rd32(COW_IMG(0x10462430u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10462430u));
    }
    else
    {
    COW_AT(1001a463)
        esi = COW_IMG(0x1045f040u);
        edi = 0u;
L_1001a468: ;
    COW_AT(1001a468)
        wr32(sp0 - 0x30u, COW_IMG(0x10456d3cu));
        wr32(sp0 - 0x34u, esi);
        t5 = rd32(COW_IMG(0x10456d30u));
        wr32(esi - 0x10u, rd32(COW_IMG(0x10456d2cu)));
        t6 = rd32(COW_IMG(0x10456d34u));
        wr32(esi - 0xcu, t5);
        t7 = rd32(COW_IMG(0x10456d38u));
        wr32(esi - 8u, t6);
        wr32(esi - 4u, t7);
        g->ecx = t6;
        g->edx = t7;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, esi, COW_IMG(0x10456d3cu));
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x38u, COW_IMG(0x1035109cu));
        wr32(sp0 - 0x3cu, esi + 0xcu);
        g->edx = t9;
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, esi + 0xcu, COW_IMG(0x1035109cu));
        t10 = g->edx;
        if (edi + 1u < rd32(COW_IMG(0x10462430u)))
        {
            esi = esi + 0x34u;
            edi = edi + 1u;
            goto L_1001a468;
        }
        eax = rd32(COW_IMG(0x10462430u));
        edx = t10;
    }
    COW_AT(1001a4b7)
    ebx = 5u;
    esi = self + 0x50u;
    edi = 0u;
L_1001a4c3: ;
    COW_AT(1001a4c3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t11 = cow_thiscall(g, COW_IMG(0x1001b340u), esi, 0);
    t12 = g->edx;
    if (ebx != 1u)
    {
        eax = t11;
        edx = t12;
        ebx = ebx - 1u;
        esi = esi - 0x14u;
        edi = edi + t11;
        goto L_1001a4c3;
    }
    eax = t11;
    ebx = ebx - 1u;
    edi = edi + t11;
    COW_AT(1001a4d2)
    if (edi != 0u) goto L_1001a4e2;
    COW_AT(1001a4d6)
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return eax & 0xffffff00u;
L_1001a4e2: ;
    COW_AT(1001a4e2)
    edx = rd32(COW_IMG(0x10462430u));
    ebp = self + 0x50u;
    edi = 4u;
L_1001a4ed: ;
    COW_AT(1001a4ed)
    if (rd32(ebp + 4u) != 0u)
    {
        eax = rd32(ebp + 4u);
    COW_AT(1001a4f4)
        wr32(sp0 - 0x30u, COW_IMG(0x1045f030u));
        wr32(sp0 - 0x34u, edi);
        g->eax = eax;
        g->esp = sp0 - 0x2cu;
        t13 = cow_fastcall(g, COW_IMG(0x1001b230u), ebp, edx, 2, edi, COW_IMG(0x1045f030u));
        if (rd32(COW_IMG(0x10462430u)) == 0u)
        {
            edx = rd32(COW_IMG(0x10462430u));
            goto L_1001a52a;
        }
        eax = t13;
        ecx = 0u;
        edx = rd32(COW_IMG(0x10462430u));
L_1001a50d: ;
    COW_AT(1001a50d)
        if ((rd8(ecx + rd32(COW_IMG(0x1045f028u))) & 0x3fu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(ecx + rd32(COW_IMG(0x1045f028u)));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(ecx + rd32(COW_IMG(0x1045f028u)));
            esi = rd32(COW_IMG(0x1045f028u));
    COW_AT(1001a51a)
            wr8(ecx + esi, (uint8_t)(eax | 0x40u));
            eax = (eax & 0xffffff00u) | (uint8_t)(eax | 0x40u);
            edx = rd32(COW_IMG(0x10462430u));
        }
    COW_AT(1001a525)
        if (ecx + 1u < edx)
        {
            ecx = ecx + 1u;
            goto L_1001a50d;
        }
    }
L_1001a52a: ;
    COW_AT(1001a52a)
    if ((int32_t)(edi - 1u) >= 0)
    {
        ebp = ebp - 0x14u;
        edi = edi - 1u;
        goto L_1001a4ed;
    }
    COW_AT(1001a532)
    wr32(sp0 - 0x1cu, 5u);
    t14 = rd32(sp0 - 0x18u) + 0x70u;
    wr32(sp0 - 0x18u, t14);
    esi = 5u;
    edi = t14;
    loc_1c = 5u;
    loc_18 = t14;
L_1001a546: ;
    COW_AT(1001a546)
    if (rd32(edi - 8u) == 0u)
    {
        eax = rd32(edi - 8u);
    }
    else
    {
    COW_AT(1001a551)
        if (edx == 0u)
        {
            eax = 0u;
            goto L_1001a571;
        }
        eax = 0u;
L_1001a557: ;
    COW_AT(1001a557)
        t15 = rd8(eax + rd32(COW_IMG(0x1045f028u)));
        wr8(eax + rd32(COW_IMG(0x1045f028u)), t15 & 0x80u);
        if (eax + 1u < rd32(COW_IMG(0x10462430u)))
        {
            eax = eax + 1u;
            ebx = (ebx & 0xffffff00u) | (t15 & 0x80u);
            goto L_1001a557;
        }
        eax = eax + 1u;
        ebx = (ebx & 0xffffff00u) | (t15 & 0x80u);
L_1001a571: ;
    COW_AT(1001a571)
        wr32(sp0 - 0x30u, COW_IMG(0x1045b820u));
        wr32(sp0 - 0x34u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x2cu;
        t16 = cow_fastcall(g, COW_IMG(0x1001b230u), edi - 0xcu, edx, 2, esi, COW_IMG(0x1045b820u));
        wr32(sp0 - 0x14u, rd32(edi));
        if (rd32(COW_IMG(0x10462430u)) == 0u)
        {
            eax = t16;
            edx = rd32(COW_IMG(0x10462430u));
        }
        else
        {
            edx = rd32(COW_IMG(0x10462430u));
            loc_14 = rd32(edi);
    COW_AT(1001a595)
            ebx = loc_14;
            ebp = 0u;
            esi = 0u;
L_1001a59b: ;
    COW_AT(1001a59b)
            if ((int8_t)rd8(ebp + rd32(COW_IMG(0x1045f028u))) >= 0)
            {
                eax = (rd32(COW_IMG(0x1045f028u)) & 0xffffff00u) | rd8(ebp + rd32(COW_IMG(0x1045f028u)));
            }
            else
            {
                eax = (rd32(COW_IMG(0x1045f028u)) & 0xffffff00u) | rd8(ebp + rd32(COW_IMG(0x1045f028u)));
    COW_AT(1001a5a7)
                if ((eax & 0x3fu) != 0u)
                {
    COW_AT(1001a5ab)
                    wr32(sp0 - 0x30u, ebx);
                    t17 = COW_IMG(0x1045b820u) + esi;
                    wr32(sp0 - 0x34u, t17);
                    wr32(sp0 - 0x38u, sp0 - 0x10u);
                    t18 = COW_IMG(0x1045f030u) + esi;
                    g->esp = sp0 - 0x2cu;
                    t19 = cow_call_regs(g, COW_IMG(0x10033220u), eax, t18, g->edx, 0, 3, sp0 - 0x10u, t17, ebx);
                    wr32(t18, rd32(t19));
                    t20 = rd32(t19 + 4u);
                    wr32(t18 + 4u, t20);
                    t21 = rd32(t19 + 8u);
                    wr32(t18 + 8u, t21);
                    t22 = rd32(t19 + 0xcu);
                    wr32(t18 + 0xcu, t22);
                    g->edx = t22;
                    cow_stdcall(g, COW_IMG(0x10032a70u), 0);
                    t23 = g->edx;
                    wr32(sp0 - 0x30u, ebx);
                    t24 = COW_IMG(0x1045f040u) + esi;
                    wr32(sp0 - 0x34u, t24);
                    t25 = COW_IMG(0x1045b830u) + esi;
                    wr32(sp0 - 0x38u, t25);
                    wr32(sp0 - 0x3cu, t24);
                    g->ecx = t25;
                    cow_cdecl(g, COW_IMG(0x100276a0u), 4, t24, t25, t24, ebx);
                    t26 = g->ecx;
                    wr32(sp0 - 0x40u, ebx);
                    t27 = COW_IMG(0x1045f04cu) + esi;
                    wr32(sp0 - 0x44u, t27);
                    t28 = COW_IMG(0x1045b83cu) + esi;
                    wr32(sp0 - 0x48u, t28);
                    wr32(sp0 - 0x4cu, t27);
                    g->eax = t27;
                    g->esp = sp0 - 0x3cu;
                    t29 = cow_cdecl(g, COW_IMG(0x100276a0u), 4, t27, t28, t27, ebx);
                    eax = t29;
                    edx = rd32(COW_IMG(0x10462430u));
                    edi = rd32(sp0 - 0x18u);
                }
            }
    COW_AT(1001a61b)
            if (ebp + 1u < edx)
            {
                ebp = ebp + 1u;
                esi = esi + 0x34u;
                goto L_1001a59b;
            }
    COW_AT(1001a627)
            esi = rd32(sp0 - 0x1cu);
        }
    }
    COW_AT(1001a62b)
    wr32(sp0 - 0x1cu, esi + 1u);
    wr32(sp0 - 0x18u, edi + 0x14u);
    if ((int32_t)(esi + 1u) < 7)
    {
        loc_1c = esi + 1u;
        esi = esi + 1u;
        loc_18 = edi + 0x14u;
        edi = edi + 0x14u;
        goto L_1001a546;
    }
    COW_AT(1001a640)
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1001a420(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001a436u:
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
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x1001a458u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x1001a463u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->edi = 0u;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x1001a468u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x1001a4b7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x1001a4c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ebp = self + 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1001a4d2u:
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
        esi = g->esi;
        edi = g->edi;
        self = g->ebp - 0x50u;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a4d6u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a4e2u:
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
        esi = g->esi;
        edi = g->edi;
        self = g->ebp - 0x50u;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a4edu:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a4f4u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a50du:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a51au:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a525u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a52au:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a532u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a546u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a551u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a557u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a571u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a595u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001a59bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a5a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a5abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a61bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a627u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a62bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1001a640u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1001a420(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1001a420(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
