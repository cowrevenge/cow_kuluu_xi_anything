/* f_0x101f8020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101f8020(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;

    wr32(self + 0x6ccu, 0x58494d4bu);
    ecx = self + 0x6d6u;
    edx = in_edx;
    ebp = in_ebp;
    esi = self + 0x17au;
    loc_4 = 0u;
L_101f8041: ;
    eax = esi;
    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 3u);
    edi = 0xau;
L_101f804f: ;
    wr8(ecx + 0x12u, 0u);
    wr16(ecx - 2u, 0u);
    wr16(ecx, 0u);
    wr8(ecx + 2u, 0u);
    wr16(eax - 6u, 0u);
    wr8(eax - 4u, (uint8_t)edx);
    t1 = rd16(ecx - 2u);
    wr16(eax, (uint16_t)t1);
    t2 = rd16(ecx);
    wr16(eax + 2u, (uint16_t)t2);
    wr16(eax + 4u, 0x10u);
    wr16(eax + 6u, 1u);
    wr32(eax + 0x12u, ecx + 2u);
    wr16(eax + 0xau, 2u);
    if (edi != 1u)
    {
        eax = eax + 0x20u;
        ecx = ecx + 0x16u;
        ebp = ((ebp | t1) & 0xffff0000u) | t2;
        edi = edi - 1u;
        goto L_101f804f;
    }
    eax = eax + 0x20u;
    ecx = ecx + 0x16u;
    ebp = ((ebp | t1) & 0xffff0000u) | t2;
    if ((int32_t)(loc_4 + 1u) < 2)
    {
        esi = eax;
        loc_4 = loc_4 + 1u;
        goto L_101f8041;
    }
    loc_4 = loc_4 + 1u;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f8020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f8020(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
