/* f_0x102dce64 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102dce64(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_30;
    uint32_t loc_8;
    uint32_t loc_94;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 188u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x9cu, in_ebx);
    wr32(sp0 - 0xa0u, in_esi);
    wr32(sp0 - 0xa4u, in_edi);
    wr32(sp0 - 0x18u, self);
    wr32(sp0 - 8u, 0u);
    if (self == 0u)
    {
        loc_8 = 0u;
        goto L_102dce8c;
    }
    eax = self;
    loc_8 = 0u;
L_102dce82: ;
    wr32(sp0 - 8u, loc_8 + 1u);
    if (rd32(eax + 0x4cu) != 0u)
    {
        eax = rd32(eax + 0x4cu);
        loc_8 = loc_8 + 1u;
        goto L_102dce82;
    }
    loc_8 = loc_8 + 1u;
L_102dce8c: ;
    if (rd32(COW_IMG(0x103cc680u)) == 0u)
    {
        eax = rd32(COW_IMG(0x103cc680u));
        ecx = self;
        ebx = COW_IMG(0x103cc680u);
    }
    else
    {
        eax = rd32(COW_IMG(0x103cc680u));
        ecx = rd32(self);
        ebx = COW_IMG(0x103cc680u);
L_102dce9c: ;
        if (eax == ecx) goto L_102dcea9;
        if (rd32(ebx + 0x24u) != 0u)
        {
            eax = rd32(ebx + 0x24u);
            ebx = ebx + 0x24u;
            goto L_102dce9c;
        }
        eax = rd32(ebx + 0x24u);
        ebx = ebx + 0x24u;
    }
L_102dcea9: ;
    if (rd32(ebx) != 0u)
    {
        wr32(sp0 - 0xa8u, rd32(self));
        g->eax = eax;
        g->edx = in_edx;
        t1 = rd32(self);
        g->esp = sp0 - 0xa4u;
        t2 = cow_cdecl(g, COW_IMG(0x102d2626u), 1, t1);
        t3 = g->edx;
        wr32(sp0 - 0xcu, t2);
        wr32(sp0 - 0xa8u, 0u);
        t4 = rd32(t2 + 8u) >> 3u;
        wr32(sp0 - 0x14u, t4);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 0xb0u, 4u);
        wr32(sp0 - 0xb4u, sp0 - 0x1cu);
        wr32(sp0 - 0xb8u, arg1);
        wr32(sp0 - 0x1cu, 0x20534444u);
        cow_stdcall(g, rd32(COW_IMG(0x10329240u)), 5, arg1, sp0 - 0x1cu, 4u, sp0 - 0x10u, 0u);   /* kernel32.dll!WriteFile */
        wr32(sp0 - 0xa8u, 0x1fu);
        edi = sp0 - 0x98u;
        eax = 0u;
        ecx = 0x1fu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0xa8u, 0x7cu);
        t5 = rd32(self + 0x10u);
        wr32(sp0 - 0x90u, t5);
        t6 = rd32(self + 0xcu);
        wr32(sp0 - 0x8cu, t6);
        wr32(sp0 - 0xa8u, 8u);
        wr32(sp0 - 0x98u, 0x7cu);
        wr32(sp0 - 0x94u, 0x1007u);
        t7 = rd32(ebx + 8u);
        esi = ebx + 4u;
        edi = sp0 - 0x50u;
        ecx = 8u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x30u, 0x1000u);
        if ((t7 & 3u) == 0u)
        {
            eax = t7;
            loc_30 = 0x1000u;
        }
        else
        {
            eax = t7;
            wr32(sp0 - 0x30u, 0x1002u);
            loc_30 = 0x1002u;
        }
        if ((eax & 0x20u) != 0u)
        {
            wr8(sp0 - 0x2fu, (uint8_t)(loc_30 >> 8u | 1u));
        }
        if (rd32(rd32(sp0 - 0x18u) + 0x4cu) == 0u)
        {
            esi = rd32(sp0 - 0x18u);
            loc_94 = 0x1007u;
        }
        else
        {
            esi = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x30u, loc_30 | 0x400008u);
            wr32(sp0 - 0x94u, 0x21007u);
            t8 = rd32(sp0 - 8u);
            wr32(sp0 - 0x80u, t8);
            loc_94 = 0x21007u;
            loc_30 = loc_30 | 0x400008u;
        }
        if (rd32(esi + 0x50u) != 0u)
        {
            wr32(sp0 - 0x30u, loc_30 | 8u);
            wr8(sp0 - 0x2bu, rd8(sp0 - 0x2bu) | 0xfeu);
        }
        if (rd32(esi + 0x14u) > 1u)
        {
            eax = rd32(esi + 0x14u);
            wr8(sp0 - 0x92u, (uint8_t)(loc_94 >> 0x10u | 0x80u));
            wr8(sp0 - 0x2au, rd8(sp0 - 0x2au) | 0x20u);
            wr32(sp0 - 0x84u, eax);
        }
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 0xb0u, 0x7cu);
        wr32(sp0 - 0xb4u, sp0 - 0x98u);
        wr32(sp0 - 0xb8u, arg1);
        g->ecx = ecx;
        g->edx = 0x7cu;
        t9 = rd32(COW_IMG(0x10329240u));
        g->esp = sp0 - 0xa4u;
        cow_stdcall(g, t9, 5, arg1, sp0 - 0x98u, 0x7cu, sp0 - 0x10u, 0u);   /* kernel32.dll!WriteFile */
        t10 = g->ecx;
        t11 = g->edx;
        if (rd32(rd32(sp0 - 0xcu) + 4u) != 1u)
        {
            ebx = t9;
        }
        else
        {
            ecx = t10;
            edx = t11;
            ebx = t9;
            wr32(sp0 - 0xa8u, 0u);
            wr32(sp0 - 0xacu, sp0 - 0x10u);
            wr32(sp0 - 0xb0u, 0x400u);
            t12 = rd32(esi + 8u);
            wr32(sp0 - 0xb4u, t12);
            wr32(sp0 - 0xb8u, arg1);
            g->esp = sp0 - 0xa4u;
            cow_thiscall(g, ebx, ecx, 5, arg1, t12, 0x400u, sp0 - 0x10u, 0u);
        }
        wr32(sp0 - 0xcu, esi);
        loc_c = esi;
L_102dcfa2: ;
        esi = loc_c;
L_102dd0e7: ;
        if (esi != 0u) goto L_102dcfaa;
        t13 = rd32(loc_c + 0x50u);
        wr32(sp0 - 0xcu, t13);
        if (rd32(loc_c + 0x50u) != 0u)
        {
            loc_c = t13;
            goto L_102dcfa2;
        }
        eax = 0u;
    }
    else
    {
        eax = 0x80004005u;
    }
    return eax;
L_102dcfaa: ;
    wr32(sp0 - 8u, 0u);
    if (rd32(esi + 0x14u) != 0u)
    {
        eax = rd32(esi + 0x10u);
        loc_8 = 0u;
L_102dcfb9: ;
        if (eax == 0u) goto L_102dd0d3;
        edi = 0u;
L_102dcfc3: ;
        if (rd32(rd32(sp0 - 0x18u)) == 0x31545844u) goto L_102dd087;
        eax = rd32(rd32(sp0 - 0x18u));
        if (eax == 0x32545844u) goto L_102dd056;
        if (eax == 0x32595559u) goto L_102dd02a;
        if (eax == 0x33545844u) goto L_102dd056;
        if (eax == 0x34545844u) goto L_102dd056;
        if (eax == 0x35545844u) goto L_102dd056;
        if (eax == 0x59565955u) goto L_102dd02a;
        eax = rd32(esi + 4u) + rd32(esi + 0x18u) * rd32(sp0 - 0x14u) + (edi + rd32(esi + 0x1cu)) * rd32(esi + 0x30u) + (loc_8 + rd32(esi + 0x28u)) * rd32(esi + 0x34u);
        ecx = rd32(esi + 0xcu) * rd32(sp0 - 0x14u);
L_102dd0ba: ;
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 0xb0u, ecx);
        wr32(sp0 - 0xb4u, eax);
        wr32(sp0 - 0xb8u, arg1);
        g->esp = sp0 - 0xa4u;
        cow_thiscall(g, ebx, ecx, 5, arg1, eax, ecx, sp0 - 0x10u, 0u);
        if (edi + 1u < rd32(esi + 0x10u))
        {
            edi = edi + 1u;
            goto L_102dcfc3;
        }
        eax = rd32(esi + 0x10u);
L_102dd0d3: ;
        wr32(sp0 - 8u, loc_8 + 1u);
        if (loc_8 + 1u < rd32(esi + 0x14u))
        {
            loc_8 = loc_8 + 1u;
            goto L_102dcfb9;
        }
    }
    esi = rd32(esi + 0x4cu);
    goto L_102dd0e7;
L_102dd02a: ;
    eax = rd32(esi + 4u) + rd32(esi + 0x18u) * rd32(sp0 - 0x14u) + (edi + rd32(esi + 0x1cu)) * rd32(esi + 0x30u) + (loc_8 + rd32(esi + 0x28u)) * rd32(esi + 0x34u);
    ecx = (rd32(esi + 0xcu) + 1u) >> 1u << 2u;
    goto L_102dd0ba;
L_102dd056: ;
    eax = (rd32(esi + 0x18u) >> 2u) * 0x10u + (loc_8 + rd32(esi + 0x28u)) * rd32(esi + 0x34u) + ((edi + rd32(esi + 0x1cu)) >> 2u) * rd32(esi + 0x30u);
    ecx = (rd32(esi + 0xcu) + 3u) >> 2u << 4u;
L_102dd0b4: ;
    eax = eax + rd32(esi + 4u);
    edi = edi + 3u;
    goto L_102dd0ba;
L_102dd087: ;
    eax = (rd32(esi + 0x18u) >> 2u) * 8u + (loc_8 + rd32(esi + 0x28u)) * rd32(esi + 0x34u) + ((edi + rd32(esi + 0x1cu)) >> 2u) * rd32(esi + 0x30u);
    ecx = (rd32(esi + 0xcu) + 3u) >> 2u << 3u;
    goto L_102dd0b4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dce64(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dce64(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
