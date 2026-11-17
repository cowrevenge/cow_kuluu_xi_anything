/* f_0x1013c290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013c290(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(self + 0x1cu) == 0u) goto L_1013c4f9;
    wr8(self + 0x383u, 1u);
    if (rd8(self + 0x12cu) == 0u)
    {
        ecx = (self & 0xffffff00u) | rd8(self + 0x12cu);
        edx = in_edx;
        loc_c = 0u;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(self + 0x12cu);
        t1 = (self + 0x12cu & 0xffff0000u) | rd16(self + 0x34cu);
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 0x18u;
        t2 = cow_thiscall_cdecl(g, COW_IMG(0x101ca520u), ecx, 6, t1, self + 0x12cu, COW_IMG(0x1036fe74u), in_edi, in_esi, in_ebp);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
        loc_c = t2;
    }
    if (!(rd32(self + 0x374u) & 1u))
    {
        eax = rd32(self + 0x374u);
    }
    else
    {
        eax = rd32(self + 0x374u);
        wr8(self + 0x2cu, 0u);
    }
    if (rd8(self + 0x2cu) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x2cu);
        loc_4 = 0u;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x2cu);
        loc_4 = 1u;
    }
    if ((eax & 2u) != 0u)
    {
        wr8(self + 0xacu, 0u);
    }
    if (rd8(self + 0xacu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xacu);
        loc_8 = 0u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xacu);
        loc_8 = 1u;
    }
    if (rd8(self + 0x278u) == 0u)
    {
        ebx = 0u;
    }
    else
    {
        ebx = 1u;
    }
    if (rd8(self + 0x1b8u) == 0u)
    {
        loc_10 = 0u;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + 0x1b8u);
        t5 = (ecx & 0xffff0000u) | rd16(self + 0x34cu);
        g->eax = self + 0x1b8u;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x101ca520u), t5, 6, t5, self + 0x1b8u, COW_IMG(0x1036fe74u), in_edi, in_esi, in_ebp);
        t7 = g->edx;
        edx = t7;
        loc_10 = t6;
    }
    if (rd32(rd32(self + 0x1cu) + 0x154cu) == 0u)
    {
        eax = rd32(rd32(self + 0x1cu) + 0x154cu);
        ecx = rd32(self + 0x1cu);
        loc_14 = (uint8_t)rd32(sp0 - 0x14u);
        goto L_1013c3a0;
    }
    eax = rd32(rd32(self + 0x1cu) + 0x154cu);
    ecx = rd32(self + 0x1cu);
    loc_14 = (uint8_t)rd32(sp0 - 0x14u);
    if (rd8(eax) != 1u) goto L_1013c3a0;
    if ((int32_t)loc_10 > 0)
    {
        if (rd8(self + 0x2cu) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x2cu);
            goto L_1013c399;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0x2cu);
        if (rd8(self + 0xacu) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xacu);
            goto L_1013c399;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0xacu);
        if (rd8(self + 0x278u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x278u);
            goto L_1013c399;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0x278u);
        loc_14 = (loc_14 & 0xffff00ffu) | 0x100u;
    }
L_1013c3a5: ;
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t8 = cow_thiscall(g, COW_IMG(0x1015b1e0u), ecx, 1, 0u);
    if ((uint8_t)(loc_14 >> 8u) == 0u)
    {
        eax = 0xcu - ebx - loc_8 - loc_4 - loc_c - 1u;
        ecx = 0xcu - ebx - loc_8 - loc_4 - loc_c;
        ebx = loc_c;
        ebp = t8;
    }
    else
    {
        eax = 0xcu - ebx - loc_8 - loc_4 - loc_c - 1u;
        ecx = 0xcu - ebx - loc_8 - loc_4 - loc_c;
        ebx = loc_c;
        ebp = t8;
        eax = eax - 1u;
    }
    if ((int32_t)ebp <= 0)
    {
        edx = 0u;
        edi = 1u;
    }
    else
    {
        eax = eax - 1u;
        edx = 0u;
        edi = 1u;
L_1013c3d9: ;
        if ((int32_t)edx >= (int32_t)eax) goto L_1013c3ef;
        wr8(edi + self + 0x383u, (uint8_t)((uint8_t)edx + 0xau));
        if ((int32_t)(edx + 1u) < (int32_t)ebp)
        {
            ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)edx + 0xau);
            edx = edx + 1u;
            edi = edi + 1u;
            goto L_1013c3d9;
        }
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)edx + 0xau);
        edx = edx + 1u;
        edi = edi + 1u;
    }
L_1013c3ef: ;
    if ((uint8_t)(loc_14 >> 0x10u) == 0u)
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)(loc_14 >> 0x10u);
        ebp = loc_10;
    }
    else
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)(loc_14 >> 0x10u);
        ebp = loc_10;
        if ((int32_t)ebp <= 0)
        {
            eax = 0u;
        }
        else
        {
            ecx = ecx - edi;
            eax = 0u;
            ecx = ecx - 1u;
L_1013c404: ;
            if ((int32_t)eax >= (int32_t)ecx) goto L_1013c41a;
            wr8(edi + self + 0x383u, (uint8_t)((uint8_t)eax + 0x1eu));
            if ((int32_t)(eax + 1u) < (int32_t)ebp)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x1eu);
                eax = eax + 1u;
                edi = edi + 1u;
                goto L_1013c404;
            }
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x1eu);
            eax = eax + 1u;
            edi = edi + 1u;
        }
    }
L_1013c41a: ;
    if (rd8(self + 0x12cu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x12cu);
    }
    else
    {
        if ((int32_t)loc_c <= 0)
        {
            eax = 0u;
            goto L_1013c440;
        }
        eax = 0u;
        ecx = loc_c;
L_1013c42e: ;
        wr8(edi + self + 0x383u, (uint8_t)((uint8_t)eax + 0x32u));
        if ((int32_t)(eax + 1u) < (int32_t)ecx)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x32u);
            eax = eax + 1u;
            edi = edi + 1u;
            goto L_1013c42e;
        }
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x32u);
        eax = eax + 1u;
        edi = edi + 1u;
    }
L_1013c440: ;
    if (rd8(self + 0x2cu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x2cu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x2cu);
        wr8(edi + self + 0x383u, 0x3cu);
        edi = edi + 1u;
    }
    if (rd8(self + 0xacu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xacu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xacu);
        wr8(edi + self + 0x383u, 0x3du);
        edi = edi + 1u;
    }
    if (rd8(self + 0x278u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x278u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x278u);
        wr8(edi + self + 0x383u, 0x3eu);
        edi = edi + 1u;
    }
    if (loc_14 >> 0x18u == 0u)
    {
        eax = (eax & 0xffffff00u) | loc_14 >> 0x18u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | loc_14 >> 0x18u;
        if (rd8(edi + self + 0x382u) == 0x3cu)
        {
            eax = (eax & 0xffffff00u) | rd8(edi + self + 0x382u);
            goto L_1013c491;
        }
        eax = (eax & 0xffffff00u) | rd8(edi + self + 0x382u);
        if ((uint8_t)eax == 0x3du) goto L_1013c491;
        if ((uint8_t)eax != 0x3eu) goto L_1013c49a;
L_1013c491: ;
        wr8(edi + self + 0x382u, (uint8_t)((uint8_t)eax + 0xau));
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0xau);
    }
L_1013c49a: ;
    if ((uint8_t)(loc_14 >> 8u) == 0u)
    {
        edx = (edx & 0xffffff00u) | 0x50u;
    }
    else
    {
        edx = (edx & 0xffffff00u) | 0x50u;
        wr8(edi + self + 0x383u, (uint8_t)edx);
    }
    if ((int32_t)ebp <= 0) goto L_1013c4f9;
    if ((uint8_t)ebx == 1u) goto L_1013c4f9;
    wr8(self + 0x38fu, 1u);
    if ((int32_t)ebp <= 0)
    {
        eax = 0u;
        ecx = 1u;
        goto L_1013c4d9;
    }
    eax = 0u;
    ecx = 1u;
L_1013c4c7: ;
    wr8(ecx + self + 0x38fu, (uint8_t)((uint8_t)eax + 0x1eu));
    if ((int32_t)(eax + 1u) < (int32_t)ebp)
    {
        ecx = ecx + 1u;
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x1eu);
        eax = eax + 1u;
        goto L_1013c4c7;
    }
    eax = eax + 1u;
    ecx = ecx + 1u;
L_1013c4d9: ;
    if (rd8(self + 0x278u) == 0u) goto L_1013c4f2;
    wr8(ecx + self + 0x38fu, 0x48u);
    return;
L_1013c399: ;
    loc_14 = (loc_14 & 0xffffffu) | 0x1000000u;
    goto L_1013c3a5;
L_1013c3a0: ;
    loc_14 = (loc_14 & 0xff00ffffu) | 0x10000u;
    goto L_1013c3a5;
L_1013c4f2: ;
    wr8(ecx + self + 0x38fu, (uint8_t)edx);
L_1013c4f9: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013c290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013c290(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
