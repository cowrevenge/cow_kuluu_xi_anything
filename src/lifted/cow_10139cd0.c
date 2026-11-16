/* f_0x10139cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10139cd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    eax = self + 0x18u;
    ecx = 8u;
    edx = (in_edx & 0xffffff00u) | 1u;
    ebx = in_ebx;
L_10139cdf: ;
    if (rd8(eax + 3u) == 0u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(eax + 3u);
    }
    else
    {
        ebx = (ebx & 0xffffff00u) | rd8(eax + 3u);
        if (rd16(eax) != 0u)
        {
            edx = edx & 0xffffff00u;
        }
    }
    if (ecx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx - 1u;
        goto L_10139cdf;
    }
    ecx = ecx - 1u;
    if (rd32(self + 0x3cu) == 0u)
    {
        eax = rd32(self + 0x3cu);
        goto L_10139d12;
    }
    wr16(self + 0x14u, 0xffffu);
    wr8(self + 0x17u, 1u);
L_10139d05: ;
    if (rd32(self + 0x44u) != 0u) goto L_10139d1c;
    eax = rd32(self + 0x44u);
    return eax & 0xffffff00u;
L_10139d12: ;
    if ((uint8_t)edx == 0u) goto L_10139d05;
    return eax & 0xffffff00u;
L_10139d1c: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x36u, 0u, 0u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10139d34;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_10139d34: ;
    ecx = self + 0x16u;
    ebx = ebx & 0xffffff00u;
    ebp = 9u;
    loc_4 = self & 0xffffff00u;
L_10139d44: ;
    if (rd8(ecx + 1u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        if (rd16(ecx - 2u) == 0u)
        {
            edx = (edx & 0xffff0000u) | rd16(ecx - 2u);
        }
        else
        {
            edx = (edx & 0xffff0000u) | rd16(ecx - 2u);
            wr8(eax + (uint8_t)loc_4 + 0x30u, rd8(ecx));
            if ((uint16_t)edx != 0xffffu)
            {
                esi = (uint8_t)loc_4;
                edx = rd8(ecx + 1u);
            }
            else
            {
                esi = (uint8_t)loc_4;
                edx = rd32(self + 0x3cu);
            }
            wr32(eax + esi * 4u + 8u, edx);
            loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
            ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
        }
    }
    if (ebp != 1u)
    {
        ecx = ecx + 4u;
        ebp = ebp - 1u;
        goto L_10139d44;
    }
    ecx = ecx + 4u;
    t3 = rd16(self + 0x44u);
    wr16(eax + 0x3au, (uint16_t)t3);
    t4 = rd32(self + 0x48u);
    wr32(eax + 4u, t4);
    wr8(eax + 0x3cu, (uint8_t)ebx);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x40u, 0u);
    wr32(self + 0x44u, 0u);
    return (t5 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10139cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10139cd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
