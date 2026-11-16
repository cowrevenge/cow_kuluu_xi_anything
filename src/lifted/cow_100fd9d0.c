/* f_0x100fd9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_100fd9d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)rd16(arg1) < 0x20u)
    {
        eax = (in_eax & 0xffffff00u) | 1u;
        ecx = (self & 0xffff0000u) | rd16(arg1);
    }
    else
    {
        ecx = (self & 0xffff0000u) | rd16(arg1);
        wr16(arg1, ecx & 0xff00u);
        eax = in_eax & 0xffffff00u;
        ecx = ecx & 0xff00u;
    }
    if (rd8(arg1 + 1u) < 1u)
    {
        ecx = (ecx & 0xffff0000u) | rd8(arg1 + 1u);
        goto L_100fda06;
    }
    ecx = (ecx & 0xffff0000u) | rd8(arg1 + 1u);
    if ((uint16_t)ecx < 0x20u) goto L_100fda17;
L_100fda06: ;
    t1 = rd8(arg1);
    wr16(arg1, (uint16_t)(t1 + 0x100u));
    eax = t1 + 0x100u & 0xffffff00u;
L_100fda17: ;
    edx = arg1 + 2u;
    ebx = 8u;
    esi = in_esi;
    edi = COW_IMG(0x103624b8u);
L_100fda24: ;
    t2 = (ecx & 0xffff0000u) | rd16(edx);
    if ((t2 & 0xf000u) != rd16(edi))
    {
        ecx = t2;
        esi = (esi & 0xffff0000u) | rd16(edi);
        goto L_100fda43;
    }
    ecx = t2;
    esi = (esi & 0xffff0000u) | rd16(edi);
    if ((ecx & 0xfffu) < rd16(edi + 2u))
    {
        ecx = ecx & 0xfffu;
        goto L_100fda48;
    }
    ecx = ecx & 0xfffu;
L_100fda43: ;
    wr16(edx, (uint16_t)esi);
    eax = eax & 0xffffff00u;
L_100fda48: ;
    if (ebx != 1u)
    {
        edx = edx + 2u;
        ebx = ebx - 1u;
        edi = edi + 4u;
        goto L_100fda24;
    }
    edx = edx + 2u;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fd9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fd9d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
