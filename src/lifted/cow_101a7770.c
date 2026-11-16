/* f_0x101a7770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101a7770(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->eax = arg1 * 0x37bu;
    g->ecx = arg1;
    g->edx = rd32(COW_IMG(0x104dfd98u));
    t1 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 <= 1u)
    {
        eax = t2;
        goto L_101a77b1;
    }
    eax = t2;
    ecx = (t3 & 0xffffff00u) | 1u;
    edx = t4;
    esi = arg1 * 0xdecu + t1 + 0x9894u;
    edx = (edx & 0xffff0000u) | (uint16_t)arg2;
L_101a77a3: ;
    if (rd16(esi) == (uint16_t)edx) goto L_101a77b5;
    if ((uint8_t)((uint8_t)ecx + 1u) < (uint8_t)eax)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
        esi = esi + 0x2cu;
        goto L_101a77a3;
    }
L_101a77b1: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_101a77b5: ;
    return (eax & 0xffffff00u) | rd8(esi + 2u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a7770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
