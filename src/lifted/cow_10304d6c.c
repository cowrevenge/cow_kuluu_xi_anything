/* f_0x10304d6c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10304d6c(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = rd32(rd32(sp0 + 4u) + 0x168u);
    t2 = rd32(rd32(sp0 + 4u) + 0x194u);
    t3 = rd32(sp0 + 4u);
    wr8(sp0 + 7u, t1 == 0u);
    if (rd8(sp0 + 7u) == 0u)
    {
        eax = t1;
        ebx = t2;
        esi = t3;
        loc_c = t2;
        if ((int32_t)eax > (int32_t)rd32(esi + 0x16cu))
        {
            ecx = rd32(esi + 0x16cu);
            goto L_10304dad;
        }
        ecx = rd32(esi + 0x16cu);
        if ((int32_t)ecx < 64)
        {
            edx = in_edx & 0xffffff00u;
            goto L_10304daf;
        }
L_10304dad: ;
        edx = (in_edx & 0xffffff00u) | 1u;
L_10304daf: ;
        zf = rd32(esi + 0x120u) == 1u;
    }
    else
    {
        ebx = t2;
        esi = t3;
        loc_c = t2;
        ecx = self;
        edx = in_edx & 0xffffff00u;
        zf = rd32(esi + 0x16cu) == 0u;
    }
    if (!zf)
    {
        edx = (edx & 0xffffff00u) | 1u;
    }
    if (rd32(esi + 0x170u) != 0u)
    {
        eax = rd32(esi + 0x170u);
        if (rd32(esi + 0x174u) != eax - 1u)
        {
            edx = (edx & 0xffffff00u) | 1u;
        }
    }
    if ((int32_t)rd32(esi + 0x174u) > 13)
    {
        edx = (edx & 0xffffff00u) | 1u;
    }
    if ((uint8_t)edx != 0u)
    {
        wr32(rd32(esi) + 0x14u, 0xeu);
        t4 = rd32(esi + 0x168u);
        wr32(rd32(esi) + 0x18u, t4);
        t5 = rd32(esi + 0x16cu);
        wr32(rd32(esi) + 0x1cu, t5);
        t6 = rd32(esi + 0x170u);
        wr32(rd32(esi) + 0x20u, t6);
        t7 = rd32(esi + 0x174u);
        wr32(rd32(esi) + 0x24u, t7);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall_cdecl(g, rd32(rd32(esi)), t7, 1, esi);
        t8 = g->edx;
        ecx = esi;
        edx = t8;
    }
    if ((int32_t)rd32(esi + 0x120u) > 0)
    {
        loc_8 = 0u;
        loc_10 = esi + 0x124u;
L_10304e31: ;
        t9 = rd32(rd32(loc_10) + 4u);
        if (rd8(sp0 + 7u) != 0u)
        {
            eax = t9;
            ebx = t9 * 0x100u + rd32(esi + 0x8cu);
            loc_14 = t9;
        }
        else
        {
            eax = t9;
            ebx = t9 * 0x100u + rd32(esi + 0x8cu);
            loc_14 = t9;
            if ((int32_t)rd32(ebx) < 0)
            {
                wr32(rd32(esi) + 0x14u, 0x6fu);
                t10 = rd32(esi);
                wr32(t10 + 0x18u, eax);
                wr32(rd32(esi) + 0x1cu, 0u);
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                cow_thiscall(g, rd32(rd32(esi) + 4u), t10, 0);
                t11 = g->edx;
                eax = loc_14;
                ecx = 0xffffffffu;
                edx = t11;
            }
        }
        edi = rd32(esi + 0x168u);
L_10304eb4: ;
        if ((int32_t)edi <= (int32_t)rd32(esi + 0x16cu)) goto L_10304e79;
        if ((int32_t)(loc_8 + 1u) < (int32_t)rd32(esi + 0x120u))
        {
            loc_8 = loc_8 + 1u;
            loc_10 = loc_10 + 4u;
            goto L_10304e31;
        }
        ebx = loc_c;
    }
    if (rd32(esi + 0x170u) != 0u)
    {
        if (rd8(sp0 + 7u) == 0u)
        {
            wr32(ebx + 4u, COW_IMG(0x103049feu));
        }
        else
        {
            wr32(ebx + 4u, COW_IMG(0x1030491cu));
        }
    }
    else
    {
        if (rd8(sp0 + 7u) == 0u)
        {
            wr32(ebx + 4u, COW_IMG(0x103046f3u));
        }
        else
        {
            wr32(ebx + 4u, COW_IMG(0x103044f6u));
        }
    }
    if ((int32_t)rd32(esi + 0x120u) > 0)
    {
        loc_8 = 0u;
        loc_10 = esi + 0x124u;
        loc_14 = ebx + 0x24u;
L_10304f2b: ;
        if (rd8(sp0 + 7u) == 0u)
        {
            eax = rd32(loc_10);
            goto L_10304f83;
        }
        eax = rd32(loc_10);
        if (rd32(esi + 0x170u) != 0u) goto L_10304fd5;
        if ((int32_t)rd32(eax + 0x14u) < 0)
        {
            edi = rd32(eax + 0x14u);
            goto L_10304f58;
        }
        edi = rd32(eax + 0x14u);
        if ((int32_t)edi >= 4) goto L_10304f58;
        if (rd32(edi * 4u + esi + 0xa0u) != 0u) goto L_10304f6c;
L_10304f58: ;
        wr32(rd32(esi) + 0x14u, 0x31u);
        wr32(rd32(esi) + 0x18u, edi);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall_cdecl(g, rd32(rd32(esi)), ecx, 1, esi);
        t15 = g->edx;
        ecx = esi;
        edx = t15;
L_10304f6c: ;
        t16 = edi * 4u + loc_c + 0x38u;
        t17 = rd32(edi * 4u + esi + 0xa0u);
        g->ecx = ecx;
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10303b89u), g->eax, g->ecx, edx, 1, 5, esi, t17, t16, in_edi, in_esi);
        t18 = g->ecx;
        t19 = g->edx;
        ecx = t18;
        edx = t19;
L_10304fcd: ;
        ebx = loc_c;
L_10304fd5: ;
        wr32(loc_14, 0u);
        if ((int32_t)(loc_8 + 1u) < (int32_t)rd32(esi + 0x120u))
        {
            loc_8 = loc_8 + 1u;
            loc_10 = loc_10 + 4u;
            loc_14 = loc_14 + 4u;
            goto L_10304f2b;
        }
    }
    wr8(ebx + 0x18u, 0u);
    wr32(ebx + 0x14u, 0u);
    wr32(ebx + 0x10u, 0u);
    wr32(ebx + 0x20u, 0u);
    t25 = rd32(esi + 0xfcu);
    wr32(ebx + 0x34u, t25);
    g->edx = edx;
    return t25;
L_10304e79: ;
    if ((int32_t)rd32(ebx + edi * 4u) >= 0)
    {
        ecx = rd32(ebx + edi * 4u);
    }
    else
    {
        ecx = 0u;
    }
    if (rd32(esi + 0x170u) != ecx)
    {
        wr32(rd32(esi) + 0x14u, 0x6fu);
        t12 = rd32(esi);
        wr32(t12 + 0x18u, eax);
        wr32(rd32(esi) + 0x1cu, edi);
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, rd32(rd32(esi) + 4u), t12, 0);
        t13 = g->edx;
        eax = loc_14;
        edx = t13;
    }
    t14 = rd32(esi + 0x174u);
    wr32(ebx + edi * 4u, t14);
    ecx = t14;
    edi = edi + 1u;
    goto L_10304eb4;
L_10304f83: ;
    if ((int32_t)rd32(eax + 0x18u) < 0)
    {
        edi = rd32(eax + 0x18u);
        goto L_10304f99;
    }
    edi = rd32(eax + 0x18u);
    if ((int32_t)edi >= 4) goto L_10304f99;
    if (rd32(edi * 4u + esi + 0xb0u) != 0u) goto L_10304fad;
L_10304f99: ;
    wr32(rd32(esi) + 0x14u, 0x31u);
    wr32(rd32(esi) + 0x18u, edi);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall_cdecl(g, rd32(rd32(esi)), ecx, 1, esi);
    t20 = g->edx;
    ecx = esi;
    edx = t20;
L_10304fad: ;
    t21 = edi * 4u + loc_c + 0x38u;
    t22 = rd32(edi * 4u + esi + 0xb0u);
    g->ecx = ecx;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10303b89u), g->eax, g->ecx, edx, 1, 5, esi, t22, t21, in_edi, in_esi);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(loc_c + 0x48u, rd32(t21));
    ecx = t23;
    edx = t24;
    goto L_10304fcd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10304d6c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10304d6c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
