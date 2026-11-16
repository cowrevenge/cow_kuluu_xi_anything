/* f_0x10198c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10198c30(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x20u);
        if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
        {
            ecx = rd32(COW_IMG(0x10456a28u));
            edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            edi = rd32(eax + rd32(self + 0x24u) * 0x10u + 8u);
            eax = eax + rd32(self + 0x24u) * 0x10u;
            goto L_10198c61;
        }
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edi = rd32(eax + rd32(self + 0x24u) * 0x10u + 8u);
        eax = eax + rd32(self + 0x24u) * 0x10u;
        if (edx == 2u) goto L_10198c65;
        if (edx == 3u) goto L_10198c65;
L_10198c61: ;
        if (edx == 0u) goto L_10198c6c;
L_10198c65: ;
        ebx = 0x10u;
L_10198c71: ;
        t1 = rd32(eax + 4u);
        g->eax = eax;
        g->edx = t1;
        g->esp = sp0 - 0x10u;
        t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t1);
        t3 = g->edx;
        t4 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x14u;
        t5 = ebx + (uint32_t)(int16_t)rd16(self + 0x14u);
        g->ebx = ebx;
        g->eax = t4;
        g->edx = t3;
        t6 = cow_cdecl(g, COW_IMG(0x101907e0u), 3, t5, t4, t2);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_10198c6c: ;
    ebx = 0x1eu;
    goto L_10198c71;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10198c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10198c30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
