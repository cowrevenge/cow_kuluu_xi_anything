/* f_0x100a0010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_100a0010(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)arg1 * 4u) == 0u) goto L_100a0079;
    ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)arg1 * 4u);
    if (!(rd32(ecx + 0x120u) >> 9u & 1u)) goto L_100a0079;
    if ((rd32(ecx + 0x78u) & 0xff000000u) != 0x1000000u) goto L_100a0079;
    edx = rd32(ecx + 0x78u) & 0xff000000u;
    if (rd8(ecx + 0xeeu) == 1u) goto L_100a0057;
    edx = (edx & 0xffffff00u) | rd8(ecx + 0xeeu);
    if ((uint8_t)edx == 2u) goto L_100a0057;
    if ((uint8_t)edx != 7u) goto L_100a0079;
L_100a0057: ;
    if (rd16(ecx + 0xfcu) == 0x52u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100a007c;
    }
    ecx = (ecx & 0xffff0000u) | rd16(ecx + 0xfcu);
    if ((uint16_t)ecx == 0x3d5u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100a007c;
    }
    if ((uint16_t)ecx == 0x58au)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100a007c;
    }
    if ((uint16_t)ecx == 0x939u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100a007c;
    }
L_100a0079: ;
    eax = in_eax & 0xffff0000u;
L_100a007c: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a0010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a0010(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
