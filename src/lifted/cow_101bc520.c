/* f_0x101bc520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101bc520(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_204;
    uint32_t loc_208;
    uint32_t loc_20c;
    uint32_t loc_210;
    uint32_t loc_214;
    uint32_t loc_218;
    uint32_t loc_21c;
    uint32_t loc_220;
    uint32_t loc_224;
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
    cow_frame(g, sp0, 568u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101bc53au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x224u); in_esi = rd32(sp0 - 0x220u); in_ebp = rd32(sp0 - 0x21cu); in_ebx = rd32(sp0 - 0x218u); g->ebp = rd32(sp0 - 0x21cu); g->ebx = rd32(sp0 - 0x218u); g->edi = rd32(sp0 - 0x224u); g->esi = rd32(sp0 - 0x220u); goto E_101bc53a;
    case 0x101bc540u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_224 = rd32(sp0 - 0x224u); loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_218 = rd32(sp0 - 0x218u); goto E_101bc540;
    case 0x101bc547u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc547;
    case 0x101bc555u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc555;
    case 0x101bc56cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_224 = rd32(sp0 - 0x224u); loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_218 = rd32(sp0 - 0x218u); goto E_101bc56c;
    case 0x101bc571u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_224 = rd32(sp0 - 0x224u); loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_218 = rd32(sp0 - 0x218u); goto E_101bc571;
    case 0x101bc587u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc587;
    case 0x101bc58cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_224 = rd32(sp0 - 0x224u); loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_218 = rd32(sp0 - 0x218u); goto E_101bc58c;
    case 0x101bc591u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_224 = rd32(sp0 - 0x224u); loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_218 = rd32(sp0 - 0x218u); goto E_101bc591;
    case 0x101bc59du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101bc59d;
    case 0x101bc5b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc5b0;
    case 0x101bc5b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_224 = rd32(sp0 - 0x224u); loc_220 = rd32(sp0 - 0x220u); loc_21c = rd32(sp0 - 0x21cu); loc_218 = rd32(sp0 - 0x218u); goto E_101bc5b3;
    case 0x101bc5bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc5bd;
    case 0x101bc5ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc5cc;
    case 0x101bc5e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_101bc5e2;
    case 0x101bc5eau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_101bc5ea;
    case 0x101bc5f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_101bc5f3;
    case 0x101bc5fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc5fc;
    case 0x101bc600u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc600;
    case 0x101bc605u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc605;
    case 0x101bc60cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc60c;
    case 0x101bc611u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc611;
    case 0x101bc618u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc618;
    case 0x101bc61cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc61c;
    case 0x101bc62bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_210 = rd32(sp0 - 0x210u); goto E_101bc62b;
    case 0x101bc631u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_210 = rd32(sp0 - 0x210u); goto E_101bc631;
    case 0x101bc635u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_101bc635;
    case 0x101bc644u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_101bc644;
    case 0x101bc648u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); goto E_101bc648;
    case 0x101bc658u: ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc658;
    case 0x101bc65au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_214 = rd32(sp0 - 0x214u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_101bc65a;
    case 0x101bc65eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_214 = rd32(sp0 - 0x214u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_101bc65e;
    case 0x101bc66du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_214 = rd32(sp0 - 0x214u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_101bc66d;
    case 0x101bc678u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_214 = rd32(sp0 - 0x214u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); loc_204 = rd32(sp0 - 0x204u); goto E_101bc678;
    case 0x101bc68du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc68d;
    case 0x101bc691u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101bc691;
    case 0x101bc697u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_208 = rd32(sp0 - 0x208u); goto E_101bc697;
    case 0x101bc6a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_208 = rd32(sp0 - 0x208u); goto E_101bc6a0;
    case 0x101bc6acu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_208 = rd32(sp0 - 0x208u); goto E_101bc6ac;
    case 0x101bc6c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_208 = rd32(sp0 - 0x208u); goto E_101bc6c2;
    case 0x101bc6c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_214 = rd32(sp0 - 0x214u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_101bc6c6;
    case 0x101bc6d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_214 = rd32(sp0 - 0x214u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_101bc6d5;
    default: break;
    }
#endif

    COW_AT(101bc520)
    wr32(sp0 - 0x218u, in_ebx);
    wr32(sp0 - 0x21cu, in_ebp);
    wr32(sp0 - 0x220u, in_esi);
    wr32(sp0 - 0x224u, in_edi);
    if ((int32_t)rd32(self + 0x224u) <= 0)
    {
        eax = rd32(self + 0x224u);
        ecx = self;
        edx = in_edx;
        ebp = 0u;
        loc_218 = in_ebx;
        loc_21c = in_ebp;
        loc_220 = in_esi;
        loc_224 = in_edi;
    }
    else
    {
        eax = rd32(self + 0x224u);
    COW_AT(101bc53a)
        edx = in_edx;
        ebp = 0u;
        esi = 0u;
        edi = self + 0x22cu;
        loc_218 = in_ebx;
        loc_21c = in_ebp;
        loc_220 = in_esi;
        loc_224 = in_edi;
L_101bc540: ;
    COW_AT(101bc540)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x224u;
        t1 = cow_thiscall(g, COW_IMG(0x101bae20u), edi, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    COW_AT(101bc547)
        wr32(esi * 4u + sp0 - 0x100u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x224u;
        t3 = cow_thiscall(g, COW_IMG(0x101bae30u), edi, 0);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    COW_AT(101bc555)
        wr32(esi * 4u + sp0 - 0x200u, eax);
        if ((int32_t)(esi + 1u) < (int32_t)rd32(self + 0x224u))
        {
            ebp = eax + ebp;
            eax = rd32(self + 0x224u);
            esi = esi + 1u;
            edi = edi + 0x1f0u;
            loc_218 = rd32(sp0 - 0x218u);
            loc_21c = rd32(sp0 - 0x21cu);
            loc_220 = rd32(sp0 - 0x220u);
            loc_224 = rd32(sp0 - 0x224u);
            goto L_101bc540;
        }
        ebp = eax + ebp;
        eax = rd32(self + 0x224u);
        loc_218 = rd32(sp0 - 0x218u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_220 = rd32(sp0 - 0x220u);
        loc_224 = rd32(sp0 - 0x224u);
    }
    COW_AT(101bc56c)
    t6 = rd8(self);
    if ((uint8_t)t6 != 0u)
    {
    COW_AT(101bc58c)
        t7 = rd32(self + 0x10u);
        if (t7 != ebp)
        {
    COW_AT(101bc591)
            t8 = rd32(self + 0xcu);
            wr32(sp0 - 0x228u, t8);
            g->esp = sp0 - 0x224u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, t8, 1, 1, t8);
            t9 = g->ecx;
            t10 = g->edx;
            ecx = t9;
            edx = t10;
    COW_AT(101bc59d)
            wr32(sp0 - 0x22cu, COW_IMG(0x1037c9e8u));
            wr32(sp0 - 0x230u, ebp * 4u);
            wr32(sp0 - 0x234u, self + 0xcu);
            g->esp = sp0 - 0x224u;
            cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xcu, ebp * 4u, COW_IMG(0x1037c9e8u), rd32(sp0 - 0x228u));
    COW_AT(101bc5b0)
            loc_218 = rd32(sp0 - 0x218u);
            loc_21c = rd32(sp0 - 0x21cu);
            loc_220 = rd32(sp0 - 0x220u);
            loc_224 = rd32(sp0 - 0x224u);
        }
    }
    else
    {
    COW_AT(101bc571)
        wr32(sp0 - 0x228u, COW_IMG(0x1037c9e8u));
        wr32(sp0 - 0x22cu, ebp * 4u);
        wr32(sp0 - 0x230u, self + 0xcu);
        g->esp = sp0 - 0x220u;
        cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xcu, ebp * 4u, COW_IMG(0x1037c9e8u), loc_224);
    COW_AT(101bc587)
        loc_218 = rd32(sp0 - 0x218u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_220 = rd32(sp0 - 0x220u);
        loc_224 = rd32(sp0 - 0x224u);
    }
    COW_AT(101bc5b3)
    t11 = rd32(self + 0xcu);
    wr32(self + 0x10u, ebp);
    if (t11 != 0u) goto L_101bc5cc;
    eax = t11;
    COW_AT(101bc5bd)
    g->ebx = rd32(sp0 - 0x218u);
    g->esi = rd32(sp0 - 0x220u);
    g->edi = rd32(sp0 - 0x224u);
    g->ebp = rd32(sp0 - 0x21cu);
    return eax & 0xffffff00u;
L_101bc5cc: ;
    COW_AT(101bc5cc)
    wr32(sp0 - 0x210u, 0u);
    wr32(sp0 - 0x214u, 0u);
    if ((int32_t)rd32(self + 0x224u) <= 0)
    {
        edx = 0u;
        loc_210 = 0u;
        goto L_101bc648;
    }
    ecx = 0u;
    loc_210 = 0u;
    loc_214 = 0u;
L_101bc5e2: ;
    COW_AT(101bc5e2)
    if ((int32_t)rd32(ecx * 4u + sp0 - 0x200u) > 0)
    {
        eax = rd32(ecx * 4u + sp0 - 0x200u);
    COW_AT(101bc5ea)
        ebp = eax;
        edi = rd32(ecx * 4u + sp0 - 0x100u);
L_101bc5f3: ;
    COW_AT(101bc5f3)
        g->eax = eax;
        g->edx = rd32(rd32(edi));
        t12 = rd32(rd32(edi));
        t13 = rd32(edi);
        g->esp = sp0 - 0x224u;
        t14 = cow_thiscall(g, rd32(t12 + 0x10u), t13, 0);
        t15 = g->edx;
        eax = t14;
        edx = t15;
        esi = t13;
    COW_AT(101bc5fc)
        if (eax == 0u)
        {
            loc_210 = rd32(sp0 - 0x210u);
        }
        else
        {
    COW_AT(101bc600)
            t16 = rd8(eax);
            if ((uint8_t)t16 != 0xfdu) goto L_101bc611;
    COW_AT(101bc605)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x224u;
            t17 = cow_thiscall(g, COW_IMG(0x101bc9b0u), esi, 0);
            t18 = g->edx;
            eax = t17;
            edx = t18;
    COW_AT(101bc60c)
            if (eax == 6u)
            {
                loc_210 = rd32(sp0 - 0x210u);
                goto L_101bc62b;
            }
L_101bc611: ;
    COW_AT(101bc611)
            g->eax = eax;
            g->esp = sp0 - 0x224u;
            t19 = cow_thiscall(g, COW_IMG(0x101bc9b0u), esi, 0);
            eax = t19;
    COW_AT(101bc618)
            if (eax == 0u)
            {
                loc_210 = rd32(sp0 - 0x210u);
            }
            else
            {
    COW_AT(101bc61c)
                t20 = rd32(sp0 - 0x210u);
                wr32(rd32(self + 0xcu) + t20 * 4u, esi);
                wr32(sp0 - 0x210u, t20 + 1u);
                eax = t20 + 1u;
                loc_210 = t20 + 1u;
            }
        }
L_101bc62b: ;
    COW_AT(101bc62b)
        if (ebp != 1u)
        {
            ebp = ebp - 1u;
            edi = edi + 4u;
            loc_214 = rd32(sp0 - 0x214u);
            goto L_101bc5f3;
        }
    COW_AT(101bc631)
        ecx = rd32(sp0 - 0x214u);
    }
    COW_AT(101bc635)
    wr32(sp0 - 0x214u, ecx + 1u);
    if ((int32_t)(ecx + 1u) < (int32_t)rd32(self + 0x224u))
    {
        loc_214 = ecx + 1u;
        ecx = ecx + 1u;
        goto L_101bc5e2;
    }
    COW_AT(101bc644)
    edx = loc_210;
L_101bc648: ;
    COW_AT(101bc648)
    wr32(self + 0x14u, edx);
    wr32(sp0 - 0x214u, 0u);
    if ((int32_t)(edx - 1u) <= 0)
    {
        eax = 0u;
    }
    else
    {
    COW_AT(101bc658)
        eax = 0u;
        loc_214 = 0u;
L_101bc65e: ;
    COW_AT(101bc65e)
        wr32(sp0 - 0x208u, eax);
        wr32(sp0 - 0x20cu, eax + 1u);
        if ((int32_t)(eax + 1u) >= (int32_t)edx)
        {
            edi = eax + 1u;
        }
        else
        {
            edi = eax + 1u;
            loc_208 = eax;
            loc_20c = eax + 1u;
    COW_AT(101bc66d)
            wr32(sp0 - 0x204u, eax * 4u);
            ebp = eax * 4u;
            loc_204 = eax * 4u;
L_101bc678: ;
    COW_AT(101bc678)
            t21 = rd32(edi * 4u + rd32(self + 0xcu));
            wr32(sp0 - 0x228u, t21);
            g->eax = t21;
            g->esp = sp0 - 0x224u;
            t22 = cow_thiscall(g, rd32(rd32(rd32(ebp + rd32(self + 0xcu)))), rd32(ebp + rd32(self + 0xcu)), 1, t21);
            eax = t22;
            esi = edi * 4u;
    COW_AT(101bc68d)
            if ((int32_t)eax >= 0)
            {
                loc_208 = rd32(sp0 - 0x208u);
            }
            else
            {
    COW_AT(101bc691)
                wr32(sp0 - 0x208u, edi);
                ebp = esi;
                loc_208 = edi;
            }
    COW_AT(101bc697)
            if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 - 0x210u))
            {
                edi = edi + 1u;
                loc_214 = rd32(sp0 - 0x214u);
                loc_20c = rd32(sp0 - 0x20cu);
                loc_204 = rd32(sp0 - 0x204u);
                goto L_101bc678;
            }
    COW_AT(101bc6a0)
            if (loc_208 != rd32(sp0 - 0x214u))
            {
                ecx = loc_208;
    COW_AT(101bc6ac)
                t23 = rd32(ecx * 4u + rd32(self + 0xcu));
                t24 = rd32(rd32(self + 0xcu) + rd32(sp0 - 0x204u));
                wr32(rd32(self + 0xcu) + rd32(sp0 - 0x204u), t23);
                wr32(ecx * 4u + rd32(self + 0xcu), t24);
            }
    COW_AT(101bc6c2)
            edi = rd32(sp0 - 0x20cu);
        }
    COW_AT(101bc6c6)
        wr32(sp0 - 0x214u, edi);
        if ((int32_t)edi < (int32_t)(rd32(sp0 - 0x210u) - 1u))
        {
            edx = rd32(sp0 - 0x210u);
            loc_214 = edi;
            goto L_101bc65a;
        }
        eax = rd32(sp0 - 0x210u) - 1u;
    }
    COW_AT(101bc6d5)
    g->ebx = rd32(sp0 - 0x218u);
    g->esi = rd32(sp0 - 0x220u);
    g->edi = rd32(sp0 - 0x224u);
    g->ebp = rd32(sp0 - 0x21cu);
    return (eax & 0xffffff00u) | 1u;
L_101bc65a: ;
    COW_AT(101bc65a)
    eax = loc_214;
    goto L_101bc65e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101bc520(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101bc53au:
    {
        uint32_t eax;
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
        self = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x224u);
        in_esi = rd32(sp0 - 0x220u);
        in_ebp = rd32(sp0 - 0x21cu);
        in_ebx = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x224u;
        g->ebp = 0u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101bc540u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_218;
        uint32_t loc_21c;
        uint32_t loc_220;
        uint32_t loc_224;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_224 = rd32(sp0 - 0x224u);
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_218 = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc547u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc555u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc56cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_218;
        uint32_t loc_21c;
        uint32_t loc_220;
        uint32_t loc_224;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_224 = rd32(sp0 - 0x224u);
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_218 = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc571u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_218;
        uint32_t loc_21c;
        uint32_t loc_220;
        uint32_t loc_224;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_224 = rd32(sp0 - 0x224u);
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_218 = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc587u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x230u;
        (void)sp0;
        return 1;
    }
    case 0x101bc58cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_218;
        uint32_t loc_21c;
        uint32_t loc_220;
        uint32_t loc_224;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_224 = rd32(sp0 - 0x224u);
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_218 = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc591u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_218;
        uint32_t loc_21c;
        uint32_t loc_220;
        uint32_t loc_224;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_224 = rd32(sp0 - 0x224u);
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_218 = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc59du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x228u;
        g->esi = self + 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101bc5b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x234u;
        (void)sp0;
        return 1;
    }
    case 0x101bc5b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_218;
        uint32_t loc_21c;
        uint32_t loc_220;
        uint32_t loc_224;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_224 = rd32(sp0 - 0x224u);
        loc_220 = rd32(sp0 - 0x220u);
        loc_21c = rd32(sp0 - 0x21cu);
        loc_218 = rd32(sp0 - 0x218u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc5bdu:
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
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc5ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc5e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_210;
        uint32_t loc_214;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc5eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_210;
        uint32_t loc_214;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc5f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_210;
        uint32_t loc_214;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc5fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc600u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc605u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc60cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc611u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc618u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc61cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc62bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_210;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc631u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_210;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc635u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_210;
        uint32_t loc_214;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc644u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_210;
        uint32_t loc_214;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc648u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_210;
        uint32_t loc_214;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc658u:
    {
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        g->eax = 0u;
        wr32(sp0 - 0x214u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101bc65au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_214;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_214 = rd32(sp0 - 0x214u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc65eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_214;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_214 = rd32(sp0 - 0x214u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc66du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_214;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_214 = rd32(sp0 - 0x214u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc678u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_214;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_214 = rd32(sp0 - 0x214u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc68du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc691u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc697u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_208;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc6a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_208;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc6acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_208;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc6c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_208;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc6c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_214;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_214 = rd32(sp0 - 0x214u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    case 0x101bc6d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_214;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_214 = rd32(sp0 - 0x214u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x224u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101bc520(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101bc520(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
