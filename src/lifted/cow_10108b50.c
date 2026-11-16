/* f_0x10108b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10108b50(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_138;
    uint32_t loc_13c;
    uint32_t loc_144;
    uint32_t loc_148;
    uint32_t loc_150;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 372u);

    wr32(sp0 - 0x154u, in_ebx);
    wr32(sp0 - 0x158u, in_ebp);
    wr32(sp0 - 0x15cu, in_esi);
    wr32(sp0 - 0x140u, self);
    wr32(sp0 - 0x160u, in_edi);
    wr32(sp0 - 0x150u, 0u);
    wr32(sp0 - 0x14cu, sp0 - 0x100u);
    wr32(sp0 - 0x148u, self + 0x14u);
    if (self + 0x14u == 0u)
    {
        eax = in_eax;
        edx = 0u;
        edi = sp0 - 0x100u;
    }
    else
    {
        eax = in_eax;
        ecx = self + 0x14u;
        edx = 0u;
        ebx = in_ebx;
        edi = sp0 - 0x100u;
        loc_148 = self + 0x14u;
L_10108b81: ;
        if (rd32(ecx) != 0u)
        {
            if ((uint16_t)(rd16(ecx + 6u) - 8u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)(rd16(ecx + 6u) - 8u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)(rd16(ecx + 6u) - 8u);
                wr32(sp0 - 0x144u, 0u);
                wr32(sp0 - 0x138u, (uint16_t)eax);
                t1 = (uint16_t)(((eax & 0xffff0000u) | (uint16_t)((uint16_t)eax - 1u) >> 3u) + 1u);
                wr32(sp0 - 0x13cu, t1);
                loc_144 = 0u;
                loc_138 = (uint16_t)eax;
                loc_13c = t1;
L_10108bbf: ;
                ebp = 0u;
L_10108bc1: ;
                if ((int32_t)(loc_144 + (uint16_t)ebp) >= (int32_t)loc_138) goto L_10108c3b;
                eax = loc_144 + (uint16_t)ebp;
                esi = (uint16_t)ebp;
                t2 = rd8(eax + ecx + 8u);
                wr8(sp0 - 0x134u, (uint8_t)t2);
                t3 = (uint8_t)rd32(sp0 - 0x134u);
                wr32(sp0 - 0x164u, t3);
                wr32(sp0 - 0x168u, COW_IMG(0x1036be9cu));
                t4 = esi * 3u + sp0 - 0x120u;
                wr32(sp0 - 0x16cu, t4);
                g->ebx = (ebx & 0xffffff00u) | t2;
                g->eax = eax;
                g->ecx = esi + sp0 - 0x120u;
                g->edx = t4;
                g->esp = sp0 - 0x158u;
                t5 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t4, COW_IMG(0x1036be9cu), t3, in_edi, in_esi);
                t6 = g->ecx;
                t7 = g->edx;
                wr32(sp0 - 0x170u, t3);
                g->edx = t7;
                g->esp = sp0 - 0x16cu;
                t8 = cow_thiscall_cdecl(g, COW_IMG(0x1031486fu), t6, 1, t3);
                t9 = g->ecx;
                t10 = g->edx;
                if (t8 != 0u)
                {
                    eax = (t8 & 0xffffff00u) | (uint8_t)t2;
                    ecx = t9;
                    edx = t10;
                    ebx = (ebx & 0xffffff00u) | t2;
                }
                else
                {
                    eax = (t8 & 0xffffff00u) | (uint8_t)t2;
                    ecx = t9;
                    edx = t10;
                    ebx = (ebx & 0xffffff00u) | t2;
                    eax = (eax & 0xffffff00u) | 0x2eu;
                }
                if ((uint16_t)ebp >= 4u)
                {
                    esi = esi + 1u;
                }
                wr32(sp0 - 0x164u, (uint8_t)eax);
                wr32(sp0 - 0x168u, COW_IMG(0x1036be98u));
                t11 = esi + sp0 - 0x130u;
                wr32(sp0 - 0x16cu, t11);
                g->ebx = ebx;
                g->esp = sp0 - 0x158u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, t11, COW_IMG(0x1036be98u), (uint8_t)eax, rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu));
                if ((uint16_t)(ebp + 1u) < 8u)
                {
                    ecx = rd32(sp0 - 0x148u);
                    ebp = ebp + 1u;
                    edi = rd32(sp0 - 0x14cu);
                    goto L_10108bc1;
                }
                ecx = rd32(sp0 - 0x148u);
                edi = rd32(sp0 - 0x14cu);
L_10108c3b: ;
                wr32(sp0 - 0x144u, loc_144 + 8u);
                wr32(sp0 - 0x13cu, loc_13c - 1u);
                if (loc_13c != 1u)
                {
                    loc_144 = loc_144 + 8u;
                    loc_13c = loc_13c - 1u;
                    goto L_10108bbf;
                }
                eax = loc_13c - 1u;
                edx = loc_144 + 8u;
            }
        }
        wr32(sp0 - 0x164u, ecx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x160u;
        t12 = cow_thiscall(g, COW_IMG(0x10108870u), self, 1, ecx);
        t13 = g->edx;
        wr32(sp0 - 0x148u, t12);
        if (t12 != 0u)
        {
            eax = t12;
            edx = t13;
            loc_148 = t12;
            goto L_10108b7d;
        }
        eax = t12;
        edx = rd32(sp0 - 0x150u);
    }
    if (self + 0x14u != 0u)
    {
        ecx = self;
        ebx = 0u;
        esi = self + 0x14u;
L_10108c86: ;
        if (rd16(esi + 6u) == 0u)
        {
            loc_150 = 0u;
            goto L_10108d4c;
        }
        ebp = 0u;
        loc_150 = 0u;
L_10108c92: ;
        if ((uint16_t)edx == 0u)
        {
            t14 = esi + (uint16_t)ebp;
            wr32(sp0 - 0x164u, t14);
            wr32(sp0 - 0x168u, COW_IMG(0x1036bec4u));
            wr32(sp0 - 0x16cu, sp0 - 0x100u);
            g->ebx = ebx;
            g->ecx = ecx;
            g->esp = sp0 - 0x158u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1036bec4u), t14, in_edi, in_esi);
            t15 = g->ecx;
            edi = sp0 - 0x100u;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = sp0 - 0x160u < sp0 - 0x16cu;
            pf = PARITY((uint8_t)(sp0 - 0x160u));
            af = (sp0 - 0x16cu ^ sp0 - 0x160u) >> 4u & 1u;
            zf = sp0 == 0x160u;
            sf = (int32_t)(sp0 - 0x160u) < 0;
            of = ((sp0 - 0x16cu ^ sp0 - 0x160u) & (sp0 - 0x160u ^ 0xcu)) >> 0x1fu;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t16 = sp0 + ~ecx - 0x101u;
            wr32(sp0 - 0x14cu, t16);
            edx = rd32(sp0 - 0x150u);
            edi = t16;
        }
        if ((int32_t)(edx & 3u) >= 0)
        {
            eax = (uint16_t)edx;
            ecx = edx & 3u;
            zf = (edx & 3u) == 0u;
        }
        else
        {
            eax = (uint16_t)edx;
            ecx = edx & 3u;
            zf = (ecx - 1u | 0xfffffffcu) + 1u == 0u;
            ecx = (ecx - 1u | 0xfffffffcu) + 1u;
        }
        if (zf)
        {
            wr8(edi, 0x20u);
            edi = edi + 1u;
        }
        if ((int32_t)(eax & 0x8000000fu) >= 0)
        {
            zf = (eax & 0x8000000fu) == 0u;
            eax = eax & 0x8000000fu;
        }
        else
        {
            eax = eax & 0x8000000fu;
            zf = (eax - 1u | 0xfffffff0u) + 1u == 0u;
            eax = (eax - 1u | 0xfffffff0u) + 1u;
        }
        if (zf)
        {
            wr8(edi, 0x20u);
            edi = edi + 1u;
        }
        if (rd32(esi) == 0u)
        {
            wr8(edi, 0x2eu);
        }
        else
        {
            if ((ebx & 0xfu) >= 0xau)
            {
                eax = ebx;
                wr8(edi, (uint8_t)((eax & 0xfu) + 0x57u));
                eax = (eax & 0xfu) + 0x57u;
            }
            else
            {
                eax = ebx;
                wr8(edi, (uint8_t)((eax & 0xfu) + 0x30u));
                eax = (eax & 0xfu) + 0x30u;
            }
        }
        wr32(sp0 - 0x150u, edx + 1u);
        if ((uint16_t)(edx + 1u) < 0x20u)
        {
            edi = edi + 1u;
            loc_150 = edx + 1u;
            edx = edx + 1u;
        }
        else
        {
            edi = edi + 1u;
            wr32(sp0 - 0x150u, 0u);
            wr8(edi, 0u);
            edx = 0u;
            loc_150 = 0u;
        }
        if ((uint16_t)(ebp + 4u) < rd16(esi + 6u))
        {
            ebp = ebp + 4u;
            goto L_10108c92;
        }
L_10108d4c: ;
        wr32(sp0 - 0x164u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x160u;
        t17 = cow_thiscall(g, COW_IMG(0x10108870u), self, 1, esi);
        t18 = g->ecx;
        if (t17 != 0u)
        {
            eax = t17;
            ecx = t18;
            ebx = ebx + 1u;
            esi = t17;
            goto L_10108c82;
        }
        eax = t17;
        if (rd16(sp0 - 0x150u) > (uint16_t)eax)
        {
            wr8(edi, 0x2au);
            wr8(edi + 1u, (uint8_t)eax);
        }
    }
    g->ebx = in_ebx;
    return;
L_10108b7d: ;
    ecx = loc_148;
    goto L_10108b81;
L_10108c82: ;
    edx = rd32(sp0 - 0x150u);
    goto L_10108c86;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108b50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10108b50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
