/* f_0x102cec10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102cec10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 4u);
    t2 = rd32(rd32(sp0 + 0xcu) + 0x34u);
    t3 = rd32(sp0 + 0xcu);
    wr32(t3 + 0x3cu, t1);
    t4 = rd32(t3 + 0x30u);
    wr32(t3 + 0x44u, 0u);
    if ((int32_t)t4 <= 0)
    {
        ecx = t4;
        edx = in_edx;
        ebp = t2;
        esi = t3;
    }
    else
    {
        ebp = t2;
        esi = t3;
        eax = 0u;
        ecx = esi + 0x58u;
L_102cec37: ;
        wr32(arg2 + eax * 4u, rd32(ecx));
        if ((int32_t)(eax + 1u) < (int32_t)rd32(esi + 0x30u))
        {
            eax = eax + 1u;
            ecx = ecx + 0x1b40u;
            goto L_102cec37;
        }
        ecx = ecx + 0x1b40u;
        edx = arg2;
    }
    t5 = rd32(esi + 0x30u);
    wr32(sp0 + 0xcu, 0u);
    if ((int32_t)t5 <= 0)
    {
        edi = 0u;
    }
    else
    {
        eax = t5;
        wr32(sp0 + 4u, esi + 0x50u);
        ebx = esi + 0x50u;
        edi = 0u;
L_102cec64: ;
        if (rd32(ebx) != 0u)
        {
            eax = rd32(esi + 0x34u) + rd32(esi + 0x3cu);
            ecx = rd32(esi + 0x3cu);
L_102cec71: ;
            if (rd8(eax - 1u) != 0xf8u)
            {
                eax = eax - 1u;
                goto L_102cec7e;
            }
            edx = (edx & 0xffffff00u) | rd8(eax - 1u);
            eax = eax - 1u;
            if (eax > ecx) goto L_102cec71;
L_102cec7e: ;
            if (eax <= ecx)
            {
                edx = (uint32_t)((int32_t)(rd32(esi + 0x40u) + 7u) >> 3u);
                ebp = eax - (uint32_t)((int32_t)(rd32(esi + 0x40u) + 7u) >> 3u) - ecx + 1u;
                goto L_102ceca4;
            }
            edx = (uint32_t)((int32_t)(rd32(esi + 0x40u) + 7u) >> 3u);
            ebp = eax - (uint32_t)((int32_t)(rd32(esi + 0x40u) + 7u) >> 3u) - ecx + 1u;
L_102cec92: ;
            t6 = rd8(eax);
            t7 = rd8(ecx);
            wr8(eax, (uint8_t)t7);
            wr8(ecx, (uint8_t)t6);
            if (eax - 1u > ecx + 1u)
            {
                eax = eax - 1u;
                ecx = ecx + 1u;
                edx = (edx & 0xffffff00u) | t6;
                ebx = (ebx & 0xffffff00u) | t7;
                goto L_102cec92;
            }
            eax = eax - 1u;
            ecx = ecx + 1u;
            edx = (edx & 0xffffff00u) | t6;
            ebx = rd32(sp0 + 4u);
        }
L_102ceca4: ;
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, COW_IMG(0x102ced70u), ecx, 6, esi, ebx, edi, in_edi, in_esi, in_ebp);
        if ((int32_t)rd32(esi + 0x40u) <= (int32_t)(ebp * 8u + 0x10u))
        {
            eax = rd32(esi + 0x40u);
        }
        else
        {
            eax = rd32(esi + 0x40u);
            wr32(esi + 0x44u, rd32(esi + 0x44u) | 2u);
        }
        if (rd32(esi + 0x38u) == 0u)
        {
            ecx = rd32(esi + 0x34u);
            edx = rd32(esi + 0x38u);
            edi = edi + rd32(esi + 0x34u);
            if (rd32(esi + 0x1b90u) == 0u)
            {
                ebp = ebp + ecx;
            }
        }
        else
        {
            ecx = rd32(esi + 0x34u);
            if (rd32(esi + 0x1b90u) == 0u)
            {
                edx = rd32(esi + 0x3cu);
                edi = (uint32_t)((int32_t)(eax + 7u) >> 3u);
            }
            else
            {
                edx = rd32(esi + 0x3cu);
                edi = (uint32_t)((int32_t)(eax + 7u) >> 3u);
                t8 = (rd32(esi + 0x44u) & 0xffffff00u) | (uint8_t)(rd32(esi + 0x44u) | 2u);
                wr32(esi + 0x44u, t8);
            }
            if ((int32_t)edi >= (int32_t)ecx) goto L_102ced05;
L_102cecec: ;
            if (rd8(edi + edx) != 0u) goto L_102ced05;
            if ((int32_t)(edi + 1u) < (int32_t)ecx)
            {
                edi = edi + 1u;
                goto L_102cecec;
            }
            edi = edi + 1u;
        }
L_102ced05: ;
        t9 = rd32(sp0 + 0xcu) + 1u;
        t10 = rd32(esi + 0x30u);
        t11 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t9);
        wr32(sp0 + 4u, ebx + 0x1b40u);
        if ((int32_t)(t11 + 1u) < (int32_t)t10)
        {
            eax = t9;
            ecx = t10;
            ebx = ebx + 0x1b40u;
            goto L_102cec64;
        }
        ecx = t10;
    }
    if ((int32_t)rd32(esi + 0x30u) > 0)
    {
        eax = rd32(esi + 0x30u);
        ebx = 0u;
        ebp = esi + 0x58u;
L_102ced2f: ;
        g->esp = sp0 - 0x10u;
        cow_thiscall_cdecl(g, rd32(esi + 0x36d0u), ecx, 1, rd32(ebp));
        t12 = g->ecx;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(esi + 0x30u))
        {
            eax = rd32(esi + 0x30u);
            ecx = t12;
            ebx = ebx + 1u;
            ebp = ebp + 0x1b40u;
            goto L_102ced2f;
        }
    }
    if (rd32(esi + 0x44u) == 0u) goto L_102ced5a;
    esi = rd32(esi + 0x44u);
    return -esi;
L_102ced5a: ;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cec10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cec10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
