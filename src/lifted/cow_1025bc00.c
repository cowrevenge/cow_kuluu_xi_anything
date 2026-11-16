/* f_0x1025bc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1025bc00(Guest* g)
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
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t34;
    uint32_t t35;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 4u, 0u);
    if (rd32(COW_IMG(0x1038ace0u)) == 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        loc_8 = rd32(sp0 - 8u) & 0xffff00ffu;
    }
    else
    {
        edi = rd32(COW_IMG(0x1038ace0u));
        loc_8 = rd32(sp0 - 8u) & 0xffff00ffu;
        ecx = self;
        edx = COW_IMG(0x1038ace0u);
L_1025bc1f: ;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t1 = ~ecx - 1u;
        t2 = rd32(edx + 8u);
        wr32(edx - 4u, t1);
        if (t2 != 0u)
        {
            ecx = t1;
            edx = edx + 8u;
            edi = t2;
            goto L_1025bc1f;
        }
        ecx = t1;
        edx = edx + 8u;
    }
    if (rd32(COW_IMG(0x1038ad08u)) != 0u)
    {
        edi = rd32(COW_IMG(0x1038ad08u));
        edx = COW_IMG(0x1038ad08u);
L_1025bc45: ;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t3 = ~ecx - 1u;
        t4 = rd32(edx + 8u);
        wr32(edx - 4u, t3);
        if (t4 != 0u)
        {
            ecx = t3;
            edx = edx + 8u;
            edi = t4;
            goto L_1025bc45;
        }
        ecx = t3;
        edx = edx + 8u;
    }
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    if (rd8(arg2) == 0u)
    {
        ebp = 0u;
        loc_4 = 0u;
        goto L_1025bde4;
    }
    ebp = 0u;
    loc_4 = 0u;
L_1025bc6b: ;
    if (rd8(arg2 + ebp) != 0x20u)
    {
        esi = arg2 + ebp;
        goto L_1025bd11;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2 + ebp);
    if (arg1 != 3u) goto L_1025bcdf;
    if ((uint8_t)(loc_8 >> 8u) == 0u) goto L_1025bc8f;
    loc_8 = loc_8 & 0xffff00ffu;
L_1025bce6: ;
    if (loc_4 == 0u)
    {
        eax = loc_4;
        goto L_1025bd0b;
    }
    t9 = arg2 + ebp + 1u;
    wr32(sp0 - 0x1cu, t9);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t10 = cow_cdecl(g, COW_IMG(0x1025bb80u), 1, t9);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        edx = t12;
        goto L_1025bde4;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    wr32(sp0 - 4u, 0u);
    loc_4 = 0u;
L_1025bd0b: ;
    ebp = ebp + 1u;
L_1025bdb5: ;
    if ((int32_t)ebp >= (int32_t)arg3) goto L_1025bde4;
    if (rd8(arg2 + ebp) != 0u) goto L_1025bc6b;
L_1025bde4: ;
    if (rd8(arg2 + ebp) == 0u)
    {
        eax = ebp;
    }
    else
    {
        eax = loc_4;
    }
    g->edx = edx;
    return eax;
L_1025bc8f: ;
    if ((int32_t)(ebp + 1u) >= (int32_t)arg3) goto L_1025bdc7;
    esi = ebp + 1u;
    wr32(sp0 - 0x1cu, sp0 - 6u);
    t5 = arg2 + ebp + 1u;
    wr32(sp0 - 0x20u, t5);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x1011daa0u), t5, 2, t5, sp0 - 6u);
    t7 = g->ecx;
    t8 = g->edx;
    if (rd16(sp0 - 6u) == 0x8249u)
    {
        ecx = t7;
        edx = t8;
    }
    else
    {
        eax = (t6 & 0xffff0000u) | rd16(sp0 - 6u);
        ecx = t7;
        edx = t8;
        if ((uint16_t)eax != 0x857bu)
        {
            if ((uint16_t)eax != 0x21u)
            {
                if ((uint16_t)eax != 0x3fu)
                {
                    if ((uint16_t)eax != 0x3au)
                    {
                        if ((uint16_t)eax != 0x3bu)
                        {
                            wr32(sp0 - 4u, esi);
                            loc_4 = esi;
                        }
                    }
                }
            }
        }
    }
    goto L_1025bce6;
L_1025bcdf: ;
    wr32(sp0 - 4u, ebp + 1u);
    edx = ebp + 1u;
    loc_4 = ebp + 1u;
    goto L_1025bce6;
L_1025bd11: ;
    wr32(sp0 - 0x1cu, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t13 = cow_cdecl(g, COW_IMG(0x1025bb80u), 1, esi);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        edx = t15;
        wr32(sp0 - 0x1cu, COW_IMG(0x1038acdcu));
        wr32(sp0 - 0x20u, arg3 - ebp);
        wr32(sp0 - 0x24u, esi);
        g->ecx = arg3 - ebp;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t19 = cow_cdecl(g, COW_IMG(0x1025bba0u), 3, esi, arg3 - ebp, COW_IMG(0x1038acdcu));
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    else
    {
        ecx = t14;
        edx = t15;
        wr32(sp0 - 0x1cu, esi);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t16 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, esi);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    if (eax != 0u)
    {
        edi = eax;
        goto L_1025bd7c;
    }
    if (arg1 == 3u)
    {
        wr32(sp0 - 0x1cu, sp0 - 6u);
        wr32(sp0 - 0x20u, esi);
        g->edx = sp0 - 6u;
        g->esp = sp0 - 0x18u;
        t22 = cow_thiscall_cdecl(g, COW_IMG(0x1011daa0u), ecx, 2, esi, sp0 - 6u);
        t23 = g->ecx;
        t24 = g->edx;
        if (rd16(sp0 - 6u) == 0x856bu)
        {
            ecx = t23;
            edx = t24;
            goto L_1025bd6a;
        }
        eax = (t22 & 0xffff0000u) | rd16(sp0 - 6u);
        ecx = t23;
        edx = t24;
        if ((uint16_t)eax != 0x854bu) goto L_1025bd6f;
L_1025bd6a: ;
        loc_8 = (rd32(sp0 - 8u) & 0xffff00ffu) | 0x100u;
    }
L_1025bd6f: ;
    wr32(sp0 - 0x1cu, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t25 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, esi);
    t26 = g->ecx;
    t27 = g->edx;
    eax = t25;
    ecx = t26;
    edx = t27;
    edi = t25;
L_1025bdb3: ;
    ebp = ebp + edi;
    goto L_1025bdb5;
L_1025bd7c: ;
    wr32(sp0 - 0x1cu, COW_IMG(0x1038acdcu));
    t28 = arg3 - edi - ebp;
    wr32(sp0 - 0x20u, t28);
    t29 = arg2 + ebp + edi;
    wr32(sp0 - 0x24u, t29);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t30 = cow_cdecl(g, COW_IMG(0x1025bba0u), 3, t29, t28, COW_IMG(0x1038acdcu));
    t31 = g->ecx;
    t32 = g->edx;
    if (t30 != 0u)
    {
        eax = t30;
        ecx = t31;
        edx = t32;
        goto L_1025bdaf;
    }
    ecx = t31;
    edx = t32;
    ebx = t29;
    esi = t28;
    wr32(sp0 - 0x1cu, COW_IMG(0x1038ad04u));
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, ebx);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t33 = cow_cdecl(g, COW_IMG(0x1025bba0u), 3, ebx, esi, COW_IMG(0x1038ad04u));
    t34 = g->ecx;
    t35 = g->edx;
    if (t33 == 0u)
    {
        edx = t35;
        goto L_1025bdd1;
    }
    eax = t33;
    ecx = t34;
    edx = t35;
L_1025bdaf: ;
    goto L_1025bdb3;
L_1025bdc7: ;
    wr32(sp0 - 4u, 0u);
    eax = arg3;
    loc_4 = 0u;
    goto L_1025bde4;
L_1025bdd1: ;
    if (ebp + edi >= arg3)
    {
        eax = ebp + edi;
    }
    else
    {
        eax = ebp + edi;
        wr32(sp0 - 4u, eax);
        loc_4 = eax;
    }
    goto L_1025bde4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025bc00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025bc00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
