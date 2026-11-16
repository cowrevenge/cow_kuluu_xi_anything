/* f_0x1021c680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1021c680(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        loc_4 = self;
        goto L_1021c77d;
    }
    t1 = rd32(sp0 + 4u);
    wr8(self + (uint8_t)t1 + 0x1368u, 0u);
    eax = (uint8_t)t1;
    edx = in_edx;
    ebx = t1;
    loc_4 = self & 0xffffff00u;
L_1021c6ac: ;
    if (rd8(self + (uint8_t)loc_4 + 0x18u) > 0x51u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + (uint8_t)loc_4 + 0x18u);
        ecx = loc_4;
        goto L_1021c787;
    }
    eax = (eax & 0xffffff00u) | rd8(self + (uint8_t)loc_4 + 0x18u);
    ecx = loc_4;
    edi = (uint8_t)loc_4;
    wr8(sp0 + 4u, 0u);
    if ((uint8_t)eax != 0u)
    {
        ecx = ecx & 0xffffff00u;
        ebp = edi * 0x51u;
L_1021c6d9: ;
        t2 = rd32(sp0 + 4u);
        if (rd8(ebp * 8u + self + (uint8_t)t2 * 8u + 0x80au) == (uint8_t)ebx)
        {
            eax = t2;
            edx = ebp + (uint8_t)t2;
            goto L_1021c700;
        }
        eax = t2;
        edx = ebp + (uint8_t)t2;
        t3 = rd8(edi + self + 0x18u);
        wr8(sp0 + 4u, (uint8_t)((uint8_t)ecx + 1u));
        if ((uint8_t)((uint8_t)ecx + 1u) < (uint8_t)t3)
        {
            ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
            goto L_1021c6d9;
        }
        eax = (eax & 0xffffff00u) | t3;
    }
L_1021c76b: ;
    if ((uint8_t)((uint8_t)loc_4 + 1u) < 4u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
        loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
        goto L_1021c6ac;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
    loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
L_1021c77d: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1021c700: ;
    if (rd8(edi + self + 0x18u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(edi + self + 0x18u);
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(edi + self + 0x18u);
        wr8(edi + self + 0x18u, (uint8_t)((uint8_t)edx - 1u));
        if ((uint8_t)ecx < (uint8_t)((uint8_t)edx - 1u))
        {
L_1021c718: ;
            wr8(sp0 + 4u, (uint8_t)((uint8_t)ecx + 1u));
            t4 = rd32(ebp * 8u + self + (uint8_t)eax * 8u + 0x80cu);
            wr32(ebp * 8u + self + (uint8_t)eax * 8u + 0x804u, t4);
            t5 = rd32(ebp * 8u + self + (uint8_t)eax * 8u + 0x810u);
            wr32(ebp * 8u + self + (uint8_t)eax * 8u + 0x808u, t5);
            if ((uint8_t)((uint8_t)ecx + 1u) < rd8(edi + self + 0x18u))
            {
                ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
                goto L_1021c714;
            }
        }
        t6 = rd8(edi + self + 0x18u);
        wr32(ebp * 8u + self + t6 * 8u + 0x804u, 0u);
        wr32(ebp * 8u + self + t6 * 8u + 0x808u, 0u);
        wr32(self + 8u, 0x52u);
        eax = 0u;
        edx = ebp * 8u + self + t6 * 8u + 0x804u;
    }
    goto L_1021c76b;
L_1021c714: ;
    eax = rd32(sp0 + 4u);
    goto L_1021c718;
L_1021c787: ;
    wr8(self + (uint8_t)ecx + 0x18u, 0x51u);
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021c680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021c680(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
