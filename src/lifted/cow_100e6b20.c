/* f_0x100e6b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e6b20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(COW_IMG(0x104df770u));
    wr16(t1 + 0x132u, 0u);
    eax = t1;
    edx = in_edx;
    esi = 0u;
    edi = 0u;
L_100e6b35: ;
    t2 = edi + rd32(COW_IMG(0x104df770u)) + 0xa90u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x100e7b20u), 2, esi, t2);
    t4 = g->edx;
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        edx = t4;
        ebx = t2;
        if (!(rd32(ebx + 0x98u) & 1u))
        {
            eax = rd32(ebx + 0x98u) & 1u;
        }
        else
        {
            wr8(edi + rd32(COW_IMG(0x104df770u)) + 0xb88u, (int32_t)esi >= 200);
            wr16(rd32(COW_IMG(0x104df770u)) + (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x104df770u)) + 0x132u) * 2u + 0x832u, (uint16_t)esi);
            t5 = rd32(COW_IMG(0x104df770u));
            wr16(t5 + 0x132u, (uint16_t)(rd16(t5 + 0x132u) + 1u));
            eax = t5;
            edx = (edx & 0xffffff00u) | (int32_t)esi >= 200;
        }
    }
    if ((int32_t)(edi + 0x100u) < 76800)
    {
        esi = esi + 1u;
        edi = edi + 0x100u;
        goto L_100e6b35;
    }
    if ((int16_t)rd16(rd32(COW_IMG(0x104df770u)) + 0x132u) >= 300)
    {
        ecx = rd32(COW_IMG(0x104df770u));
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x104df770u)) + 0x132u);
        ecx = rd32(COW_IMG(0x104df770u));
        eax = eax * 2u + 0x832u;
L_100e6bc1: ;
        wr16(eax + ecx, 0xffffu);
        if ((int32_t)(eax + 2u) < 2698)
        {
            eax = eax + 2u;
            ecx = rd32(COW_IMG(0x104df770u));
            goto L_100e6bc1;
        }
        ecx = rd32(COW_IMG(0x104df770u));
    }
    wr16(ecx + 0x830u, rd16(ecx + 0x132u));
    return (rd32(COW_IMG(0x104df770u)) & 0xffff0000u) | rd16(rd32(COW_IMG(0x104df770u)) + 0x132u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e6b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e6b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
