/* f_0x101011c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101011c0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    t1 = rd8(rd32(sp0 + 8u) + 2u) & 3u;
    t2 = rd32(sp0 + 8u);
    t3 = rd32(sp0 + 4u);
    wr32(t3 + 0x134u, t1);
    t4 = rd8(t2 + 2u) >> 2u & 0x1fu;
    wr32(t3 + 0x138u, t4);
    if ((rd16(t2 + 2u) & 0x7cu) != 0x3cu)
    {
        eax = (t1 & 0xffff0000u) | rd16(t2 + 2u);
        ecx = t2;
        ebp = t3;
        t5 = ((int32_t)(rd16(COW_IMG(0x10331ca8u) + (eax >> 2u & 0x1fu) * 2u) - rd16(ecx + 4u)) < 0) - 1u & rd16(COW_IMG(0x10331ca8u) + (eax >> 2u & 0x1fu) * 2u) - rd16(ecx + 4u);
        wr32(ebp + 0x13cu, t5);
    }
    else
    {
        ecx = t2;
        ebp = t3;
        wr32(ebp + 0x13cu, 0u);
    }
    wr32(sp0 + 4u, ebp + 0x128u);
    edx = ebp + 0x128u;
    ebx = in_ebx;
    esi = 0u;
    edi = in_edi;
    loc_8 = ecx + 7u;
    ecx = ecx + 7u;
    loc_4 = 3u;
L_1010124e: ;
    t6 = (ebx & 0xffff0000u) | rd8(ecx - 1u);
    t7 = rd8(ecx);
    wr8(sp0 + 8u, 0u);
    if ((rd16(COW_IMG(0x10331aa8u) + (uint16_t)t6 * 2u) >> 8u & 8u) == 0u)
    {
        ecx = (ecx & 0xffff0000u) | rd16(COW_IMG(0x10331aa8u) + (uint16_t)t6 * 2u);
        ebx = t6;
        edi = ((edi & 0xffff0000u) | t7) + 1u;
        edx = ecx & 0x7ffu;
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(COW_IMG(0x10331aa8u) + (uint16_t)t6 * 2u);
        ebx = t6;
        edi = ((edi & 0xffff0000u) | t7) + 1u;
        wr8(sp0 + 8u, 1u);
        edx = ecx & 0x7fu;
    }
    if ((uint16_t)edx != 0u)
    {
        eax = (ecx >> 0xcu & 0xffffff00u) | (ecx >> 0xcu & 1u);
        if ((uint16_t)ecx >> 0xeu == 1u) goto L_101012af;
        ecx = ((uint16_t)ecx >> 0xeu) - 1u;
        if (ecx != 1u) goto L_101012b8;
        wr32(ebp + esi * 8u, 0x80u);
L_101012b7: ;
        esi = esi + 1u;
L_101012b8: ;
        if ((uint16_t)ebx >= 2u)
        {
            if ((uint16_t)ebx <= 0x5fu)
            {
                if (ebx & 1u)
                {
                    edi = edi + 0x100u;
                }
            }
        }
        if ((uint8_t)eax != 0u)
        {
            edi = -edi;
        }
        if (rd8(sp0 + 8u) == 0u)
        {
            wr32(ebp + esi * 8u + 4u, (uint32_t)(int16_t)edi);
            wr32(ebp + esi * 8u, (uint16_t)edx);
            esi = esi + 1u;
        }
        else
        {
            ecx = 0u;
            cf = 0u;
            pf = PARITY((uint8_t)edx);
            zf = (uint16_t)edx == 0u;
            sf = (int32_t)(uint16_t)edx < 0;
            edx = (uint16_t)edx;
            of = 0u;
L_101012e5: ;
            if ((edx & 1u << (ecx & 0x1fu)) != 0u)
            {
                wr32(ebp + esi * 8u, ecx + 0xbu);
                wr32(ebp + esi * 8u + 4u, (uint32_t)(int16_t)edi);
                esi = esi + 1u;
            }
            if ((int32_t)(ecx + 1u) < 7)
            {
                cf = ecx + 1u < 7u;
                pf = PARITY((uint8_t)(ecx - 6u));
                zf = ecx == 6u;
                sf = (int32_t)(ecx - 6u) < 0;
                of = ((ecx + 1u ^ 7u) & (ecx + 1u ^ ecx - 6u)) >> 0x1fu;
                ecx = ecx + 1u;
                goto L_101012e5;
            }
        }
        wr32(rd32(sp0 + 4u), esi);
    }
    t8 = rd32(sp0 + 4u) + 4u;
    wr32(sp0 + 4u, t8);
    if (loc_4 != 1u)
    {
        edx = t8;
        loc_8 = loc_8 + 2u;
        loc_4 = loc_4 - 1u;
        goto L_1010124a;
    }
    return esi;
L_1010124a: ;
    ecx = loc_8;
    goto L_1010124e;
L_101012af: ;
    wr32(ebp + esi * 8u, 0x7fdu);
    goto L_101012b7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101011c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101011c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
